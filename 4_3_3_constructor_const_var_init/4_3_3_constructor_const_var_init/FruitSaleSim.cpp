#include <iostream>
#include "FruitSaleSim.h"

FruitSeller::FruitSeller(int price, int num, int money)
	:APPLE_PRICE(price), numOfApples(num), myMoney(money)
{
	// empty
}

int FruitSeller::SaleApples(int money)
{
	// 생략

	return 0;
}

void FruitSeller::ShowSalesResult() const
{
	// 생략
}

FruitBuyer::FruitBuyer(int money)
	:myMoney(money), numOfApples(0) // 상수로 init 가능
{
	// 생략
}

void FruitBuyer::BuyApples(FruitSeller &seller, int money)
{
	// 생략
}

void FruitBuyer::ShowBuyResult() const
{
	// 생략
}