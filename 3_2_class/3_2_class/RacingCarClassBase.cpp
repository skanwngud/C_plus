// public; 어디서든 접근 허용
// private; 클래스 내 (클래스 내에 정의 된 함수) 에서만 접근 허용
// protected; 상속 관계에 놓였을 때 유도 클래스에서의 접근 허용

// 클래스를 선언할 때에는 항상 위와 같은 접근제어 지시자를 통해 각 변수나 함수의 접근 허용 범위를 지정해야한다

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;


namespace CAR_CONST
{
	enum
	{
		ID_LEN = 20, MAX_SPD = 200, FUEL_STEP = 2,
		ACC_STEP = 10, BRK_STEP = 10
	};
}

class Car
{
private:
	char gamerID[CAR_CONST::ID_LEN];
	int fuelGauge;
	int curSpeed;

public:
	void InitMembers(const char *ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car::InitMembers(const char *ID, int fuel)
{
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState()
{
	cout << "owner ID: " << gamerID << endl;
	cout << "left fuel: " << fuelGauge << endl;
	cout << "current spped: " << curSpeed << endl << endl;
}

void Car::Accel()
{
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= CAR_CONST::BRK_STEP;

	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
	{
		curSpeed = CAR_CONST::MAX_SPD;
		return;
	}

	curSpeed += CAR_CONST::ACC_STEP;
}

void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

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