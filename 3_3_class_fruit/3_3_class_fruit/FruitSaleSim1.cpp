// 사과를 사고 파는 일을 객체지향적으로 표현

#include <iostream>
using namespace std;

class FruitSeller  // 사과 판매자
{
private:
	int APPLE_PRICE;  // 사과 가격 (상수로 간주) -> private 에서 const int APPLE_PRICE; / const int APPLE_PRICE = 1000; 등은 불가
	int numOfApple;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)  // 판매자의 상태를 초기화하는 함수
	{
		APPLE_PRICE = price;
		numOfApple = num;
		myMoney = money;
	}

	int SaleApples(int money)  // 사과 판매 행위
	{
		int num = money / APPLE_PRICE;  // 사과 가격에 따라 돈이 들어온 액수를 나눠 몇 개를 팔았는지 파악
		numOfApple -= num;  // 현재 갖고 있는 사과 갯수에서 빼준다
		myMoney += money;  // 들어온 금액의 양만큼 현재 갖고있는 돈 추가
		
		return num;
	}

	void ShowSalesResult()  // 현재 상태를 보여주는 함수
	{
		cout << "left apple : " << numOfApple << endl;
		cout << "income :" << myMoney << endl << endl;
	}
};

class FruitBuyer  // 사과 구매자
{
	int myMoney;  // 따로 선언해주지 않으면 클래스는 자동으로 private 으로 간주한다 (구조체는 public)
	int numOfApples;

public:
	void InitMemebers(int money)  // 구매자의 상태를 초기화하는 함수
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money)  // 사과 구매 행위 / 해당 클래스에서 다른 클래스를 호출한다
	{
		numOfApples += seller.SaleApples(money);  // seller 에게서 사과를 일정 금액을 주고 구매함
		myMoney -= money;
	}

	void ShowBuyResult()  // 현재 상태를 보여주는 함수
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
	buyer.BuyApples(seller, 2000);  // FruitBuyer 에게 필요하지만 자신에게 없는 함수를 받기 위해 seller 의 인자를 추가했따

	seller.ShowSalesResult();
	buyer.ShowBuyResult();

	return 0;
}