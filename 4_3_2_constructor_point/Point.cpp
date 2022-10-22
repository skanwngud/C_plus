#include <iostream>
#include "Point.h"

Point::Point(const int &xpos, const int &ypos)
{
	if (Point::SetX(xpos) || Point::SetY(ypos))
		return;

	x = xpos;
	y = ypos;
}

bool Point::SetX(int xpos)
{
	if (xpos < 0 || xpos > 100)
		return false;

	x = xpos;

	return true;
}

bool Point::SetY(int ypos)
{
	if (ypos < 0 || ypos > 100)
		return false;

	y = ypos;

	return true;
}

int Point::GetX() const { return x; }
int Point::GetY() const { return y; }