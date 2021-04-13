#include <iostream>

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main_1(void)
{
	MyFunc(); // 3 �� �Լ� ���
	MyFunc('A'); // 8 �� �Լ� ���
	MyFunc(12, 13); // 13 �� �Լ� ���

	return 0;
}