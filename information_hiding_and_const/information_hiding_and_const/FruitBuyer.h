#ifndef __FRUITBUYER_H_
#define __FRUITBUYER_H_
#include "FruitSeller.h"

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;

public:
	void InitMembers(int money);
	void BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult() const;
};
#endif // !__FRUITBUYER_H_
