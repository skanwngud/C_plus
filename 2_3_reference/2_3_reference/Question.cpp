#include <iostream>
using namespace std;

void Func1(int &ref1)
{
	ref1++;
}

void Func2(int &ref2)
{
	ref2 = -(ref2);
}

void Func3(int *(&pref1), int *(&pref2))
{
	int *ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	int num1 = 5;
	int *ipt1 = &num1;

	int num2 = 10;
	int *ipt2 = &num2;

	cout << ipt1 << endl;
	cout << ipt2 << endl;

	Func1(val1);
	Func2(val2);
	Func3(ipt1, ipt2);

	cout << val1 << endl;
	cout << val2 << endl;
	cout << ipt1 << " " << ipt2 << endl;

	return 0;
}

// Qeustion 2, 참조자는 초기화가 되지 않기 때문에 변수를 인자로 받아야한다.

