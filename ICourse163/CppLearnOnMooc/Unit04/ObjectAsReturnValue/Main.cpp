#include <iostream>
#include "Circle3.h"

int main()
{
	Circle c{ 1.0 };
//	std::cout << c.setRadius(2.0).getArea() << std::endl;
	
	std::cout << c.setRadius(2.0).setRadius(3.0).getArea() << std::endl;	//c.radius = 2.0 because of Object.setRadius() return a anonymous Object 
	std::cout << "c.radius = " << c.getRadius() << std::endl;
	
	Circle c2{ 1.0 };
	std::cout << c2.setRadius_Return_Ref(2.0).setRadius_Return_Ref(3.0).getArea() << std::endl;	//c.radius = 3.0 because of Object.setRadius() return origin Object 
	std::cout << "c2.radius = " << c2.getRadius() << std::endl;
	std::cin.get();
	return 0;
}