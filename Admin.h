#pragma once
#include "Database.h"

const std::string ADMIN_LOGIN = "admin";
const std::string ADMIN_PASSWORD = "admin";

class Admin
{
public:
	void completeTasks(Database& db); // Выполнить транзакции

	void freezeAccount(Database& db, int clientID, int id); // Заморозить счёт
	void unfreezeAccount(Database& db, int clientID, int id); // Разморозить счёт

	void addNewClient(Database& db, std::string name, std::string login, std::string password); // Зарегистрировать нового клиента
	void deleteClient(Database& db, int id); // Удалить клиента

	bool isRequests(Database& db); // Проверка, есть ли заявки на регистрацию
	bool isDebtors(Database& db); // Проверка, есть ли должники
	void confirmRequest(Database& db, int id); // Принять заявку
	void cancelRequest(Database& db, int id); // Отклонить заявку
};
