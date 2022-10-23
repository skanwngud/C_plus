/**
성명, 회사이름, 전화번호, 직급이 들어있는 NameClass 정의

직급 정보를 제외한 나머지는 문자열의 형태로 저장, 길이에 딱 맞는 메모리 공간을 할당 받는 형태로 정의
(동적 할당)
직급 정보는 int 형 멤버변수를 선언하고 아래의 enum 선언을 활용
enum {CLERK, SENIOR, ASSIST, MANAGER};
사원, 주임, 대리, 과장
**/

#include <iostream>
#include "NameCard.h"

struct COMP_POS
{
	enum
	{
		CLERK = 1, SENIOR = 2, ASSIST = 3, MANAGER = 4
	};
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-1111", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}