#pragma once
#include "Account.h"
#include "MyMap.h"

enum AccessLevel { // Уровни доступа
	NOT_EXIST = -2,
	CANCELLED,
	WAITING,
	CLIENT,
	ADMIN
};

const int MAX_NUMBER_OF_ACCOUNTS = 5;
const std::string TASKFILE = "tasks.txt";

class Client
{
private:
	int id; // id клиента
	std::string fullname; // Ф.И.О.
	std::string login; // Логин
	std::string password; // Пароль
	int access; // Уровень доступа
	myMap<int, Account> acs; // Контейнер счетов
	DepLoan myDeposit; // Объект для депозита
	DepLoan myLoan; // Объект для займа

public:
	Client() : id(0), fullname(UNNAMED), login(UNNAMED), password(UNNAMED), access(NOT_EXIST) {}
	Client(std::string name, std::string login, std::string password, int access) : id(0), fullname(name), login(login), password(password), access(access) {}

	void loanCheck(); // Проверить состояние займа
	void depositCheck(); // Проверить состояние депозита

	void createAccount(std::string name); // Открыть счёт
	void freezeAccount(int id); // Заморозить счёт
	void closeAccount(int id); // Закрыть счёт
	void openDeposit(std::string name, int id, double amount, int time); // Оформить депозит
	void getLoan(int id, std::string name, double amount, int time); // Оформить заём
	 
	void makeLoanPayment(int id, double amount); // Сделать платёж по займу 
	void closeDeposit(int id); // Закрыть депозит

	double calculateTotalSum(double rate, double amount, int time); // Рассчитать итоговую сумму депозита/займа
	double calculateMaxAmount(); // Рассчитать максимальную сумму займа
	double calculateComission(double amount); // Рассчитать комиссию при переводе

	bool isAllAccountsFrozen(); // Проверка, все ли счета заморожены
	bool isAmountLessTheBalance(int id, double amount); // Проверка, меньше ли баланса счёта введённая сумма

	void recharge(int id, double amount); // Пополнить счёт
	void withdraw(int id, double amount); // Списать со счёта
	void transfer(int id, int receiver, double amount); // Перевод на счёт
	void createTask(int sender, int receiver, double amount); // Записать транзакцию в задачи

	void addAccount(int id, const Account& newAccount) { acs.emplace(id, newAccount); } // Добавить аккаунт

	auto& getID() { return id; } 
	auto& getFullname() { return fullname; }
	auto& getLogin() { return login; }
	auto& getPassword() { return password; }
	auto& getAccess() { return access; }
	auto& getAccounts() { return acs; }
	auto& getMyDeposit() { return myDeposit; }
	auto& getMyLoan() { return myLoan; }

	void setID(int id) { this->id = id; }
	void setName(std::string name) { this->fullname = name; }
	void setAccess(int access) { this->access = access; }
	void setDeposit(DepLoan newDeposit) { this->myDeposit = newDeposit; }
	void setLoan(DepLoan newLoan) { this->myLoan = newLoan; }

	friend std::ostream& operator<<(std::ostream& os, const Client& temp);
	friend std::istream& operator>>(std::istream& is, Client& temp);
};