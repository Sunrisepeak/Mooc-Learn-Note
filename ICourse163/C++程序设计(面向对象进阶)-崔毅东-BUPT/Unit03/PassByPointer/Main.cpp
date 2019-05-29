#include<iostream>
void swap(int* x, int* y)
{
	int t = *x;
	*x = *y; *y = t;
}

int main()
{
	int a = 1, b = 23;
	std::cout << "Before calling swap()" << std::endl;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	swap(&a, &b);
	std::cout << "After calling swap()" << std::endl;
	std::cout << "a=" << a << std::endl;
	std::cout << "b=" << b << std::endl;
	std::cin.get();
	return 0;
}