#pragma once
#include "DepLoan.h"

class Account
{
private:
	std::string name; // Название счёта
	double balance; // Баланс счёта 
	bool availability; // Состояние счёта (активен/заморожен)

public:
	Account() : name(UNNAMED), balance(0), availability(false) {}
	Account(std::string name, double balance, bool availability) : name(name), balance(balance), availability(availability) {}

	void recharge(double amount) { balance += amount; } // Пополнение счёта
	void withdraw(double amount) { balance -= amount; } // Списание со счёта
	void freezeAccount() { availability = false; } // Заморозка счёта

	auto& getName() { return name; }
	auto& getBalance() { return balance; }
	auto& getAvailability() { return availability; }

	void setName(std::string name) { this->name = name; }
	void setBalance(double balance) { this->balance = balance; }
	void setAvailability(bool availability) { this->availability = availability; }

	friend std::ostream& operator<<(std::ostream& os, const Account& temp);
	friend std::istream& operator>>(std::istream& is, Account& temp);
};