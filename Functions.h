#pragma once
#include <fstream>
#include <string>
#include <Windows.h>
#include <ctime>
 
std::string getCurrentDate(); // Получить системную дату
std::string getCurrentTime(); // Получить системное время
std::string getModifiedDate(std::string date, int months); // Получить измененную дату
void removeSpaces(std::string& str); // Удалить пробелы
void logEntry(std::string text); // Записать в log-файл
std::string convert_S_to_s(System::String^ str); // Конвертировать управляемый String^ в std::string
System::String^ convert_s_to_S(std::string str); // Конвертировать std::string в управляемый String^