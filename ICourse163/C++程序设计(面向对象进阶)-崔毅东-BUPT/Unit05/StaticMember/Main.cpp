#include <iostream>
#include <cassert>
#include "Square.h"
int Square::numberOfObjects = 10;

int main()
{
	
	Square s1;
	std::cout << s1.getNumberOfObject() << std::endl;
	assert(s1.getNumberOfObject() == 11);
	
	Square s2{ 20.0 };
	std::cout << Square::getNumberOfObject() << std::endl;
	std::cout << s2.getNumberOfObjectNonStatic() << std::endl;
//	std::cout << Square::getNumberOfObjectNonStatic() << std::endl;	//error Nonstatic member can't call by Class_name
	std::cin.get();
	//	return 0;
}