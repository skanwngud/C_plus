#include <iostream>
#include "FruitSaleSim.h"

FruitSeller::FruitSeller(int price, int num, int money)
	:APPLE_PRICE(price), numOfApples(num), myMoney(money)
{
	// empty
}

int FruitSeller::SaleApples(int money)
{
	// ����

	return 0;
}

void FruitSeller::ShowSalesResult() const
{
	// ����
}

FruitBuyer::FruitBuyer(int money)
	:myMoney(money), numOfApples(0) // ����� init ����
{
	// ����
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	// ����
}

void FruitBuyer::ShowBuyResult() const
{
	// ����
}