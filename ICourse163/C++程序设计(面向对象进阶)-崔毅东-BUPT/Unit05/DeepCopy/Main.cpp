#include <iostream>
#include "Date.h"
#include "Employee.h"

int main() {
	Employee e;
	std::cout << "e1: "<< e.toString() << std::endl;
	Employee e2 = e;
	e2.getBirthday().setDay(996);
	std::cout << "e2: " << e2.toString() << std::endl;
	std::cout << "e1: " << e.toString() << std::endl;
	std::cin.get();
	return 0;
}