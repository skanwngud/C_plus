// �Է°� ������ ���ڸ� ���� ���ϴ� ����

#include <iostream>

int main_c(void)
{
	int val1, val2;
	int results = 0;

	std::cout << "�� ���� ���� �Է� : "; // ���ڿ� ���
	std::cin >> val1 >> val2; // Ű���� �Է��� ���� val1 �� val2 �� ����

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++) // ���� i �� val1 ���� 1 ũ�� val2 ���� 1 ���� ������ i �� ����
			results += i; // �ش� ����� results ��� ������ ���� �� ��� ���� �ݺ�
	}

	else
	{
		for (int i = val2 + 1; i < val1; i++)
			results += 1;
	}

	std::cout << "�� �� ������ ������ �� : " << results << std::endl;

	return 0;
}