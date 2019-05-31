#include <iostream>
using namespace std;

class Circle {
private:
	double radius;
public:
/*	Circle() {
		std::cout << "Cell Circle()" << std::endl;
	};*/
	//C++11
	Circle() = default;	//because of under Circle(double r), so compiler would not auto_add

	Circle(double r) 
	{
		radius = r;
	};
	double getArea()
	{
		return 3.14 * radius * this->radius;
	};
};

class Square {
private:
	double side;
public:
	Square() = delete;	//cast delete default constru....
	Square(double side) :side{ side } //member list initialize, equal this->side = side
	{
		std::cout << "Cell Square()" << std::endl;
	};
	double getArea()
	{
		return side * side;
	}
};

class Combo {
	Circle c;	//would call default constructor
	Square s;	
public:
	Combo() : s{ 2.0 }
	{
		std::cout << "Cell Combo()" << std::endl;
	};
};
/*
Note 1: constructor step of cell
1. In-build Object (member objecct : circle square) 
2. Combo

Note 2:Init Execute Sequence
Defualt Member Init --> Ctor memb_Init list --> Ctor body

Note 3:Init Opriority of Effect
Ctor body > Ctor Init list > Default M_Init

Note 4:
	if exist High Opriority else low_Opri would ignored(not execute)
*/
int main()
{
	Combo o{};	
//	std::cout << o.c.getArea() << std::endl; //access member is private

	cin.get();
	return 0;
}
