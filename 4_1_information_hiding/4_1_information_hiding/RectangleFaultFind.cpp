#include <iostream>
#include "Point.h"
#include "Rectangle.h"

using namespace std;

int main(void)
{
	Point pos1;  // Point ȣ��
	if (!pos1.InitMembers(-2, 4))  // pos1 �ʱ�ȭ -> ������ ����� �ʱ�ȭ ���� ����
		cout << "Initialize fail" << endl;
	if (!pos1.InitMembers(2, 4))
		cout << "Initialize fail" << endl;

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "Initialize fail" << endl;

	Rectangle rec;  // Rectangle ȣ��
	if (!rec.InitMembers(pos2, pos1))  // rec �ʱ�ȭ -> ������ ����� �ʱ�ȭ ���� ����
		cout << "Initialize rectangle fail" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "Initialize rectangle fail" << endl;

	rec.ShowRecInfo();

	return 0;
}