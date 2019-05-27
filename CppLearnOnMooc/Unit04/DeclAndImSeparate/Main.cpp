#include <iostream>
#include "Circle.h"
//#include "Circle.cpp"
#include "Circle.h"		//test include question of head file 

int main()
{
	Circle c1;
	Circle c2(2.0);   //C++03
	Circle c3{ 3.0 }; //C++11 list init  
	std::cout << c1.getArea() << std::endl;
	std::cout << c2.getArea() << std::endl;
	std::cout << c3.getArea() << std::endl;
	std::cin.get();
	return 0;
}
