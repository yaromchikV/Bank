#pragma once
#include "Database.h"

const std::string ADMIN_LOGIN = "admin";
const std::string ADMIN_PASSWORD = "admin";

class Admin
{
public:
	void completeTasks(Database& db); // ��������� ����������

	void freezeAccount(Database& db, int clientID, int id); // ���������� ����
	void unfreezeAccount(Database& db, int clientID, int id); // ����������� ����

	void addNewClient(Database& db, std::string name, std::string login, std::string password); // ���������������� ������ �������
	void deleteClient(Database& db, int id); // ������� �������

	bool isRequests(Database& db); // ��������, ���� �� ������ �� �����������
	bool isDebtors(Database& db); // ��������, ���� �� ��������
	void confirmRequest(Database& db, int id); // ������� ������
	void cancelRequest(Database& db, int id); // ��������� ������
};
