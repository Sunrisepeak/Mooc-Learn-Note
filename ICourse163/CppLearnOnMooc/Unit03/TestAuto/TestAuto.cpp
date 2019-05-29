#include<iostream>
#include<typeinfo>		//typeid()
using std::cout;
using std::cin;
using std::endl;

auto max(int x, int y)
{
	return x > y ? x : y;
}
int main() {
	//Auto: Must Init for Define variable
	auto x = 3;
	auto y{ 42 };
/*	auto z;		//error 
	z = '10';	*/

	//must is same of type for define variable in a auto list
	auto x1{ 1 }, x2{ 2 };	// x3{ 'z' } is error
	
	//if init_list is reference or const then lose them
	int y1{ 42 }, &y2{ y1 };
	auto y3 = y2; //y3 would is int rather then int&
	cout << typeid(y3).name() << endl;

	//if auto_key add & so keep reference or const
	auto& z1{ y2 };
	cout << typeid(z1).name() << endl;	//use break point to view the type because of typeid have lose &
	
	//Init formal for array when, auto_key deduce pointer
	int p[3]{ 1, 2, 3 };
	auto p1 = p;
	cout << typeid(p1).name() << endl;

	//if add & so obtain array type
	auto& p2 = p;
	cout << typeid(p2).name() << endl;
	
	//auto in function return_type
	cout << max(x1, x2) << endl;
	cin.get();
	return 0;
}