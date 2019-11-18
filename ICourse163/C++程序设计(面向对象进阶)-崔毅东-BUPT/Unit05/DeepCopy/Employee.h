#pragma once
#include<iostream>
#include "Date.h"

using std::string;

class Employee {
private:
	string name;
	Date* birthday;
public:
	Employee() {}
};