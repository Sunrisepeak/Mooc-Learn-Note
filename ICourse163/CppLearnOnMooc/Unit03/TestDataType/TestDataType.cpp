#include<iostream>
int main() {
	//�б��ʼ��������խ��
	int x{ 1 };		//x{1.1} is error
	std::cout << x << std::endl;

	//ǿ������ת��:int->double; double->int
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