#include <iostream>

using namespace std;

int d(void)
{
	char name[100];
	char lang[200];

	cout << "�̸��� �����Դϱ�?";
	cin >> name;

	cout << "�����ϴ� ���α׷��� ���� �����ΰ���?";
	cin >> lang;

	cout << "�� �̸��� " << name << "�Դϴ�." << endl;
	cout << "���� �����ϴ� ���α׷��� ���� " << lang << "�Դϴ�.";

	return 0;
}