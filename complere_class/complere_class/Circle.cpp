#include <iostream>
#include "Point.h"
#include "Circle.h"

Circle::Circle(int x, int y, int r)
	:rad(r), center(x, y)
{
	// empty
};

void Circle::ShowCircleInfo() const
{
	std::cout << "radius: " << rad << std::endl;
	center.ShowPointInfo();
}