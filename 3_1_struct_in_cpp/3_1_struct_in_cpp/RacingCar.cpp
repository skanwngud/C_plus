// c ���� ����ü ������ �����ϴ� ���
// struct Car basicCar;
// struct Car simpleCar;

// struct �� �̾ ���� �Ǵ� �ڷ����� ����ü�� ������� ���� �� �ڷ������� ��Ÿ��
// strcut �� �����Ϸ��� typedef ������ �߰��ؾ��Ѵ�

// cpp ���� ����ü ������ �����ϴ� ���
// typedef �� ���� ���̵� ������ ���� ���� ����
// Car basicCar;
// Car simpleCar;

#include <iostream>
using namespace std;

// ����ü�� ���� �� �������� ���ȭ ��Ŵ
#define ID_LEN 20
#define MAX_SPD 200
#define FUEL_STEP 2
#define ACC_STEP 10
#define BRK_STEP 10

struct Car
{
	char gamerID[ID_LEN];  // ������ ID
	int fuelGauge;  // ���ᷮ
	int curSpped;  // ���� �ӵ�
};

// ���� ������ ��� �ϴ� �Լ�, �ܼ� ������ ����ϱ� ������ const �����ڸ� �Ű������� ����
void ShowCarState(const Car &car)
{
	cout << "owner ID: " << car.gamerID << endl;
	cout << "left fuel: " << car.fuelGauge << endl;
	cout << "current speed: " << car.curSpped << endl << endl;
}

// ���� ������ ǥ��, ������ ���� ������ �ӵ��� �ö󰡰� ���ᰡ ��������
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

// ���� ������ ǥ��, �극��ũ�� ���� ������ �ӵ��� ��������
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
	Car run99 = { "run99", 100, 0 };  // ����ü�� ����

	// ������ �극��ũ�� ��� ��Ȳ�� ����
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