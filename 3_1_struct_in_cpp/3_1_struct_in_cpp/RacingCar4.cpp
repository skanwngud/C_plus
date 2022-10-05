// 가독성을 좀 더 높이기 위해서 함수의 정의를 외부로 빼낼 수 있다.
// 코드 분석을 할 땐 함수의 세부 기능을 파악하는 것이 아닌 골격이나 구조를 파악하기 때문.

#include <iostream>
using namespace std;

namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20,
		MAX_SPD = 200,
		FUEL_STEP = 2,
		ACC_STEP = 10,
		BRK_STEP = 10
	};
}

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

	// 함수 선언
	void ShowCarState();
	void Accel();
	void Break();
};

// 함수 정의
void Car::ShowCarState()
{
	cout << "owner ID: " << gamerID << endl;
	cout << "left fuel: " << fuelGauge << endl;
	cout << "current speed: " << curSpeed << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::FUEL_STEP;

	if (curSpeed >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed <= CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

// main
int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}