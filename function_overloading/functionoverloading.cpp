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
	MyFunc(); // 3 행 함수 출력
	MyFunc('A'); // 8 행 함수 출력
	MyFunc(12, 13); // 13 행 함수 출력

	return 0;
}