// friend �� ���� �� �Լ��� �ڽ��� ���� �� Ŭ������ private �� ������ ����

#include <iostream>

using namespace std;

class Point;  // class ���� ��

class PointOP  // �Լ��� ���� �� �ð��� ����
{
private:
	int opcnt;

public:
	PointOP() : opcnt(0)  // private ������ 0 ���� default �� �ʱ�ȭ
	{
		// empty
	}

	Point PointAdd(const Point&, const Point&);  // ������ ���� �� class �� �Լ�
	Point PointSub(const Point&, const Point&);  // ������ ���� �� class �� �Լ�

	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;  // ���� �ð�
	}
};

class Point  // ���� �� �Լ� ����
{
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{
		// empty
	}

	friend Point PointOP::PointAdd(const Point&, const Point&);  // PointOP class �� �Լ��� friend �� ����
	friend Point PointOP::PointSub(const Point&, const Point&);  // ����
	friend void ShowPointPos(const Point&);  // ���� �Լ��� friend �� ����
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;  // �Լ��� ȣ�� �� ������ ���
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);  // friend �� ���� �Ǿ��� ������ private ������ ���� ����
}

Point PointOP::PointSub(const Point& pnt1, const Point& pnt2)
{
	opcnt++;
	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

int main(void)
{
	Point pos1(1, 2);
	Point pos2(2, 4);
	PointOP op;

	ShowPointPos(op.PointAdd(pos1, pos2));
	ShowPointPos(op.PointSub(pos2, pos1));

	return 0;
}

void ShowPointPos(const Point& pos)
{
	cout << "x: " << pos.x << ", ";  // friend �� ���� �� class �� private ������ ����
	cout << "y: " << pos.y << endl;
}