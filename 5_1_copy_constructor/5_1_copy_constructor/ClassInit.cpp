#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		// empty
	}

	SoSimple(SoSimple &copy)
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "Called SoSimple(SoSimple &copy)" << endl;
	}
	void ShowSimpleData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

class Explicit
{
private:
	int num1;
	int num2;
public:
	explicit Explicit(int n1, int n2)
		: num1(n1), num2(n2)
	{
		// empty
	}
	explicit Explicit(Explicit &copy)
		: num1(copy.num1), num2(copy.num2)
	{
		cout << "Called By Copied" << endl;
	}

	void ShowExplicitData()
	{
		cout << num1 << endl;
		cout << num2 << endl;
	}
};

int main(void)
{
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();

	Explicit exp1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	Explicit exp2(exp1);  // ���Կ����ڸ� ���� Ŭ������ ������ ��������ڰ� ���ٰ� ��.
	cout << "���� �� �ʱ�ȭ ����" << endl;
	exp2.ShowExplicitData();


	return 0;
}

//���� �� �ʱ�ȭ ����
//Called SoSimple(SoSimple &copy)
//���� �� �ʱ�ȭ ����
//15
//30