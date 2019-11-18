#include<iostream>
class Date {
	int year{ 2020 };
	int moth{ 11 };
	int day{ 18 };
public:
	Date() = default;
	Date(int y, int m, int d) : year{ y }, moth{ m }, day{ d } {}
	std::string toString() {
		std::cout << year << moth << day << std::endl;
	}
};