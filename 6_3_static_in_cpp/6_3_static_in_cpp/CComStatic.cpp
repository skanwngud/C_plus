// c 에서의 static
// 1. 함수 내에서 선언 된 static 변수의 경우 한 번만 초기화가 되고 함수가 종료 되도 사라지지 않음
// 2. 전역변수로 선언 된 static 변수의 경우 선언 된 파일 내에서만 사용이 가능

#include <iostream>

void Counter()
{
	static int cnt;
	cnt++;

	std::cout << "Current cnt: " << cnt << std::endl;
}

int main1(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	return 0;
}