// protected ��������

#include <iostream>
using namespace std;

class Base
{
private:
	int num1;

protected:
	int num2;

public:
	int num3;

	Base() : num1(1), num2(2), num3(3)
	{
		// empty
	}
};

class Derived : public Base {};  // empty

int main(void)
{
	Derived drv;
	cout << drv.num2 << endl;  // Derived class ���� public -> protected �� �ǹǷ� �ܺο��� ���� �Ұ�

	return 0;
}
