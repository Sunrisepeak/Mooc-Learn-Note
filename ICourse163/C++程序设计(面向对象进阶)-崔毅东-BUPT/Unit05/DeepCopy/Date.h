#pragma once
#include<iostream>
#include<string>
using std::to_string;
class Date {
	int year{ 2020 };
	int month{ 11 };
	int day{ 18 };
public:
	Date() = default;
	Date(int y, int m, int d);
	std::string toString();
	int getYear();
	int getMonth();
	int getDay();
	void setDay(int _day);
};