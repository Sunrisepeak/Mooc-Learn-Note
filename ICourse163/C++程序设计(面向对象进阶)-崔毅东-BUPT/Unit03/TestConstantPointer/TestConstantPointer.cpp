#include<iostream>
using namespace std;
int main()
{
	//1.Constant declration
	const int x = 42;

	//Constant can't change
	//x = 21
	//it isn't change for Constant pointer point of data
	int y = 2;
	//int* p = &x;	//error 
	const int* p = &x;
	//(*p) = 24; //error, because of point to const
	const int* q = &y;
	//(*q) = 4;	//error, const_key limit 'q' of access authority

	//2.pointer constant con't change
	int* const r = &y;		//r is pointer constant
	int z = 5;
	//r = &z;		//error ; r is constant of pointer type
	(*r) = 20;
	cout << *r << " " << y << endl;

	//3.constant pointer of point to constant
	const int* const s = &y;
	// s = &z; //s can't is left_value because of is constant

	//4.str
	//char* str = "Hello";	//error ; "Hello" is constant
	const char* str = "Hello";
	//*str = 'p';		//error

	//5.about auto
	auto p1 = &y;			//int*
	auto p2 = "World";		//const char*
	auto const p3 = "?";	//const char* const
	cin.get();
	return 0;
}