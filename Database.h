#pragma once
#include "Client.h"

const std::string CLIENTSFILE = "Clients.txt";
const std::string ACCOUNTSFILE = "Accounts.txt";
const std::string DEPLOANSFILE = "DepLoans.txt";

class Database
{
private:
	myMap<int, Client> cls; // ��������� ��������
	friend class Auth;
	friend class Admin;

public:
	Database();

	void rewriteFileOfClients(); // ������������ ���� ��������
	void rewriteFileOfAccounts(); // ������������ ���� ������
	void rewriteFileOfDepLoans(); // ������������ ���� ���������/������

	auto& getClients() { return cls; }

private:
	void createFile(const std::string& filename); // ������� ����
	void readFileOfClients(); // ��������� ���� ��������
	void readFileOfAccounts(); // ��������� ���� ������
	void readFileOfDepLoans(); // ��������� ���� ���������/������
	bool isFileEmpty(const std::string& filename); // ��������, ���� �� ����
	void writeEndFileClients(int id, const Client& newClient); // �������� � ���� ��������
	void writeEndFileAccounts(int id, const Account& newAccount); // �������� � ���� ������
	void writeEndFileDepLoans(int cid, const DepLoan& newDepLoan); // �������� � ���� ���������/������
	void clearTasksFile(); // �������� ���� �����

	int generateID(); // ������������� id
	void addClient(int id, const Client& newClient) { cls.emplace(id, newClient); }

	int getRequiredChar(int ch); // �������� ���������� ������
	int getControlSum(int id, std::string password); // �������� ����������� ����� 
	std::string getHash(int id, std::string password); // �������� ��� � ������� ������ � id
};

