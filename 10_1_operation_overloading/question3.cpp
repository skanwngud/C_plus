// ==, =! 연산자 오버로딩
// 전역함수
// pos1 == pos2 같다면 true, 아님 false
// pos1 != pos2, true, false
// == 먼저 오버로딩하고 이를 이용하는 형태로 != 오버로딩

#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            : xpos(x), ypos(y)
        { }

        void ShowPosition()
        {
            std::cout << xpos << ", " << ypos << std::endl;
        }

        friend Point operator==(const Point &pos1, const Point &pos2);
};

Point operator==(const Point &pos1, const Point &pos2)
{
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
    {
        return true;
    }

    return false;
}

Point operator!=(const Point &pos1, const Point &pos2)
{

}