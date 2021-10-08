#include "DepLoan.h"

std::ostream& operator<<(std::ostream& os, const DepLoan& temp)
{
	os << temp.name << ' ' << temp.balance << ' ' << temp.availability << ' ' << temp.rate << ' ' << temp.date << ' ' << temp.type;
	return os;
}

std::istream& operator>>(std::istream& is, DepLoan& temp)
{
	is >> temp.name >> temp.balance >> temp.availability >> temp.rate >> temp.date >> temp.type;
	return is;
}