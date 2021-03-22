// 입력값 사이의 숫자를 전부 더하는 연산

#include <iostream>

int main_c(void)
{
	int val1, val2;
	int results = 0;

	std::cout << "두 개의 숫자 입력 : "; // 문자열 출력
	std::cin >> val1 >> val2; // 키보드 입력을 각각 val1 과 val2 로 받음

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // 변수 i 가 val1 보다 1 크고 val2 보다 1 작을 때까지 i 를 증가
			results += i; // 해당 결과를 results 라는 변수에 저장 후 계속 진행 반복
	}

	else
	{
		for (int i = val2 + 1; i < val1; i++)
			results += 1;
	}

	std::cout << "두 수 사이의 정수의 합 : " << results << std::endl;

	return 0;
}