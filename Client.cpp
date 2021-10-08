#include "Client.h"

void Client::loanCheck()
{
	if (myLoan.getName() != UNNAMED) {
		if (getCurrentDate() > myLoan.getDate() && myLoan.getAvailability()) {
			myLoan.setAvailability(false);
			for (auto it = acs.begin(); it != acs.end(); ++it) {
				it.second().setAvailability(false);
			}
			logEntry("Client " + std::to_string(this->id) + " :: За несвоевременную оплату займа заморожены все счета");
		}
	}
}

void Client::depositCheck()
{
	if (myDeposit.getName() != UNNAMED) {
		if (getCurrentDate() > myDeposit.getDate() && myDeposit.getAvailability()) {
			myDeposit.setAvailability(false);
		}
	}
}

void Client::createAccount(std::string name)
{
	Account newAccount(name, 0, true);
	auto it = acs.rbegin();
	int id = it.first() + 1;
	acs.emplace(id, newAccount);
	logEntry("Client " + std::to_string(this->id) + " :: Создан расчётный счёт: id" + std::to_string(id));
}

void Client::closeDeposit(int id)
{
	double amount = myDeposit.getBalance();
	acs.at(id).recharge(amount);
	logEntry("Client " + std::to_string(this->id) + " :: Закрыт депозит, сумма в размере " + std::to_string(amount) + " переведена на счёт id" + std::to_string(id));
	myDeposit.setName(UNNAMED);
}

void Client::makeLoanPayment(int id, double amount)
{
	acs.at(id).withdraw(amount);
	logEntry("Client " + std::to_string(this->id) + " :: Внесён платеж по займу в размере " + std::to_string(amount) + " со счёта id" + std::to_string(id));
	if (amount < myLoan.getBalance()) {
		myLoan.setBalance(myLoan.getBalance() - amount);
	}
	else {
		logEntry("Client " + std::to_string(this->id) + " :: Закрыт заём");
		myLoan.setName(UNNAMED);
	}
}

double Client::calculateTotalSum(double rate, double amount, int time)
{
	return amount + amount * (rate / 12 * time / 100);
}

bool Client::isAllAccountsFrozen()
{
	for (auto it = acs.begin(); it != acs.end(); ++it) {
		if (it.second().getAvailability())
			return false;
	}
	return true;
}

bool Client::isAmountLessTheBalance(int id, double amount)
{
	if (amount <= acs.at(id).getBalance())
		return true;
	return false;
}

void Client::openDeposit(std::string name, int id, double amount, int time)
{
	std::string totalDate = getModifiedDate(getCurrentDate(), time);
	double totalSum = calculateTotalSum(DEPOSIT_RATE, amount, time);
	acs.at(id).withdraw(amount);
	DepLoan newDeposit(name, totalSum, true, DEPOSIT_RATE, totalDate, 1);
	setDeposit(newDeposit);
	logEntry("Client " + std::to_string(this->id) + " :: Оформлен депозит на сумму " + std::to_string(amount) + " со счёта id" + std::to_string(id));
}

double Client::calculateMaxAmount()
{
	double maxBalance = 10;
	for (auto it = acs.begin(); it != acs.end(); ++it) {
		if (it.second().getAvailability())
			maxBalance += it.second().getBalance();	
	}
	return maxBalance * 10; // Максимальная сумма займа
}

void Client::getLoan(int id, std::string name, double amount, int time)
{
	std::string totalDate = getModifiedDate(getCurrentDate(), time);
	double totalSum = calculateTotalSum(LOAN_RATE, amount, time);
	acs.at(id).recharge(amount);
	DepLoan newLoan(name, totalSum, true, LOAN_RATE, totalDate, 0);
	setLoan(newLoan);
	logEntry("Client " + std::to_string(this->id) + " :: Оформлен заём на сумму " + std::to_string(amount));
}

double Client::calculateComission(double amount)
{
	return amount * COMISSION * 0.01;
}

void Client::transfer(int sender, int receiver, double amount)
{
	double comission = calculateComission(amount);
	acs.at(sender).withdraw(amount + comission);
	if (acs.find(receiver) != acs.end())
		acs.at(receiver).recharge(amount);
	else
		createTask(sender, receiver, amount);
	logEntry("Client " + std::to_string(this->id) + " :: Отправлен перевод со счёта id" + std::to_string(sender) + " в размере " + std::to_string(amount) + " на счёт id" + std::to_string(receiver));
}

void Client::createTask(int sender, int receiver, double amount)
{
	std::fstream file(TASKFILE, std::fstream::app);
	file << sender << ' ' << receiver << ' ' << amount << std::endl;
	file.close();
}

void Client::recharge(int id, double amount)
{
	acs.at(id).recharge(amount);
	logEntry("Client " + std::to_string(this->id) + " :: Счёт id" + std::to_string(id) + " пополнен суммой в размере " + std::to_string(amount));
}

void Client::withdraw(int id, double amount)
{
	acs.at(id).withdraw(amount);
	logEntry("Client " + std::to_string(this->id) + " :: Со счёта id" + std::to_string(id) + " снята сумма в размере " + std::to_string(amount));
}

void Client::freezeAccount(int id)
{
	acs.at(id).freezeAccount();
	logEntry("Client " + std::to_string(this->id) + " :: Заморожен счёт: id" + std::to_string(id));
}

void Client::closeAccount(int id)
{
	acs.erase(id);
	logEntry("Client " + std::to_string(this->id) + " :: Закрыт счёт: id" + std::to_string(id));
}

std::ostream& operator<<(std::ostream& os, const Client& temp)
{
	os << temp.fullname << ' ' << temp.login << ' ' << temp.password << ' ' << temp.access;
	return os;
}

std::istream& operator>>(std::istream& is, Client& temp)
{
	is >> temp.fullname >> temp.login >> temp.password >> temp.access;
	return is;
}