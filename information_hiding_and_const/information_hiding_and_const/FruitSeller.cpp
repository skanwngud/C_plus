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
		cout << "�Ǹ� ����" << endl;
		return false;
	}
	int num = money / APPLE_PRICE;
	numOfApple -= num;
	myMoney += money;

	return num;
}

void FruitSeller::ShowSalesResult() const
{
	cout << "���� ���: " << numOfApple << endl;
	cout << "���� ����: " << myMoney << endl << endl;
}
