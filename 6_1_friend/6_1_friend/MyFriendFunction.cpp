// friend 로 선언 된 함수는 자신이 선언 된 클래스의 private 에 접근이 가능

#include <iostream>

using namespace std;

class Point;  // class 선언만 함

class PointOP  // 함수가 실행 된 시간을 측정
{
private:
	int opcnt;

public:
	PointOP() : opcnt(0)  // private 변수를 0 으로 default 로 초기화
	{
		// empty
	}

	Point PointAdd(const Point&, const Point&);  // 위에서 선언 된 class 의 함수
	Point PointSub(const Point&, const Point&);  // 위에서 선언 된 class 의 함수

	~PointOP()
	{
		cout << "Operation times: " << opcnt << endl;  // 실행 시간
	}
};

class Point  // 선언 된 함수 정의
{
private:
	int x;
	int y;

public:
	Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
	{
		// empty
	}

	friend Point PointOP::PointAdd(const Point&, const Point&);  // PointOP class 의 함수를 friend 로 지정
	friend Point PointOP::PointSub(const Point&, const Point&);  // 동일
	friend void ShowPointPos(const Point&);  // 전역 함수를 friend 로 지정
};

Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2)
{
	opcnt++;  // 함수가 호출 될 때마다 상승
	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);  // friend 로 지정 되었기 때문에 private 변수에 접근 가능
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
	cout << "x: " << pos.x << ", ";  // friend 로 지정 된 class 의 private 변수에 접근
	cout << "y: " << pos.y << endl;
}