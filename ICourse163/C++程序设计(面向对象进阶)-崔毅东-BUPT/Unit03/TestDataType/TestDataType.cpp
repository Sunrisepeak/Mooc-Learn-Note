#include<iostream>
int main() {
	//列表初始化不允许窄化
	int x{ 1 };		//x{1.1} is error
	std::cout << x << std::endl;

	//强制类型转换:int->double; double->int
	std::cout << 1 / 2 << std::endl;
	std::cout << static_cast<double>(1) / 2 << std::endl;
	std::cout << static_cast<double>(1 / 2) << std::endl;		//Note: order
	//method1
	std::cout << 1.0 / 2. << std::endl;
	//method2
	std::cout << 1.0f / 2.f << std::endl;
	std::cin.get();
	return 0;
}