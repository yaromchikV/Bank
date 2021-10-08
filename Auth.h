#pragma once
#include "Admin.h"

class Auth
{
private:
	int id; // id �������
	int access; // ������� �������

public:
	Admin* itsAdmin; // ������ ��� ������ �� ����� ��������������
	Client* itsClient; // ������ ��� ������ �� ����� �������

	Auth() :id(0), access(NOT_EXIST) {}
	void logIn(Database& db, std::string login, std::string password); // ���� � �������
	void signUp(Database& db, std::string name, std::string login, std::string password, std::string passwordRepeate); // �����������
	bool isBusyLogin(Database& db, std::string login); // ��������, ����� �� �����

	auto& getAccess() { return access; }

private:
	void authorization(Database& db, std::string login, std::string password); // ��������� ���� �������
	void deleteCancelledRequest(Database& db, int id); // ������� ���������� ������
};