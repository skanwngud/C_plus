// RacingCar.cpp 에선 Car 라는 구조체 바깥으로 Car 의 종속적인 함수들이 전역함수로 선언 되어있다
// 따라서 Car 라는 구조체에 종속적이지 못한 형태를 띄기 때문에 Car 라는 구조체 안으로 함수들을 포함시킨다

#include <iostream>
using namespace std;

#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN];
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "owner ID: " << gamerID << endl;  // 위에 선언 된 gamerID 에 접근
		cout << "left fuel: " << fuelGauge << endl;
		cout << "current spped: " << curSpeed << endl<< endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge -= FUEL_STEP;

		if (curSpeed >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed += ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= BRK_STEP;
	}
};

int main3(void)
{
	Car run99 = { "run99", 100, 0 };  // 구조체의 선언

	run99.Accel();  // 구조체 내부의 함수를 호출한다
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}