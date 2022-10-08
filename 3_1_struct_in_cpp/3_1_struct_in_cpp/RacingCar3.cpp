// enum 추가

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
}  // CAR_CONST 라는 이름공간 안에 Car 에서 사용하는 상수들을 전부 넣었다.

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];  // ID_LEN 에 접근하기 위해서 CAR_CONST 라는 이름공간을 지정함으로써 가독성이 올랐다.
	int fuelGauage;
	int curSpeed;

	void showCarState()
	{
		cout << "owner ID: " << gamerID << endl;
		cout << "left fuel: " << fuelGauage << endl;
		cout << "current speed: " << curSpeed << endl << endl;
	}

	void Accel()
	{
		if (fuelGauage <= 0)
			return;
		else
			fuelGauage -= CAR_CONST::FUEL_STEP;

		if (curSpeed >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main5(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.showCarState();
	run99.Break();
	run99.showCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.showCarState();

	return 0;
}