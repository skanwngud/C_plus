// ���� Ŭ������ ������ ������ ���� �� Ȯ���� ���� main �Լ� ����

#include <iostream>


class Car // �⺻ ���� �ڵ���
{
private:
	int gasolineGauge;

public:
	Car(int gas)
		: gasolineGauge(gas)
	{
		// empty
	}

	int GetGasGauge()
	{
		return gasolineGauge;
	}
};

class HybridCar : public Car
{
private:
	int electronicGauge;

public:
	HybridCar(int gas, int electronic)
		: Car(gas), electronicGauge(electronic)
	{
		// empty
	}

	int GetElecGague()
	{
		return electronicGauge;
	}
};

class HybridWaterCar : public HybridCar
{
private:
	int waterGauge;

public:
	HybridWaterCar(int gas, int electronic, int water)
		: HybridCar(gas, electronic), waterGauge(water)
	{
		// empty
	}

	void ShowCurrentGague()
	{
		std::cout << "�ܿ� ���ָ�: " << GetGasGauge() << std::endl;
		std::cout << "�ܿ� ���ⷮ: " << GetElecGague() << std::endl;
		std::cout << "�ܿ� ���ͷ�: " << waterGauge << std::endl;
	}
};

int main1(void)
{
	HybridWaterCar mycar(100, 50, 30);

	mycar.ShowCurrentGague();

	return 0;
}