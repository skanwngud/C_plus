#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos)
{
	if (xpos < 0 || ypos < 0)
	{
		cout << "범위를 벗어난 값" << endl;
		return false;
	}

	x = xpos;
	y = ypos;

	return true;
}

// private 으로 정의 된 변수들에 접근하는 함수들을 access function 이라고 한다
int Point::GetX() const
{
	return x;
}

int Point::GetY() const
{
	return y;
}

bool Point::SetX(int xpos)
{
	if (0 > xpos || xpos > 100)
	{
		cout << "범위를 벗어난 값" << endl;
		return false;
	}

	x = xpos;

	return true;
}

bool Point::SetY(int ypos)
{
	if (0 > ypos || ypos > 100)
	{
		cout << "범위를 벗어난 값" << endl;
		return false;
	}

	y = ypos;

	return true;

}