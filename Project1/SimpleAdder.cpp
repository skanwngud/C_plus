#include <iostream>

int main_b(void)
{
	double val1;
	std::cout << "ù ��° �����Է� : ";
	std::cin >> val1; // ������ �Է� �޾� val1 �� ����

	double val2;
	std::cout << "�� ��° �����Է� : ";
	std::cin >> val2; // ������ �Է� �޾� val2 �� ����

	double result = val1 + val2;
	std::cout << "������� : "<<result<<std::endl;

	return 0;
}

/*
std::cin : Ű���� �Է¿� �ʿ��� ������ >> �� �ʿ�
Ű���� �Է����� ���ع��� ������ �ٸ� ������ ���� ����
*/