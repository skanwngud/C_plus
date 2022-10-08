// enum �߰�

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
}  // CAR_CONST ��� �̸����� �ȿ� Car ���� ����ϴ� ������� ���� �־���.

struct Car
{
	char gamerID[CAR_CONST::ID_LEN];  // ID_LEN �� �����ϱ� ���ؼ� CAR_CONST ��� �̸������� ���������ν� �������� �ö���.
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