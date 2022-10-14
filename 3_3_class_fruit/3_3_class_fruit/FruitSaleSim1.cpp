// ����� ��� �Ĵ� ���� ��ü���������� ǥ��

#include <iostream>
using namespace std;

class FruitSeller  // ��� �Ǹ���
{
private:
	int APPLE_PRICE;  // ��� ���� (����� ����) -> private ���� const int APPLE_PRICE; / const int APPLE_PRICE = 1000; ���� �Ұ�
	int numOfApple;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)  // �Ǹ����� ���¸� �ʱ�ȭ�ϴ� �Լ�
	{
		APPLE_PRICE = price;
		numOfApple = num;
		myMoney = money;
	}

	int SaleApples(int money)  // ��� �Ǹ� ����
	{
		int num = money / APPLE_PRICE;  // ��� ���ݿ� ���� ���� ���� �׼��� ���� �� ���� �ȾҴ��� �ľ�
		numOfApple -= num;  // ���� ���� �ִ� ��� �������� ���ش�
		myMoney += money;  // ���� �ݾ��� �縸ŭ ���� �����ִ� �� �߰�
		
		return num;
	}

	void ShowSalesResult()  // ���� ���¸� �����ִ� �Լ�
	{
		cout << "left apple : " << numOfApple << endl;
		cout << "income :" << myMoney << endl << endl;
	}
};

class FruitBuyer  // ��� ������
{
	int myMoney;  // ���� ���������� ������ Ŭ������ �ڵ����� private ���� �����Ѵ� (����ü�� public)
	int numOfApples;

public:
	void InitMemebers(int money)  // �������� ���¸� �ʱ�ȭ�ϴ� �Լ�
	{
		myMoney = money;
		numOfApples = 0;
	}

	void BuyApples(FruitSeller &seller, int money)  // ��� ���� ���� / �ش� Ŭ�������� �ٸ� Ŭ������ ȣ���Ѵ�
	{
		numOfApples += seller.SaleApples(money);  // seller ���Լ� ����� ���� �ݾ��� �ְ� ������
		myMoney -= money;
	}

	void ShowBuyResult()  // ���� ���¸� �����ִ� �Լ�
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
	buyer.BuyApples(seller, 2000);  // FruitBuyer ���� �ʿ������� �ڽſ��� ���� �Լ��� �ޱ� ���� seller �� ���ڸ� �߰��ߵ�

	seller.ShowSalesResult();
	buyer.ShowBuyResult();

	return 0;
}