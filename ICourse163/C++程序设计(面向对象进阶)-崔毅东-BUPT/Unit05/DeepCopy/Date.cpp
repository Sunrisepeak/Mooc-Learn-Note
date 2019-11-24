#include "Date.h"

Date::Date(int y, int m, int d) : year{ y }, month{ m }, day{ d } {}

std::string Date::toString() {	//return info
	return to_string(year) + "y" + to_string(month) + "m" + to_string(day) + "d";
}

int Date::getYear()
{
	return year;
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

void Date::setDay(int _day) {
	day = _day;
}
