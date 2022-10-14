#include <iostream>
#include "FruitSeller.h"
#include "FruitBuyer.h"

using namespace std;

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);

	FruitBuyer buyer;
	buyer.InitMembers(5000);

	buyer.BuyApples(seller, -1);
	
	seller.ShowSalesResult();
	buyer.ShowBuyResult();

	return 0;
}