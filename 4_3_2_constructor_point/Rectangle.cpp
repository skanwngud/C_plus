#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
	:upLeft(x1, y1), bottomRight(x2, y2)  // 멤버 초기화
{
	// empty -> 몸체 부분이 비는 경우가 종종 생김
}

void Rectangle::ShowRectInfo() const
{
	std::cout << "좌 상단: " << upLeft.GetX() << ", " << upLeft.GetY() << std::endl;
	std::cout << "우 하단: " << bottomRight.GetX() << ", " << bottomRight.GetY() << std::endl;
}