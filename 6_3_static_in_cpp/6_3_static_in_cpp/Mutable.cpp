// const �Լ� �������� ���� ������ ���������� ���
// ���� �������̸� mutable �� ����� �ٿ�����

#include <iostream>

class SoSimple
{
private:
	int num1;
	mutable int num2;  // const �Լ� ������ ��ȭ�� ���������� ���

public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		// empty
	}

	void ShowSimpleData() const  // const �Լ� ����
	{
		std::cout << num1 << ", " << num2 << std::endl;
	}

	void CopyNum2() const  // const �Լ� ����
	{
		num2 = num1;  // ������� const �Լ� �������� ���� ��ȭ�� ��� ���� ������ mutable �� ���� �� num2 �� num1 �� ���� �Ǿ���
	}
};

int main(void)
{
	SoSimple sim(1, 2);

	sim.ShowSimpleData();
	sim.CopyNum2();
	sim.ShowSimpleData();

	return 0;
}