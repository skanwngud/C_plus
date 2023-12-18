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

        Point operator*(int times)
        {
            Point pos(xpos * times, ypos * times);
            return pos;
        }
};

int main(void)
{
    Point pos(1, 2);
    Point cpy;

    cpy = pos * 3;  // 교환 법칙이 성립하기 위해선 3 * pos 도 가능해야하는데 현재의 오버로딩으로는 해당 연산 불가
    cpy.ShowPosition();

    cpy = pos * 3 * 2;
    cpy.ShowPosition();

    return 0;
}