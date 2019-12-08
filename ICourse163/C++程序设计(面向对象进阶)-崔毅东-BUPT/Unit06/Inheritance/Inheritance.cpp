#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rectangle.h"

int main() {
	Shape s1{ Color::blue, false };
	Circle c1{ 3.9 , Color::red, true};
	Rectangle r1{ 4.0, 2.0, Color::green, false};

	std::cout << s1.toString() << std::endl;
	std::cout << c1.toString() << std::endl;
	std::cout << r1.toString() << std::endl;

	std::cout << c1.getArea() << std::endl;
	std::cout << r1.getArea() << std::endl;
	std::cin.get();
	return 0;
}