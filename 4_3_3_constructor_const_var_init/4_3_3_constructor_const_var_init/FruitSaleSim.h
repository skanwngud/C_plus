#ifndef __FRUITSALESIM_H_
#define __FRUITSALESIM_H_

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money);
	int SaleApples(int money);
	void ShowSalesResult() const;
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
	
public:
	FruitBuyer(int money);
	void BuyApples(FruitSeller &seller, int money);
	void ShowBuyResult() const;
};
#endif // !__FRUITSALESIM_H_
