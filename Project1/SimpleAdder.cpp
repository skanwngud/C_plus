#include <iostream>

int main(void)
{
	int val1;
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1; // ������ �Է� �޾� val1 �� ����

	int val2;
	std::cout << "�� ��° �����Է� : ";
	std::cin >> val2; // ������ �Է� �޾� val2 �� ����

	int result = val1 + val2;
	std::cout << "������� : "<<result<<std::endl;

	return 0;
}

/*
std::cin : Ű���� �Է¿� �ʿ��� ������ >> �� �ʿ�
Ű���� �Է����� ���ع��� ������ �ٸ� ������ ���� ����
*/