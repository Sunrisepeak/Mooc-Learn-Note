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
	Date* birthday;
	static int numberOfObjects;
public:
	void setName(std::string name) { this->name = name; }
	void setGender(Gender gender) { this->gender = gender; }
	void setBirthday(Date birthday) { *(this->birthday) = birthday; }
	Gender getGender() { return gender; }
	Date* getBirthday()
	{
		return birthday;
	}

	std::string toString()
	{
		return name + (gender == Gender::male ? std::string(" male ") : " famele ") +
			birthday->toString() + " now employee number is " + std::to_string(numberOfObjects);
	}

	Employee(std::string name, Gender gender, Date birthday) : name{ name }, gender{ gender }{
		numberOfObjects++;
		this->birthday = new Date{ birthday };
		std::cout << this->toString() << std::endl;
	};

	Employee() : Employee("Alan", Gender::male, Date(2000, 4, 4) ){}

	~Employee() {
		numberOfObjects--;
		delete birthday;
		std::cout << "~Employee() called employee number is " << numberOfObjects << std::endl;
	}

};