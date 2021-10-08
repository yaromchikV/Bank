#include "Functions.h"

std::string getCurrentDate()
{
	tm localtime;
	time_t now = time(NULL);
	localtime_s(&localtime, &now);
	int day = localtime.tm_mday;
	int month = 1 + localtime.tm_mon;
	int year = 1900 + localtime.tm_year;
	std::string strDay, strMonth, strYear;
	strYear = std::to_string(year);
	strMonth = month < 10 ? '0' + std::to_string(month) : std::to_string(month);
	strDay = day < 10 ? '0' + std::to_string(day) : std::to_string(day);
	return strYear + '/' + strMonth + '/' + strDay;
}

std::string getCurrentTime()
{
	tm localtime;
	time_t now = time(NULL);
	localtime_s(&localtime, &now);
	int hour = localtime.tm_hour;
	int minute = localtime.tm_min;
	int second = localtime.tm_sec;
	std::string strHour, strMinute, strSecond;
	strHour = hour < 10 ? '0' + std::to_string(hour) : std::to_string(hour);
	strMinute = minute < 10 ? '0' + std::to_string(minute) : std::to_string(minute);
	strSecond = second < 10 ? '0' + std::to_string(second) : std::to_string(second);
	return strHour + ':' + strMinute + ':' + strSecond;
}

std::string getModifiedDate(std::string date, int months)
{
	int year = std::stoi(date.substr(0, 4));
	int month = std::stoi(date.substr(5, 2));
	int day = std::stoi(date.substr(8, 2));
	int newMonth = (((month - 1) + months) % 12) + 1;
	int	newYear = year + (((month - 1) + months) / 12);
	std::string strYear, strMonth, strDay;
	strYear = std::to_string(newYear);
	strMonth = newMonth < 10 ? '0' + std::to_string(newMonth) : std::to_string(newMonth);
	strDay = day < 10 ? '0' + std::to_string(day) : std::to_string(day);
	return strYear + '/' + strMonth + '/' + strDay;
}

void removeSpaces(std::string& str)
{
	std::string newStr = "";
	for (int i = 0; i < str.size(); i++) {
		if (str.at(i) != ' ')
			newStr += str.at(i);
	}
	str = newStr;
}

void logEntry(std::string text)
{
	std::fstream file("log.txt", std::fstream::app);
	file << getCurrentDate() << ' ' << getCurrentTime() << " | " << text << '\n';
	file.close();
}

std::string convert_S_to_s(System::String^ text)
{
	using namespace System::Runtime::InteropServices;
	const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(text)).ToPointer();
	std::string os = chars;
	Marshal::FreeHGlobal(System::IntPtr((void*)chars));
	return os;
}

System::String^ convert_s_to_S(std::string text)
{
	return gcnew System::String(text.c_str());
}