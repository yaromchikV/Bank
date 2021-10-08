#pragma once
#include "Client.h"

const std::string CLIENTSFILE = "Clients.txt";
const std::string ACCOUNTSFILE = "Accounts.txt";
const std::string DEPLOANSFILE = "DepLoans.txt";

class Database
{
private:
	myMap<int, Client> cls; // Контейнер клиентов
	friend class Auth;
	friend class Admin;

public:
	Database();

	void rewriteFileOfClients(); // Перезаписать файл клиентов
	void rewriteFileOfAccounts(); // Перезаписать файл счетов
	void rewriteFileOfDepLoans(); // Перезаписать файл депозитов/займов

	auto& getClients() { return cls; }

private:
	void createFile(const std::string& filename); // Создать файл
	void readFileOfClients(); // Прочитать файл клиентов
	void readFileOfAccounts(); // Прочитать файл счетов
	void readFileOfDepLoans(); // Прочитать файл депозитов/займов
	bool isFileEmpty(const std::string& filename); // Проверка, пуст ли файл
	void writeEndFileClients(int id, const Client& newClient); // Дозапись в файл клиентов
	void writeEndFileAccounts(int id, const Account& newAccount); // Дозапись в файл счетов
	void writeEndFileDepLoans(int cid, const DepLoan& newDepLoan); // Дозапись в файл депозитов/займов
	void clearTasksFile(); // Очистить файл задач

	int generateID(); // Сгененировать id
	void addClient(int id, const Client& newClient) { cls.emplace(id, newClient); }

	int getRequiredChar(int ch); // Получить измененный символ
	int getControlSum(int id, std::string password); // Получить контрольную сумму 
	std::string getHash(int id, std::string password); // Получить хеш с помощью пароля и id
};

