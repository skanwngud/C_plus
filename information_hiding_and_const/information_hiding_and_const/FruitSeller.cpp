#include <iostream>
#include "FruitSeller.h"

using namespace std;

void FruitSeller::InitMembers(int price, int num, int money)
{
	APPLE_PRICE = price;
	numOfApple = num;
	myMoney = money;
}

int FruitSeller::SaleApples(int money)
{
	if (money < 0)
	{
		cout << "판매 중지" << endl;
		return;
	}
	int num = money / APPLE_PRICE;
	numOfApple -= num;
	myMoney += money;

	return num;
}

void FruitSeller::ShowSalesResult()
{
	cout << "남은 사과: " << numOfApple << endl;
	cout << "현재 수익: " << myMoney << endl << endl;
}
