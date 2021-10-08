#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <ctime>
 
std::string getCurrentDate(); // �������� ��������� ����
std::string getCurrentTime(); // �������� ��������� �����
std::string getModifiedDate(std::string date, int months); // �������� ���������� ����
void removeSpaces(std::string& str); // ������� �������
void logEntry(std::string text); // �������� � log-����
std::string convert_S_to_s(System::String^ str); // �������������� ����������� String^ � std::string
System::String^ convert_s_to_S(std::string str); // �������������� std::string � ����������� String^