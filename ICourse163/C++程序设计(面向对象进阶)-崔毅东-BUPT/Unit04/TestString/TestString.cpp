#include <iostream>
#include <string>
using namespace std;

int main()
{
	//1. create string
	string s = { "Hello" };
	
	//2. clear
	s.clear();
	
	//3. array assigment
	char arr[]{ 'W', 'o', 'r', 'l', 'd' };
	s += arr;
	
	//4. assign()
	s.assign("Hello, World");

	//5. append
	s.append(" ");
	s.append(5, ' ');
	s.append("!");

	//6. insert
	s.insert(0, "    ");
	
	cout << s << endl;

	//7. move space char stirng_first
	s.erase(0, s.find_first_not_of(" \t\n\r"));
	cout << s << endl;
	//8. move last space char
	s.erase(s.find_last_not_of(" !\t\n\r") + 1);
	
	s += '$';
	cout << s << endl;

	//9. string to int_....
	s.clear();
	s.append("1024");
	int x = stoi(s);
	cout << " x = " << x << endl;

	//10. int to string
	string s2 = to_string(x);
	cout << s2 << " = " << x << endl;

	cin.get();
	return 0;
}