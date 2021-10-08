#pragma warning(disable:4018)
#pragma warning(disable:4267)
#include "Database.h"

Database::Database()
{
	readFileOfClients();
	readFileOfAccounts();
	readFileOfDepLoans();
}

void Database::createFile(const std::string& fileName)
{
	try {
		std::fstream file;
		file.exceptions(std::fstream::badbit | std::fstream::failbit);
		file.open(fileName, std::fstream::app);
		file.close();
	}
	catch (const std::fstream::failure&) {
		exit(0);
	}
}

bool Database::isFileEmpty(const std::string& filename)
{
	return std::ifstream(filename).peek() == EOF;
}

void Database::readFileOfClients()
{
	std::fstream file;
	file.open(CLIENTSFILE, std::fstream::in);
	if (file.is_open())
	{
		if (!isFileEmpty(CLIENTSFILE)) {
			std::string buffer;
			while (true)
			{
				int tempID = 0;
				Client client;
				file >> tempID >> client;
				if (tempID == 0)
					break;
				addClient(tempID, client);
				getline(file, buffer);
				int i = cls.size();
			}
		}
		file.close();
	}
	else createFile(CLIENTSFILE);
}

void Database::readFileOfAccounts()
{
	std::fstream file;
	file.open(ACCOUNTSFILE, std::fstream::in);
	if (file.is_open())
	{
		if (!isFileEmpty(ACCOUNTSFILE)) {
			std::string buffer;
			while (true)
			{
				std::string tempID;
				Account account;
				file >> tempID >> account;
				if (tempID == "")
					break;
				int id = stoi(tempID);
				int clientID = stoi(tempID.substr(0, 7));
				cls.at(clientID).addAccount(id, account);
				getline(file, buffer);
			}
		}
		file.close();
	}
	else createFile(ACCOUNTSFILE);
}

void Database::readFileOfDepLoans()
{
	std::fstream file;
	file.open(DEPLOANSFILE, std::fstream::in);
	if (file.is_open())
	{
		if (!isFileEmpty(DEPLOANSFILE)) {
			std::string buffer;
			while (true)
			{
				int clientID = 0;
				DepLoan deploan;
				file >> clientID >> deploan;
				if (clientID == 0) 
					break;
				switch (deploan.getType())
				{
				case true:	cls.at(clientID).setDeposit(deploan);	break;
				case false: cls.at(clientID).setLoan(deploan);		break;
				}
				getline(file, buffer);
			}
		}
		file.close();
	}
	else createFile(DEPLOANSFILE);
}

void Database::rewriteFileOfClients()
{
	std::fstream file(CLIENTSFILE, std::fstream::out);
	for (auto it = cls.begin(); it != cls.end(); ++it) {
		file << it.first() << ' ' << it.second() << std::endl;
	}
	file.close();
}

void Database::rewriteFileOfAccounts()
{
	std::fstream file(ACCOUNTSFILE, std::fstream::out);
	for (auto it = cls.begin(); it != cls.end(); ++it) {
		for (auto jt = it.second().getAccounts().begin(); jt != it.second().getAccounts().end(); ++jt) {
			file << jt.first() << ' ' << jt.second() << std::endl;
		}
	}
	file.close();
}

void Database::rewriteFileOfDepLoans()
{
	std::fstream file(DEPLOANSFILE, std::fstream::out);
	for (auto it = cls.begin(); it != cls.end(); ++it) {
		if (it.second().getMyDeposit().getName() != UNNAMED)
			file << it.first() << ' ' << it.second().getMyDeposit() << std::endl;
		if (it.second().getMyLoan().getName() != UNNAMED)
			file << it.first() << ' ' << it.second().getMyLoan() << std::endl;
	}
	file.close();
}

void Database::writeEndFileClients(int id, const Client& newClient)
{
	std::fstream file(CLIENTSFILE, std::fstream::app);
	file << id << ' ' << newClient << std::endl;
	file.close();
}

void Database::writeEndFileAccounts(int id, const Account& newAccount)
{
	std::fstream file(ACCOUNTSFILE, std::fstream::app);
	file << id << ' ' << newAccount << std::endl;
	file.close();
}

void Database::writeEndFileDepLoans(int clientID, const DepLoan& newDepLoan)
{
	std::fstream file(DEPLOANSFILE, std::fstream::app);
	file << clientID << ' ' << newDepLoan << std::endl;
	file.close();
}

void Database::clearTasksFile()
{
	std::fstream file(TASKFILE, std::fstream::out);
	file.close();
}

int Database::generateID()
{
	int maxID = 1000000;
	auto it = cls.rbegin();
	if (cls.rbegin() != nullptr)
		maxID = it.first();
	return maxID + 1;
}

int Database::getRequiredChar(int ch)
{
	ch += 256;
	while (!((ch >= 48 && ch <= 57) || (ch >= 97 && ch <= 122))) {
		if (ch < 48)
			ch += 24;
		else
			ch -= 80;
	}
	return ch;
}

int Database::getControlSum(int id, std::string password)
{
	int sault = 0;
	for (int i = 0; i < password.size(); i++) {
		sault += (id % 100) + password.at(i);
	}
	return sault;
}

std::string Database::getHash(int id, std::string password)
{
	std::string hash;
	int lengthHash = 32;
	int sault = getControlSum(id, password);
	int lengthStr = password.size();
	int maxLengthHash = lengthHash * 4;
	int addCount = maxLengthHash - lengthStr;
	for (int i = 0; i < addCount; i++) {
		password += getRequiredChar(password.at(i) + password.at(i + 1));			// Добавлять к паролю символы, пока его длина не станет 128 символов
	}
	for (int i = 0, center = password.size() / 2; i < center; i++) {
		hash += getRequiredChar(password.at(center - i) + password.at(center + i));	// Хэшировать от центра, уменьшая длину хэша в 2 раза (до 64)
	}
	password = hash;
	hash.clear();
	for (int i = 0; hash.size() < lengthHash; i++) {							// Хэшировать, уменьшая длину хэша в 2 раза (до 32) 
		if (i % 5 == 0)
			hash += getRequiredChar(password.at(i) + sault);
		else if (i % 2 == 0)
			hash += getRequiredChar(password.at(i) + password.at(i + 1));
		else
			hash += password.at(i);
	}
	return hash;
}