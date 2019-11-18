#include<iostream>
#include<string>
using std::to_string;
class Date {
	int year{ 2020 };
	int moth{ 11 };
	int day{ 18 };
public:
	Date() = default;
	Date(int y, int m, int d) : year{ y }, moth{ m }, day{ d } {}
	std::string toString() {
		return to_string(year) + "y" + to_string(moth) + "m" + to_string(day) + "d";
	}
};