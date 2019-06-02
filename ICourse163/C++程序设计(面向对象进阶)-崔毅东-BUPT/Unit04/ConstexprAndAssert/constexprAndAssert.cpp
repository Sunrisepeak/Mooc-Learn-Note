#include <iostream>
#include <cassert>	//using assert()
#include <array>

using std::cin;
using std::cout;
using std::endl;

//Task1: calculator factorial by recusion and to use assert chcek 3!
//Task2: constexpr's factorial checked 3! by static_assert
//Task3: build factorial(4) size array

constexpr int factorial(int n)
{
	if (n == 0)
	{
		return 1;//error
	}
	else
	{
		return n * factorial(n - 1);
	}
}

int main()
{
//	int x = 3;
//	auto f = factorial(x);

	static_assert(factorial(4) == 24, "factorial(3) should be 6");
//	assert(f == 6);
//	cout << "3!" <<f << std::endl;
	std::array<int, factorial(4)> a;	//because of constexpr int that func return result and calculator in compiler period
	cout << a.size();
	cin.get();
	return 0;
}

