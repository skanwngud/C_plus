// c ������ static
// 1. �Լ� ������ ���� �� static ������ ��� �� ���� �ʱ�ȭ�� �ǰ� �Լ��� ���� �ǵ� ������� ����
// 2. ���������� ���� �� static ������ ��� ���� �� ���� �������� ����� ����

#include <iostream>

void Counter()
{
	static int cnt;
	cnt++;

	std::cout << "Current cnt: " << cnt << std::endl;
}

int main1(void)
{
	for (int i = 0; i < 10; i++)
	{
		Counter();
	}

	return 0;
}