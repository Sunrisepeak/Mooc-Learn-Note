#include <iostream>
#include <array>
#include "TestArray.h"
using std::cout;
using std::cin;
using std::endl;
using std::array;

void print(array<int, 3>& a)
{
	for (auto x : a)
		cout << x << " ";
	cout << endl;
}

int search(std::array<int, 3> a, int num)
{
	for (decltype(a.size()) i = 0; i < a.size();i++)
	{
		if (a[i] == num)
			return i;
	}
	return -1;
}
int main()
{
	//1.create array
//	array<int, 3>{};
	array a1{ 1, 2, 4 }; //c++17
	print(a1);
	//2. assigment for array
	array<int, 2> a2{ 1, 2 };
//	a1 = a2;	//error type
	a1 = { 1, 2 };
	print(a1);

	//3. swap array
	array<int, 3> b1{ 22, 11 };
	print(b1);
	a1.swap(b1);
	print(a1);
	print(b1);

	//4. get size of array
	cout << a1.size() << endl;
	cout << a1.max_size() << endl;

	//5. search func to find value in array
	cout << "search 2: " <<search(a1, 2) << endl;
	cout << "search 22: " << search(a1, 22) << endl;

	//6. sort
	std::sort(a1.begin(), a1.end());
	print
	(a1);

	//7 two-dimension array
	array<std::array<int, 3>, 3> t_dimension{ 1, 2, 3, 4, 5, 6, 7 };
	cout << t_dimension[1][2] << endl;
	int i = 0;
	for (auto vs : t_dimension)
		for (auto v : vs)
			cout << v << (++i % 3 ? " " : "\n");

	cin.get();
	return 0;
}

