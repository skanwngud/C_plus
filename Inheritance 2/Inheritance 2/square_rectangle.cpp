// 정사각형 Square, 직사각형 Rectangle 클래스 정의
// 정사각형은 직사각형의 일종이므로 Square -> Rectangle 의 관계로 구현

#include <iostream>

class Rectangle
{
private:
	int x;
	int y;

public:
	Rectangle(int x1, int y1)
		: x(x1), y(y1)
	{
		// empty
	}

	void ShowAreaInfo() const
	{
		std::cout << "면적: " << x * y << std::endl;
	}
};

class Square : public Rectangle
{
private:
	int x;

public:
	Square(int x1)
		: x(x1), Rectangle(x1, x1)
	{
		// empty
	}
};

int main1(void)
{
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();

	return 0;
}

// 면적: 12
// 면적: 49