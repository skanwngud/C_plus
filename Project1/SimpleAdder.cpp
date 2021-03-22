#include <iostream>

int main(void)
{
	int val1;
	std::cout << "첫 번째 숫자입력 : ";
	std::cin >> val1; // 정수를 입력 받아 val1 에 저장

	int val2;
	std::cout << "두 번째 숫자입력 : ";
	std::cin >> val2; // 정수를 입력 받아 val2 에 저장

	int result = val1 + val2;
	std::cout << "덧셈결과 : "<<result<<std::endl;

	return 0;
}

/*
std::cin : 키보드 입력에 필요한 연산자 >> 가 필요
키보드 입력으로 전해받은 정수를 다른 변수에 저장 가능
*/