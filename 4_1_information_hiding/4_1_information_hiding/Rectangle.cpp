#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point &tl, const Point &br)
{
	if (tl.GetX() > br.GetX() || tl.GetY() > br.GetY())
	{
		cout << "잘못 된 위치 정보" << endl;
		return false;
	}

	topLeft = tl;
	bottomRight = br;

	return true;
}

void Rectangle::ShowRecInfo() const
{
	cout << "좌 상단: " << topLeft.GetX()<< ", " << topLeft.GetY() << endl;
	cout << "우 하단: " << bottomRight.GetX() << ", " << bottomRight.GetY() << endl;
}