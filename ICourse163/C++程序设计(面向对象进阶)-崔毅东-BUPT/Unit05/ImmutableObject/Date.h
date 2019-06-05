#pragma once
#include <iostream>
#include <string>

class Date {
private:
	int year = 2019, month = 6, day = 5;
public:
	int getYear() { return year; }
	int getMonth() { return month; }
	int getDay() { return day; }
	void setYear(int year_) { year = year_; }
	void setMonth(int month_) { month = month_; }
	void setDay(int day_) { day = day_; }
	Date() = default;
	Date(int year_, int month_, int day_) : year{ year_ }, month{ month_ }, day{ day_ } {}
	std::string toString()
	{
		return std::to_string(year) + "-" + std::to_string(month) + "-" + std::to_string(day);
	}
};