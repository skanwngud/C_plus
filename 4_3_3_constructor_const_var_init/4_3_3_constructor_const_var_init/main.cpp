#include <iostream>
#include "FruitSaleSim.h"

int main(void)
{
	FruitSeller seller(1000, 20, 0);
	FruitBuyer buyer(5000);

	buyer.BuyApples(seller, 2000);

	seller.ShowSalesResult();
	buyer.ShowBuyResult();

	return 0;
}