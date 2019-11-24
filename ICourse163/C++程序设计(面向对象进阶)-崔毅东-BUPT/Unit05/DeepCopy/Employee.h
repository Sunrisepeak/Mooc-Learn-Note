#pragma once
#include<iostream>
#include "Date.h"

using std::string;

class Employee {
private:
	string name;
	Date* birthday;  //ptr-variable of test deep copy
public:
	Employee();

	Employee(string _name, Date* _birthday);

	Employee(const Employee& e);	//deep copy-construction

	Date& getBirthday();	//& type -- > modify birthday

	string toString();

};