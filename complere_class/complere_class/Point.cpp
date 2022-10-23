#include <iostream>
#include "Point.h"

Point::Point(int x, int y)
	:xpos(x), ypos(y)
{
	// empty
};

void Point::ShowPointInfo() const
{
	std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
}