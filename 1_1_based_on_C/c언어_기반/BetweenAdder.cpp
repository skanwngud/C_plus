#include <iostream>

using namespace std;

int c(void)
{
	int val1, val2;
	int result = 0;

	cout << "�� ���� ���� �Է� : ";
	cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // for �� �ʱ�ȭ ���� ������ ���� ������ ����
		{
			result += i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			result += i;
		}
	}
	
	cout << "�� �� ������ ���� �� : " << result << endl;

	return 0;
}