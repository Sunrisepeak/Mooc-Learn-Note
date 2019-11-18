#include <iostream>
#include "Date.h"
#include "Employee.h"

int Employee::numberOfObjects = 0;
int main() {
	Employee e1;
	Employee* e2 = new Employee{ "John", Gender::male, Date(1900, 3, 2) };
	{
		Employee e3;
	}	// run Destructor in the end '{}'
	std::cin.get();
	return 0;
}