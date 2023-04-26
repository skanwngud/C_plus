// Class 내의 static 변수
// 멤버변수, 클래스 변수라고도 하며 함수 내에서 선언하면 전역변수처럼 취급 되는 것과 달리 동일한 클래스의 객체 내에서만 공유한다

#include <iostream>

class SoSimple
{
private:
	static int simObjCnt;  // 클래스 내에서 static 변수 선언, 해당 변수는 클래스의 모든 객체와 공유한다

public:
	SoSimple()
	{
		simObjCnt++;
		std::cout << simObjCnt << "번째 객체" << std::endl;
	}
};

int SoSimple::simObjCnt = 0;
// 클래스 생성자 함수에서 static 변수의 초기화를 하지 않는다
// static 변수는 객체들끼리 서로 공유하기 때문에 객체가 새로 생길 때마다 초기화가 되기 때문이다
// 따라서 이렇게 밖에서 따로 초기화를 진행해줘야한다

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		std::cout << cmxObjCnt << "번째 객체" << std::endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		std::cout << "번째 객체" << std::endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main3(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}

// 일반적으로 객체를 생성할 때마다 새로 할당 되는 클래스 내의 변수들과는 달리
// 클래스 내에서 static 변수를 선언하게 되면 메모리 공간에 딱 하나만 할당이 되므로 한 클래스의 여러 객체가 하나의 변수를 계속 공유한다
// 클래스 내의 static 변수는 생성과 소멸 시점이 전역변수와 비슷하다