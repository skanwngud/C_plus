#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &tl, const Point &br)
{
	if (tl.GetX() > br.GetX() || tl.GetY() > br.GetY())
	{
		cout << "�߸� �� ��ġ ����" << endl;
		return false;
	}

	topLeft = tl;
	bottomRight = br;

	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "�� ���: " << topLeft.GetX()<< ", " << topLeft.GetY() << endl;
	cout << "�� �ϴ�: " << bottomRight.GetX() << ", " << bottomRight.GetY() << endl;
}