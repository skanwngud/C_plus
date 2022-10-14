#include <iostream>
#include "FruitBuyer.h"
#include "FruitSeller.h"

using namespace std;

void FruitBuyer::InitMembers(int money)
{
	myMoney = money;
	numOfApples = 0;
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	if (seller.SaleApples(money) == 0)
		return;

	numOfApples += seller.SaleApples(money);
	myMoney -= money;
}

void FruitBuyer::ShowBuyResult() const
{
	cout << "�ܰ�: " << myMoney << endl;
	cout << "��� ����: " << numOfApples << endl << endl;
}