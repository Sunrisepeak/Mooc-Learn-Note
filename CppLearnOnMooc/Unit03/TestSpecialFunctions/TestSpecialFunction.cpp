#include<iostream>
#include<string>
//can use template place of under function
/*
template <typename T>
auto max(T x, T y)
{
	return x > y ? x : y;
}

template <typename T>
auto max(T x, T y, T z)
{
	return max(x, max(y, z));
}
*/

auto max(int x, int y)
{
	return x > y ? x : y;
}

auto max(int x, int y, int z)	//max(int x, int y, int z = 0) is error 
{								//because of O
	return max(x, max(y, z));
}

auto max(double x, double y)
{
	return x > y ? x : y;
}

auto max(double a, double b, double c) 
{
	return max(a, max(b, c));
}
int i = 101;
int main()
{
	//1. Variable Scope
	int i{ 100 };		//::i is error to it
	for (int i = 0; i < 5; i++)
	{
		std::cout << i << " \n";
		//C++11 std::to_string();
		std::cout << std::to_string(i) + "##\n";
		std::cout << ::i << std::endl;	//if undefined global i error , ::i only do for global namespace
	}
	putchar('\n');
	//2. Overloading Function
	std::cout << max(1, 2, 3);

	//3. Default Arguments
	// Overloading Function can't Default Arguments

	//4. Template
	//std::cout << max('a', 'b', 'c') << std::endl;
	//std::cout << max(1, 2, 3) << std::endl;
	std::cin.get();


	return 0;
}