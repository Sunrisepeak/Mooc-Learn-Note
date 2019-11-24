#include "Employee.h"	//include "Date.h"
#include "Date.h" //unuseful

Employee::Employee() :name{ "orig-name" }, birthday{ new Date() } {}

Employee::Employee(string _name, Date* _birthday) {
	name = _name;
	birthday = _birthday;
	std::cout << "create a new Employee." + name + " " + birthday->toString() << std::endl;
}

Employee::Employee(const Employee& e) {
	name = e.name;	//issue1 about e.name is private
					//in same class it would is friend

//	Date temp = e.getBirthday();	//error about const key ?
	birthday = new Date(*e.birthday);	//deep copy
	
	std::cout << "deep-ctr complete for birthday of Date*" << std::endl;
}

Date& Employee::getBirthday() {
	return *birthday;
}

string Employee::toString() {
	return name + " " + birthday->toString();
}



