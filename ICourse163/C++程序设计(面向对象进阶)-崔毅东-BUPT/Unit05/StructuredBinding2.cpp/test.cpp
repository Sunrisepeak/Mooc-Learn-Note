#include <iostream>
using std::cout, std::endl;
//define struct, include double, int
struct S {	//default public
	double d1{ 1.0 };
	int i1{ 32 };
};

//class, include int and char[]
class C {	//default private
public:
	int i2{ 1 };
	char c[2]{ 'a', 'b' };	//vs-debug mold have add byte in array end;
//	char c[3]{ 'a', 'b', '\0' };
};

int main() {
	//define struct and obj
	S s;
	C c;

	//binding struct variable
	auto [d1, i1] {s};

	//binding obj of class by '&' type
	auto &[i2, c2] {c};

	//print
	cout << d1 << " -s- " << i1 << endl;
	cout << i2 << " -c- " << c2 << endl;
	std::cin.get();
	return 0;
}