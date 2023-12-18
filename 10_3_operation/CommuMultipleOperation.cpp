#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            : xpos(x), ypos(y)
        {
            /// empty
        }

        void ShowPosition() const
        {
            std::cout << xpos << ", " << ypos << std::endl;
        }

        Point operator*(int times)
        {
            Point pos(xpos * times, ypos * times);
            return pos;
        }

        friend Point operator*(int times, Point &ref);
};

Point operator*(int times, Point &ref)
{
    return ref * times;

    // Point pos(ref.xpos * times, ref.ypos * times);
    // return pos;  도 가능
}

int main(void)
{
    Point pos(1, 2);
    Point cpy;

    cpy = 3 * pos;
    cpy.ShowPosition();

    cpy = 2 * pos * 3;
    cpy.ShowPosition();

    return 0;
}

// 교환 법칙이 성립 되기 위해선 operator*(3, pos); 등의 형태가 되어야 함