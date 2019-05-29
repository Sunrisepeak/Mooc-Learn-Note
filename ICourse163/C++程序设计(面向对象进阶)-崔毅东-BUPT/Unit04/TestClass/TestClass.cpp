#include<iostream>

class Circle {
	//Defualt is private for function and field
public:
	double radius;
	
	Circle()		//construct must public
	{
		radius = 1.0;
	}

	Circle(double r)
	{
		radius = r;
	}

	double getArea()
	{
		return 3.14 * radius * radius;
	}
};

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