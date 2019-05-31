#include <iostream>
class X {
	//1.base type Init
	int a = 1;
	int b = { 2 };
//	int c(3);	//compiler can think of func
	//Object_type Init
	std::string s{ 'H', 'e' };
	std::string s2{ "hello" };
	std::string s3 = "World";

	//3.member of array Init
//	int arr1[] = { 1, 2, 3 }; //compiler can't auto_deduce size
	int arr2[4] = { 1 };
//	int arr3[]{ 12.0, 32.0 };  // narrowing and auto_deduce

};

int main()
{
	return 0;
}