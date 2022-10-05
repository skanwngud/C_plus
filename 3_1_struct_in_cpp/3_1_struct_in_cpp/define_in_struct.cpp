// 2���� ���󿡼��� ��ǥ�� ǥ���� �� �ִ� ����ü�� ������ ���� �����Ͽ���,

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


// �ش� ����ü�� ������� ������ �Լ��� �����ϰ����Ѵ�.

/*
void MovePos(int x, int y);
void AddPoint(const Point &pos);
void ShowPosition();
*/

// ���� �Լ����� ����ü �ȿ� �����Ͽ� ������ ���·� main �Լ��� �����ؾ��Ѵ�.

int main4(void)
{
	Point pos1 = { 12, 4 };
	Point pos2 = { 20, 30 };

	pos1.MovePos(-7, 10);
	pos1.ShowPosition();  // [5, 14] ���

	pos1.AddPoint(pos2);
	pos1.ShowPosition();  // [25, 44] ���

	return 0;
}