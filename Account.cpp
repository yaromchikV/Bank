#include "Account.h"

std::ostream& operator<<(std::ostream& os, const Account& temp)
{
	os << temp.name << ' ' << temp.balance << ' ' << temp.availability;
	return os;
}

std::istream& operator>>(std::istream& is, Account& temp)
{
	is >> temp.name >> temp.balance >> temp.availability;
	return is;
}
