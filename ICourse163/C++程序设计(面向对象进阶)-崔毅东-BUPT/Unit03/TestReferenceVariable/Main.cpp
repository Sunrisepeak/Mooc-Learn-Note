#include<iostream>

int main()
{
	int x = 0;
	int y{ 0 };
	int& rx = x;
	rx = 8;

	const char* s = "Hello";
	const char* t = "World";

	const char*& r = s;
	//Reference is not re_change other object 
	r = t;

	std::cout << r << std::endl;
	std::cout << s << std::endl;
	
	std::cin.get();
	return 0;
}