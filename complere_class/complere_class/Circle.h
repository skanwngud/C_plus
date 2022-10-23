#ifndef __CIRCLE_H_
#define __CIRCLE_H_

#include "Point.h"

class Circle
{
private:
	int rad;
	Point center;

public:
	Circle(int x, int y, int r);
	void ShowCircleInfo() const;
};

#endif
