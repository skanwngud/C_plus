// c 언어에서 구조체 변수를 선언하는 방법
// struct Car basicCar;
// struct Car simpleCar;

// struct 는 이어서 선언 되는 자료형이 구조체를 기반으로 정의 된 자료형임을 나타냄
// strcut 을 생략하려면 typedef 선언을 추가해야한다

// cpp 에서 구조체 변수를 선언하는 방법
// typedef 의 선언 없이도 다음과 같이 선언 가능
// Car basicCar;
// Car simpleCar;

#include <iostream>
using namespace std;

// 구조체와 관련 된 정보들을 상수화 시킴
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN];  // 소유자 ID
	int fuelGauge;  // 연료량
	int curSpped;  // 현재 속도
};

// 차의 정보를 출력 하는 함수, 단순 정보를 출력하기 때문에 const 참조자를 매개변수로 선언
void ShowCarState(const Car &car)
{
	cout << "owner ID: " << car.gamerID << endl;
	cout << "left fuel: " << car.fuelGauge << endl;
	cout << "current speed: " << car.curSpped << endl << endl;
}

// 차의 가속을 표현, 엑셀을 밟을 때마다 속도가 올라가고 연료가 떨어진다
void Accel(Car &car)
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge -= FUEL_STEP;

	if (car.curSpped + ACC_STEP >= MAX_SPD)
	{
		car.curSpped = MAX_SPD;
		return;
	}

	car.curSpped += ACC_STEP;
}

// 차의 감속을 표현, 브레이크를 밟을 때마다 속도가 떨어진다
void Break(Car &car)
{
	if (car.curSpped < BRK_STEP)
	{
		car.curSpped = 0;
		return;
	}

	car.curSpped -= BRK_STEP;
}

int main2(void)
{
	Car run99 = { "run99", 100, 0 };  // 구조체의 선언

	// 엑셀과 브레이크를 밟는 상황을 연출
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);
	return 0;
}