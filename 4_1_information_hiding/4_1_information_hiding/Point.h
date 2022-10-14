#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;  // �ܺο��� �Ժη� ���� ���� �Ǵ� ���� ���� ���� ���� ����
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;  // ��ǥ�� ������
	int GetY() const;
	bool SetX(int xpos);  // ��ǥ�� ������
	bool SetY(int ypos);
};
#endif // __POINT_H__
