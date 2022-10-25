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
		this->num1 = num1;  // this->num1 은 멤버변수, num1 은 매개변수이니 매개변수를 멤버변수에 저장시킨다
		this->num2 = num2;
	}

	/*
	TwoNumber(int num1, int num2)
		:num1(num1), num2(num2)  // initializer 는 this 포인터를 사용할 수 없으나 해당 구문으로 위처럼 사용 가능
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