#include <iostream>

using namespace std;

int val = 100;

int SimpleFunc(void)
{
	int val = 20;
	val += 3;
	::val += 7;  // ������������ ���������� �������־���.

	return ::val;  // return ���� �� ���������� ����.
}

int main(void)
{
	int res;
	res = SimpleFunc();

	cout << res << endl;

	return 0;
}