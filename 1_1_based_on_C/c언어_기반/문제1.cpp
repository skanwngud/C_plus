#include <iostream>

using namespace std;

int main(void)
{
	int result = 0;
	int val;

	for (int i = 0; i < 5; i++)
	{
		cout << i + 1 << " ��° ���� �Է� : ";
		cin >> val;

		result += val;
	}

	cout << "�հ� : " << result;

	return 0;
}