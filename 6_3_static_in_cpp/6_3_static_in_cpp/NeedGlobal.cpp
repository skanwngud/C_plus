// 전역 변수가 필요한 상황

#include <iostream>

int simObjCnt = 0;  // 전역 변수 초기화
int cmxObjCnt = 0;

class SoSimple  // 함수 정의
{
public:
	SoSimple()  // 생성자
	{
	simObjCnt++;  // 전역 변수 연산
	std::cout << simObjCnt << "번째 SoSimple 객체" << std::endl;
	}
};

class SoComplex
{
public:
	SoComplex()  // 생성자
	{
		cmxObjCnt++;  // 전역 변수 연산
		std::cout << cmxObjCnt << "번째 SoComplex 객체" << std::endl;
	}

	SoComplex(SoComplex &copy)  // 복사 생성자
	{
		cmxObjCnt++; // 전역 변수 연산
		std::cout << cmxObjCnt << "번째 Socomplex 객체" << std::endl;
	}
};

int main2(void)
{
	SoSimple sim1;  // Simple 객체 생성하면서 simObjCnt++ 연산 수행 -> 1
	SoSimple sim2;  // 위와 동일하므로 -> 2

	SoComplex com1;  // Complex 객체 생성하면서 cmxObjCnt++ 연산 수행 -> 1
	SoComplex com2 = com1;  // 복사 생성자로 -> 2
	SoComplex();  // 함수 호출로 -> 3

	return 0;
}

// 위 코드는 객체들이 서로 공유하는 전역 변수들이 존재한다
// 전역변수들은 제한을 걸만한 아무런 장치가 없으므로 코드가 조금만 복잡해지면서 참조하게 되면 원치 않은 결과가 나올 수 있다
// simObjCnt 를 SoSimple 의 static 변수로, cmxObjCnt 를 SoComplex 의 static 변수로 지정하면 문제를 없앨 수 있다