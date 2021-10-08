#include "Admin.h"

void Admin::completeTasks(Database& db)
{
	std::fstream file;
	file.open(TASKFILE, std::fstream::in);
	std::string buffer;
	int sender, receiver;
	while (true) {
		double amount = 0;
		file >> sender >> receiver >> amount;
		if (amount == 0)
			break;
		bool found = false;
		for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
			if (it.second().getAccounts().find(receiver) != it.second().getAccounts().end()) {
				it.second().getAccounts().at(receiver).recharge(amount);
				found = true;
				logEntry("Admin :: Cчёт id" + std::to_string(receiver) + " принял перевод (" + std::to_string(amount) + ") от id" + std::to_string(sender));
				break;
			}
		}
		if (!found) {
			for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
				if (it.second().getAccounts().find(sender) != it.second().getAccounts().end()) {
					it.second().getAccounts().at(sender).recharge(amount);
					logEntry("Admin :: Cчёт id" + std::to_string(receiver) + " не был найден, перевод (" + std::to_string(amount) + ") возвращен id" + std::to_string(sender));
					break;
				}
			}
		}
		getline(file, buffer);
	}
	file.close();
	db.clearTasksFile();
	db.rewriteFileOfAccounts();
}

void Admin::freezeAccount(Database& db, int clientID, int id)
{
	db.cls.at(clientID).getAccounts().at(id).setAvailability(false);
	db.rewriteFileOfAccounts();
	logEntry("Admin :: Заморожен счёт: id" + std::to_string(id));
}

void Admin::unfreezeAccount(Database& db, int clientID, int id)
{
	db.cls.at(clientID).getAccounts().at(id).setAvailability(true);
	db.rewriteFileOfAccounts();
	logEntry("Admin :: Разморожен счёт: id" + std::to_string(id));
}

void Admin::deleteClient(Database& db, int id)
{
	db.cls.erase(id);
	db.rewriteFileOfClients();
	db.rewriteFileOfAccounts();
	db.rewriteFileOfDepLoans();
	logEntry("Admin :: Удалён клиент: id" + std::to_string(id));
}

void Admin::addNewClient(Database& db, std::string name, std::string login, std::string password)
{
	int id = db.generateID();
	password = db.getHash(id, password);
	Client newClient(name, login, password, CLIENT);
	Account newAccount("Новый", 0, true);
	int accountID = stoi(std::to_string(id) + "001");
	newClient.addAccount(accountID, newAccount);
	db.addClient(id, newClient);
	db.writeEndFileClients(id, newClient);
	db.writeEndFileAccounts(accountID, newAccount);
	logEntry("Admin :: Зарегистрирован новый клиент: id" + std::to_string(id));
}

bool Admin::isRequests(Database& db)
{
	for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
		if (it.second().getAccess() == WAITING)
			return true;
	}
	return false;
}

bool Admin::isDebtors(Database& db)
{
	for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
		if (getCurrentDate() > it.second().getMyLoan().getDate())
			return true;
	}
	return false;
}

void Admin::confirmRequest(Database& db, int id)
{
	db.cls.at(id).setAccess(CLIENT);
	Account newAccount("Новый", 0, true);
	int accountID = stoi(std::to_string(id) + "001");
	db.cls.at(id).addAccount(accountID, newAccount);
	db.rewriteFileOfClients();
	db.rewriteFileOfAccounts();
	logEntry("Admin :: Одобрен запрос на регистрацию id" + std::to_string(id));
}

void Admin::cancelRequest(Database& db, int id)
{
	db.cls.at(id).setAccess(CANCELLED);
	db.rewriteFileOfClients();
	logEntry("Admin:: Отклонён запрос на регистрацию id" + std::to_string(id));
}
