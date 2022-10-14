#ifndef __POINT_H_
#define __POINT_H_

class Point
{
private:
	int x;  // 외부에서 함부로 값이 변경 되는 것을 막기 위해 정보 은닉
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;  // 좌표를 가져옴
	int GetY() const;
	bool SetX(int xpos);  // 좌표를 설정함
	bool SetY(int ypos);
};
#endif // __POINT_H__
