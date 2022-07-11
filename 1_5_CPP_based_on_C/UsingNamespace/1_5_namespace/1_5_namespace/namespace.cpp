#include <iostream>

namespace BestComImpl1 // BestComImpl 이란 이름의 공간을 생성
{
	void SimpleFunc1(void)  // 해당 공간 안에 함수를 정의
	{
		std::cout << "BestCom 이 정의한 함수" << std::endl;
	}
}

namespace ProComImpl1 // ProComImpl 이란 이름의 공간을 생성
{
	void SimpleFunc1(void) // 해당 공간 안에 함수를 정의, BestComImpl 의 함수와 이름이 같으나 다른 이름공간이기 때문에 괜찮다.
	{
		std::cout << "ProCom 이 정의한 함수" << std::endl;
	}
}

int main1(void)
{
	BestComImpl1::SimpleFunc1();  // BestComImpl 이름 공간내의 정의 된 함수 호출
	ProComImpl1::SimpleFunc1();  // ProComImpl 이름 공간내의 정의 된 함수 호출

	return 0;
}