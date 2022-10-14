#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle
{
private:
	Point topLeft;
	Point bottomRight;

public:
	bool InitMembers(const Point &tl, const Point &br);
	void ShowRecInfo() const;
	// �Լ� �ڿ� const �� �ٴ� ���� �� �Լ����� ��������� ���� �������� �ʰڴٴ� ���̴�.
	// �� �Լ��� ȣ�� �� ������ ������ �� ������ �׻� const �Լ��� ȣ���ϰų� �����ؾ��Ѵ�.
	// const �� ���� ������ ���� ������ �� �ִ� ���ɼ��� �ִٶ�� ���̸�, �̴� ������ ���� ���� ���� �ʾƵ� ���Ŀ� ���� �� ���輺�� �ִٰ� �Ǵ��Ͽ� ������ ������ �߻��Ѵ�
};

#endif // !__RECTANGLE_H_
