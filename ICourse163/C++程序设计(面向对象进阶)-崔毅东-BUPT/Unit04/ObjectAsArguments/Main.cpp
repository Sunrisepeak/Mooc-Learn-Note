#include <iostream>
#include "Circle2.h"
/*
void print(Circle c)// 1
{
	std::cout << c.getArea() << std::endl;

}
*/
void print(Circle& c)	//better than 1 to Effective
{
	std::cout << c.getArea() << std::endl;

}

void print(Circle* c)
{
	std::cout << c->getArea() << std::endl;

}
int main()
{
	Circle ca[] = {1.0, 2.0, 3.0};
	print(ca[1]);
	print(ca[2]);
	print(ca + 0);	//pointer op
	std::cin.get();
	return 0;
}