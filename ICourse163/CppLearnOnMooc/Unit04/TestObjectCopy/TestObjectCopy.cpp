#include<iostream>

class Square {
private:
	double side = 1.0;

public:
	Square() = default;	//c++11 cost add construct func

	Square(double side)
	{
		this->side = side;
	}

	double getArea()
	{
		return side * side;
	}
};

int main()
{
	Square s1, s2(4.0);
	std::cout << s1.getArea() << std::endl;
	std::cout << s2.getArea() << std::endl;
	
	s1 = s2;

	std::cout << s1.getArea() << std::endl;
	std::cout << s2.getArea() << std::endl;
	std::cin.get();
	return 0;
}