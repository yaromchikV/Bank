#include "Auth.h"

void Auth::logIn(Database& db, std::string login, std::string password)
{
	authorization(db, login, password);
	if (access == CLIENT) {
		auto it = db.cls.find(id);
		itsClient = &it.second();
		itsClient->setID(id);
		itsClient->depositCheck();
		itsClient->loanCheck();
	}
	else if (access == ADMIN) {
		itsAdmin->completeTasks(db);
	}
	else if (access == CANCELLED) {
		deleteCancelledRequest(db, id);
	}
}

void Auth::authorization(Database& db, std::string login, std::string password)
{
	if (login != ADMIN_LOGIN && password != ADMIN_PASSWORD) {
		for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
			if (login == it.second().getLogin()) {
				id = it.first();
				password = db.getHash(id, password);
				if (password == it.second().getPassword())
					access = it.second().getAccess();
				break;
			}
		}
	}
	else access = ADMIN;
}

void Auth::signUp(Database& db, std::string name, std::string login, std::string password, std::string passwordRepeate)
{
	int id = db.generateID();
	password = db.getHash(id, password);
	Client newClient(name, login, password, WAITING);
	db.addClient(id, newClient);
	db.writeEndFileClients(id, newClient);
	logEntry("Client :: Новый запрос на регистрацию: id" + std::to_string(id));
}

bool Auth::isBusyLogin(Database& db, std::string login)
{
	if (login == ADMIN_LOGIN) 
		return true;
	for (auto it = db.cls.begin(); it != db.cls.end(); ++it) {
		if (it.second().getLogin() == login)
			return true;
	}
	return false;
}

void Auth::deleteCancelledRequest(Database& db, int id)
{
	db.cls.erase(id);
	db.rewriteFileOfClients();
}
