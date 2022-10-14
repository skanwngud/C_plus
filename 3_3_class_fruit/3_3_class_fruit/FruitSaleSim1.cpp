#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApple;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApple = num;
		myMoney = money;
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApple -= num;
		myMoney += money;
		
		return num;
	}

	void ShowSalesResult() 
	{
		cout << "left apple : " << numOfApple << endl;
		cout << "income :" << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;  // ���� ���������� ������ Ŭ������ �ڵ����� private ���� �����Ѵ� (����ü�� public)
	int numOfApples;

public:
	void InitMemebers(int money)
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}

	void ShowBuyResult()
	{
		cout << "balance : " << myMoney << endl;
		cout << "amount of apples : " << numOfApples << endl;
	}
};

int main(void)
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMemebers(5000);
	buyer.BuyApples(seller, 2000);

	seller.ShowSalesResult();
	buyer.ShowBuyResult();

	return 0;
}