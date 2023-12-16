// 부호연산자 - 를 멤버함수로 오버로딩
// 비트연산자 ~ 를 전역함수로 오버로딩 (xpos엔 y가 ypos엔 x가 들어가는 식으로)

#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            :xpos(x), ypos(y)
        {    }

        void ShowPosition() const
        {
            std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
        }

        Point operator-()
        {
            Point pos(-xpos, -ypos);

            return pos;
        }

        friend Point operator~(const Point &);
};

Point operator~(const Point &ref)
{
    Point pos(ref.ypos, ref.xpos);

    return pos;
}

int main(void)
{
    Point pos1(3, 4);
    Point pos2 = -pos1;

    pos1.ShowPosition();
    pos2.ShowPosition();

    pos2 = ~pos1;

    pos1.ShowPosition();
    pos2.ShowPosition();

    return 0;
}