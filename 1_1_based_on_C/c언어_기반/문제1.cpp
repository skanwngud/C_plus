#include <iostream>

using namespace std;

int main(void)
{
	int result = 0;
	int val;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " 번째 정수 입력 : ";
		cin >> val;

		result += val;
	}

	cout << "합계 : " << result;

	return 0;
}