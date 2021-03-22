// 입력값 사이의 숫자를 전부 더하는 연산

#include <iostream>

int main(void)
{
	int val1, val2;
	int results = 0;

	std::cout << "두 개의 숫자 입력 : ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
			results += i;
	}

	else
	{
		for (int i = val2 + 1; i < val1; i++)
			results += 1;
	}

	std::cout << "두 수 사이의 정수의 합 : " << results << std::endl;

	return 0;
}