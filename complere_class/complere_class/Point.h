#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int xpos, ypos;

public:
	Point(int x, int y);
	void ShowPointInfo() const;
};
#endif // !__POINT_H_
