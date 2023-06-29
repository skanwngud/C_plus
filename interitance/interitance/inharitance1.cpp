// 다음 클래스의 적절한 생성자 삽입 후 확인을 위한 main 함수 정의

#include <iostream>


class Car // 기본 연료 자동차
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
		std::cout << "잔여 가솔린: " << GetGasGauge() << std::endl;
		std::cout << "잔여 전기량: " << GetElecGague() << std::endl;
		std::cout << "잔여 워터량: " << waterGauge << std::endl;
	}
};

int main1(void)
{
	HybridWaterCar mycar(100, 50, 30);

	mycar.ShowCurrentGague();

	return 0;
}