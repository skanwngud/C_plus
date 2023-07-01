// ���簢�� Square, ���簢�� Rectangle Ŭ���� ����
// ���簢���� ���簢���� �����̹Ƿ� Square -> Rectangle �� ����� ����

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
		std::cout << "����: " << x * y << std::endl;
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

// ����: 12
// ����: 49