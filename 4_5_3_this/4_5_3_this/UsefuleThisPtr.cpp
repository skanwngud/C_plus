#include <iostream>
#include <cstring>

class TwoNumber
{
private:
	int num1;
	int num2;

public:
	TwoNumber(int num1, int num2)
	{
		this->num1 = num1;  // this->num1 �� �������, num1 �� �Ű������̴� �Ű������� ��������� �����Ų��
		this->num2 = num2;
	}

	/*
	TwoNumber(int num1, int num2)
		:num1(num1), num2(num2)  // initializer �� this �����͸� ����� �� ������ �ش� �������� ��ó�� ��� ����
		{
			// empty
		}
	*/

	void ShowTwoNumber()
	{
		std::cout << this->num1 << std::endl;
		std::cout << this->num2 << std::endl;
		std::cout << num1 << std::endl;
		std::cout << &num1 << std::endl;
	}
};

int main3(void)
{
	TwoNumber two(2, 4);
	two.ShowTwoNumber();

	return 0;
}