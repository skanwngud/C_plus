#include <iostream>

using namespace std;

int val = 100;

int SimpleFunc(void)
{
	int val = 20;
	val += 3;
	::val += 7;  // 범위지정으로 전역변수를 지정해주었다.

	return ::val;  // return 했을 때 전역변수가 나옴.
}

int main(void)
{
	int res;
	res = SimpleFunc();

	cout << res << endl;

	return 0;
}