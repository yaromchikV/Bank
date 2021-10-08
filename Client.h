#pragma once
#include "Account.h"
#include "MyMap.h"

enum AccessLevel { // ������ �������
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
	int id; // id �������
	std::string fullname; // �.�.�.
	std::string login; // �����
	std::string password; // ������
	int access; // ������� �������
	myMap<int, Account> acs; // ��������� ������
	DepLoan myDeposit; // ������ ��� ��������
	DepLoan myLoan; // ������ ��� �����

public:
	Client() : id(0), fullname(UNNAMED), login(UNNAMED), password(UNNAMED), access(NOT_EXIST) {}
	Client(std::string name, std::string login, std::string password, int access) : id(0), fullname(name), login(login), password(password), access(access) {}

	void loanCheck(); // ��������� ��������� �����
	void depositCheck(); // ��������� ��������� ��������

	void createAccount(std::string name); // ������� ����
	void freezeAccount(int id); // ���������� ����
	void closeAccount(int id); // ������� ����
	void openDeposit(std::string name, int id, double amount, int time); // �������� �������
	void getLoan(int id, std::string name, double amount, int time); // �������� ���
	 
	void makeLoanPayment(int id, double amount); // ������� ����� �� ����� 
	void closeDeposit(int id); // ������� �������

	double calculateTotalSum(double rate, double amount, int time); // ���������� �������� ����� ��������/�����
	double calculateMaxAmount(); // ���������� ������������ ����� �����
	double calculateComission(double amount); // ���������� �������� ��� ��������

	bool isAllAccountsFrozen(); // ��������, ��� �� ����� ����������
	bool isAmountLessTheBalance(int id, double amount); // ��������, ������ �� ������� ����� �������� �����

	void recharge(int id, double amount); // ��������� ����
	void withdraw(int id, double amount); // ������� �� �����
	void transfer(int id, int receiver, double amount); // ������� �� ����
	void createTask(int sender, int receiver, double amount); // �������� ���������� � ������

	void addAccount(int id, const Account& newAccount) { acs.emplace(id, newAccount); } // �������� �������

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