// Point 클래스에 대해 다음 조건을 만족하는 형태로 - 연산자 오버로딩
// 전역함수 기반
// 멤버별 - 연산의 결과를 담은 Point 객체 반환

// Point 클래스에 대해 다음 조건을 만족하는 형태로 += 연산자와 -= 연산자를 오버로딩
// 멤버함수 기반
// pos1 += pos2 의 결과로 pos1 의 멤버변수 값이 pos2 멤버변수 값만큼 멤버 별 증가
// pos1 -= pos2 의 결과로 pos1 의 멤버변수 값이 pos2 멤버변수 값만큼 멤버 별 감소
// 연산의 결과로 값이 변한 pos1 의 객체 반환 (참조형으로)

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

        Point operator+=(const Point &pos)
        {
            xpos += pos.xpos;
            ypos += pos.ypos;

            return *this;
        }

        Point operator-=(const Point &pos)
        {
            xpos -= pos.xpos;
            ypos -= pos.ypos;

            return *this;
        }

        friend Point operator-(const Point &pos1, const Point &pos2);
        friend bool operator==(const Point &pos1, const Point &pos2);
        friend bool operator!=(const Point &pos1, const Point &pos2);
};

Point operator-(const Point &pos1, const Point &pos2)
{
    int x, y;
    x = pos1.xpos - pos2.xpos;
    y = pos1.ypos - pos2.ypos;

    return Point(x, y);
}

bool operator==(const Point &pos1, const Point &pos2)
{
    if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
    {
        return true;
    }

    return false;
}

bool operator!=(const Point &pos1, const Point &pos2)
{
    if (!(operator==(pos1, pos2)))
    {
        return true;
    }

    return false;
}

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3(3, 4);

    std::cout << (pos1 == pos2) << std::endl;
    std::cout << (pos1 == pos3) << std::endl;
    std::cout << (pos2 == pos3) << std::endl;

    std::cout << (pos1 != pos2) << std::endl;
    std::cout << (pos1 != pos3) << std::endl;
    std::cout << (pos2 != pos3) << std::endl;

    pos1.ShowPosition();

    pos1 += pos2;
    pos1.ShowPosition();

    pos2.ShowPosition();

    pos2 -= pos3;
    pos2.ShowPosition();

    Point pos4 = pos1 - pos2;
    Point pos5 = pos1 - pos3;

    pos4.ShowPosition();
    pos5.ShowPosition();

    return 0;
}