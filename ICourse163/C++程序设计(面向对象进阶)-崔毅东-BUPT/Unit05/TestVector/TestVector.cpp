#include <iostream>
#include <vector>
#include <string>
#include "Helper.h"  //PRINT(std::vector<string>)

int main() {
	//C++11 init-list
	std::vector<std::string> words1{ "Hello", "World!" };
	PRINT(words1);

	//delete last element
	words1.erase(words1.end() - 1);
	PRINT(words1);

	//add elemment in words1 end.
	words1.push_back("C++!");
	PRINT(words1);

	//copy create words2 from words1 by iterator
	std::vector<std::string> words2(words1.begin(), words1.end()), w3(words2.begin() + 1, words2.end());
	PRINT(words1);
	PRINT(w3);

	//insert element
	words2.insert(words2.begin(), "Insert");
	PRINT(words2);

	//copy-ctr words3
#define V std::vector	//c++17 auto deduce <type>
	V words3(words2);
	PRINT(words3);

	//use [index] modify element
	words3[2] = "modify";
	PRINT(words3);

	//create words4 same content
	std::vector<std::string> words4(4, "same");	//can't auto deduce type
	PRINT(words4);

	//change w3 and w4
	words3.swap(words4);
#define P_TWO(x, y) PRINT(x) PRINT(y)
	P_TWO(words3, words4);
	std::cin.get();
	return 0;
}