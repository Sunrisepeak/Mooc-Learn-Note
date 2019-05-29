#include<iostream>
//using namespace std;   //Don't this
using std::cout;
using std::endl;
int main()
{
	return 0;
}
//separate charset_space of arange by namespace
namespace MyAlohe {
	int main()
	{
		cout << "Alohe World" << endl;

		//save cmd window
		std::cin.get();
		return 0;
	}
}
