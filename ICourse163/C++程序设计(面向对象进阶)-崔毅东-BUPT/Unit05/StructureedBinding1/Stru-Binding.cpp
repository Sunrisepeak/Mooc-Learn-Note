//Structured Binding
/*Regulation:
 *	1.amount is same for sign and array-element
 *  2.type is same for sign and array-element
 */
#include <iostream>
#include <array>
#define PRINT(x) std::cout << #x << ": " << x << std::endl
#define P_ARRAY(a) for(auto v : a) std::cout << v << " "; putchar('\n')
int main() {
	//1.native array
	int a[]{ 1, 2, 3 };
	auto [e1, e2, e3] = a;	//method1
	auto const [f1, f2, f3] { a };	//method2: c++11  {init-list} and const
	auto &[y1, y2, y3](a);	//method3: c++ 03

	P_ARRAY(a);
	PRINT(e2);
//	f1 = 3; //error
	PRINT(y1);
	y1 = 4;
	PRINT(e2);
	P_ARRAY(a);

	putchar('\n');

	//2.std::array
	std::array b{ 11, 22};
	auto &[ee1, ee2] = b;
	P_ARRAY(b);
	PRINT(ee1);
	ee1 = 33;
	P_ARRAY(b);
	std::cin.get();
	return 0;
}