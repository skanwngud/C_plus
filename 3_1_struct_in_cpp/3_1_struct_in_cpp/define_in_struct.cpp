// 2차원 평면상에서의 좌표를 표현할 수 있는 구조체를 다음과 같이 정의하였고,

#include <iostream>
using namespace std;

struct Point
{
	int xpos;
	int ypos;

	void MovePos(int x, int y)
	{
		xpos += x;
		ypos += y;
	}

	void ShowPosition()
	{
		cout << "[" << xpos << ", " << ypos << "]"<< endl;
	}

	void AddPoint(const Point &pos)
	{
		xpos += pos.xpos;
		ypos += pos.ypos;
	}
};


// 해당 구조체를 기반으로 다음의 함수를 정의하고자한다.

/*
void MovePos(int x, int y);
void AddPoint(const Point &pos);
void ShowPosition();
*/

// 위의 함수들을 구조체 안에 정의하여 다음의 형태로 main 함수를 구성해야한다.

int main4(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();  // [5, 14] 출력

	pos1.AddPoint(pos2);
	pos1.ShowPosition();  // [25, 44] 출력

	return 0;
}