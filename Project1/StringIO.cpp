#include <iostream>

int main(void)
{
	char name[100]; // name ���� �ʱ�ȭ
	char lang[200]; // lang ���� �ʱ�ȭ

	std::cout << "�̸��� �����Դϱ�?";
	std::cin >> name;

	std::cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	std::cin >> lang;

	std::cout << "�� �̸��� "<<name<<" �Դϴ�.\n"; // ���ڿ� �߰��� << << �� ������ �־� ���
	std::cout << "���� ���� �����ϴ� ���� " << lang << " �Դϴ�." << std::endl;

	return 0;
}