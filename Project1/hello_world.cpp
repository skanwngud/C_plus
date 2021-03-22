#include <iostream>

int main_a(void)
{
	int num = 20;

	std::cout << "Hello World!" << std::endl; // std::cout 와 << 를 이용한 출력
	std::cout << "Hello "<<" World!" << std::endl; // std::endl; 을 이용한 개행(enter)
	std::cout << num << ' ' << 'A';
	std::cout << ' ' << 3.14 << std::endl;

	return 0;
}

/*
<iostream> : C 에서의 <stdio.h> 와 같은 역할
std, endl, cout
std::cout << '출력대상' ; : C 와 다르게 %d %lf 와 같은 서식 문자가 없어도 출력 가능
<<endl : 개행 (enter, 줄바꿈)
*/