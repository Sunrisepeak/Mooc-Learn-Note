#include <iostream>
#include "Circle.h"

int main()
{
	Circle ca1[]{ Circle(1.0), Circle{ 2.0 }, Circle{ 3.0 } };
//	auto ca2[]{ 10.0, 11, 12.0 };	//error, base array can't to use auto
	Circle ca2[]{ 10.0, 11, 12.0 };
	

	ca1[2].setRadius(4.0);
	ca2[1].setRadius(100.0);
	double area1 = 0;
	auto area2{ 0.0 };	//C++11
	for (decltype(sizeof(ca1)) i = 0; i < sizeof(ca1) / sizeof(ca1[0]); i++)
	{
		area1 += ca1[i].getArea();
		std::cout << ca1[i].getArea() << std::endl;
	}

	for (auto x : ca2) 
	{
		std::cout << x.getArea() << std::endl;
		area2 += x.getArea();
	}

	std::cout << "ca1's area: " << area1 << "\nca2's area:" << area2 << std::endl;
	std::cin.get();
	return 0;
}