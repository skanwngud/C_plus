#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const int &x1, const int &y1, const int &x2, const int &y2)
	:upLeft(x1, y1), bottomRight(x2, y2)  // ��� �ʱ�ȭ
{
	// empty -> ��ü �κ��� ��� ��찡 ���� ����
}

void Rectangle::ShowRectInfo() const
{
	std::cout << "�� ���: " << upLeft.GetX() << ", " << upLeft.GetY() << std::endl;
	std::cout << "�� �ϴ�: " << bottomRight.GetX() << ", " << bottomRight.GetY() << std::endl;
}