#include <iostream>

#include "Date.h"
#include "Employee.h"

//task4: create Employee Object and modify its birthday
int main()
{
	Employee e;
	//1: setter
	e.setBirthday(Date(2020, 1, 1));
	std::cout << e.toString() << std::endl;
	
	
	//2: getter
	e.getBirthday()->setDay(5);
	std::cout << e.toString() << std::endl;

	std::cin.get();
	return 0;
}