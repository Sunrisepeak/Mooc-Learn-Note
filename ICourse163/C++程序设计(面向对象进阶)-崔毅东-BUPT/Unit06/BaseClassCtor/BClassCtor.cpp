#include <iostream>
#define SPLIT cout << endl; 
using std::cout, std::endl;	//c++17
class Base {
public:
	Base() { cout << "Base()" << endl; }
	Base(int i) { cout << "Base(" << i << ")" << endl; }
	Base(char c) {
		cout << "Base(" << c << ")" << endl;
	}
}; 

class D : public Base {
	//1.default creation by compiler to following:
	//D() : Base() {}
};

class E : public Base {
	using Base::Base;	//if want to inheritance ctor of Base
	/**2.default creation by compiler to following:
	 *E() : Base() {}
	 *E(int i) : Base(i) {}
	 *E(char c) : Base{c} {}
	 */
};
/**3. test call sequence for Base-ctor, init of in-obj
 *
 *  FBase---\----------/----->F
 *           \        /
 *            EBase->E
 */
class F : public Base {
	double x{ 0.0 };
	E e;
public:
	F(double x) : e {'E'}, Base('F'){ cout << "F(" << x << ")" << endl; }
};

int main() {
	Base b;
	SPLIT;

	D d;
//	D d1(1); //error
	SPLIT;

	E e1(1);
	E e2('c');

	SPLIT;
	F f(1.1);

	std::cin.get();
	return 0;
}