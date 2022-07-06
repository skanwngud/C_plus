#include <iostream>

namespace BestComImpl1 // BestComImpl �̶� �̸��� ������ ����
{
	void SimpleFunc1(void)  // �ش� ���� �ȿ� �Լ��� ����
	{
		std::cout << "BestCom �� ������ �Լ�" << std::endl;
	}
}

namespace ProComImpl1 // ProComImpl �̶� �̸��� ������ ����
{
	void SimpleFunc1(void) // �ش� ���� �ȿ� �Լ��� ����, BestComImpl �� �Լ��� �̸��� ������ �ٸ� �̸������̱� ������ ������.
	{
		std::cout << "ProCom �� ������ �Լ�" << std::endl;
	}
}

int main1(void)
{
	BestComImpl1::SimpleFunc1();  // BestComImpl �̸� �������� ���� �� �Լ� ȣ��
	ProComImpl1::SimpleFunc1();  // ProComImpl �̸� �������� ���� �� �Լ� ȣ��

	return 0;
}