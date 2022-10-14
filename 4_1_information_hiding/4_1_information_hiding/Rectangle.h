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
	// 함수 뒤에 const 가 붙는 것은 이 함수에서 멤버변수의 값을 변경하지 않겠다는 뜻이다.
	// 이 함수를 호출 할 때에나 참조를 할 때에는 항상 const 함수가 호출하거나 참조해야한다.
	// const 가 붙지 않으면 값을 변경할 수 있는 가능성이 있다라는 뜻이며, 이는 실제로 값이 변경 되지 않아도 추후에 변경 될 위험성이 있다고 판단하여 컴파일 에러가 발생한다
};

#endif // !__RECTANGLE_H_
