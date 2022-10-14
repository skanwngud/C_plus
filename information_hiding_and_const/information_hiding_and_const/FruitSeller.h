#ifndef __FRUITSELLER_H_
#define __FRUITSELLER_H_

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApple;
	int myMoney;

public:
	void InitMembers(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult();
};
#endif // !__FRUITSELLER_H_
