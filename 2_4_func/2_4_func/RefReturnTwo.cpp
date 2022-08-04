#include <iostream>
using namespace std;

int& RefRetTwo(int &ref)
{
	ref++;
	return ref;
}


int main__(void)
{
	int num1 = 1;
	int num2 = RefRetTwo(num1);

	num1 += 1;
	num2 += 100;

	cout << num1 << endl;
	cout << num2 << endl;

	return 0;
}