#pragma once
#include "Functions.h"

const double DEPOSIT_RATE = 10;
const double LOAN_RATE = 15;
const double COMISSION = 1;

const std::string UNNAMED = "_unnamed_";

class DepLoan
{
private:
	std::string name; // Название депозита/займа
	double balance; // Баланс
	bool availability; // Состояние (активен/завершён)
	double rate; // Процентная ставка
	std::string date; // Дата завершения
	bool type; // Тип класса (1 - депозит, 0 - заём)

public:
	DepLoan() : name(UNNAMED), balance(0), availability(true), rate(0), date("1970.01.01"), type(false) {}
	DepLoan(std::string name, double balance, bool availability, double rate, std::string date, bool type) :name(name), balance(balance), availability(availability), rate(rate), date(date), type(type) {}

	auto& getName() { return name; }
	auto& getBalance() { return balance; }
	auto& getAvailability() { return availability; }
	auto& getRate() { return rate; }
	auto& getDate() { return date; }
	auto& getType() { return type; }

	void setName(std::string name) { this->name = name; }
	void setBalance(double balance) { this->balance = balance; }
	void setAvailability(bool availability) { this->availability = availability; }
	void setRate(double rate) { this->rate = rate; }
	void setDate(std::string date) { this->date = date; }
	void setType(bool type) { this->type = type; }

	friend std::ostream& operator<<(std::ostream& os, const DepLoan& temp);
	friend std::istream& operator>>(std::istream& is, DepLoan& temp);
};