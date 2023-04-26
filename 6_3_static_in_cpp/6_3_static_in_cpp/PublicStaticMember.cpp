// static 변수를 private 으로 선언하면 클래스의 객체들만 접근 가능하지만
// public 으로 선언하면 클래스의 이름이나 객체를 통해 어디서든 접근 가능하다

#include <iostream>

class SoSimple
{
public:
	static int simObjCnt;  // publc 으로 static 변수 선언

public:  // 불필요하지만 변수와 함수의 구분을 목적으로 명시하기도 함
	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;  // 클래스 밖에서 static 변수 초기화

int main4(void)
{
	std::cout << SoSimple::simObjCnt << "번째 객체" << std::endl;  // SoSimple 객체를 선언하지 않았지만 클래스 이름을 통해 접근, 클래스 내부에 static 변수가 없다는 얘기

	SoSimple sim1;  // 객체 생성
	SoSimple sim2;  // 객체 생성

	std::cout << SoSimple::simObjCnt << "번째 객체" << std::endl;  // 객체가 아닌 클래스 이름으로 접근
	std::cout << sim1.simObjCnt << "번째 객체" << std::endl;  // 객체 이름으로 접근하지만 이런 접근방식은 일반적인 멤버변수의 접근과 착각을 일으키기 때문에 추천하지 않는다
	std::cout << sim2.simObjCnt << "번째 객체" << std::endl;

	return 0;
}

// 추가로 static 멤버함수도 static 멤버 변수와 동일
// static 멤버 함수 내에서는 static 멤버 변수와 static 멤버 함수만 호출 가능