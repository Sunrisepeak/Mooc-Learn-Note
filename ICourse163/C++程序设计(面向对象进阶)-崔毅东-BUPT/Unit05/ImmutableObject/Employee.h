#include <iostream>
#include <string>
//user defind to use char "" for include head file
#include "Date.h"
//C++11 def enum in range
enum class Gender {
	male,
	female,
};

class Employee {
private:
	std::string name;
	Gender gender;
	Date birthday;
public:
	Employee() = default;
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { this->birthday = birthday; }
	Gender getGender() { return gender; }
	Date* getBirthday() 
	{
		return &birthday;
	}

	std::string toString()
	{
		return name + (gender == Gender::male ? std::string("male") : "famele") +
			birthday.toString();
	}

	Employee(std::string name, Gender gender, Date birthday) : name{ name }, gender{ gender },
		birthday{ birthday } {};


};