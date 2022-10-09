#include "Car.h"

int main(void)
{
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}

// inline 함수는 헤더파일과 함께 넣어야한다. -> 컴파일 과정에서 함수의 호출문이 있는 곳에 함수의 몸체 부분이 삽입 되어야 있어야한다.