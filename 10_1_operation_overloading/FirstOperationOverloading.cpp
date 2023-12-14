#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            : xpos(x), ypos(y)
        {
            // empty
        }

        void ShowPosition() const
        {
            std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
        }

        Point operator+(const Point &ref)  // operator+ 라는 이름의 함수
        {
            Point pos(xpos + ref.xpos, ypos + ref.ypos);  // 기존의 객체와 참조되는 객체의 값을 더함
            return pos;
        }
};

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1.operator+(pos2);

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}