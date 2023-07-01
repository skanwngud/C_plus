// protected 접근제어

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
	cout << drv.num2 << endl;  // Derived class 에서 public -> protected 가 되므로 외부에서 접근 불가

	return 0;
}
