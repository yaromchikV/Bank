#pragma once
#include "Admin.h"

class Auth
{
private:
	int id; // id клиента
	int access; // Уровень доступа

public:
	Admin* itsAdmin; // Объект для работы от имени администратора
	Client* itsClient; // Объект для работы от имени клиента

	Auth() :id(0), access(NOT_EXIST) {}
	void logIn(Database& db, std::string login, std::string password); // Вход в систему
	void signUp(Database& db, std::string name, std::string login, std::string password, std::string passwordRepeate); // Регистрация
	bool isBusyLogin(Database& db, std::string login); // Проверка, занят ли логин

	auto& getAccess() { return access; }

private:
	void authorization(Database& db, std::string login, std::string password); // Получение прав доступа
	void deleteCancelledRequest(Database& db, int id); // Удалить отклонённую заявку
};