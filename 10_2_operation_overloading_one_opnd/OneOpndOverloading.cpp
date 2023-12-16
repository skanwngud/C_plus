#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            : xpos(x), ypos(y)
        {   }

        void ShowPosition() const
        {
            std::cout << "[" << xpos << ", " << ypos << "]" << std::endl;
        }

        Point& operator++()  // 멤버함수이므로 인자 전달 안 함
        {
            xpos += 1;
            ypos += 1;

            return *this;  // 자기 자신을 반환
        }

        friend Point &operator--(Point &ref);  // 전역함수이므로 인자 전달
};

Point& operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;

    return ref;
}

int main(void)
{
    Point pos(1, 2);
    ++pos;
    pos.ShowPosition();
    --pos;
    pos.ShowPosition();

    ++(++pos); // ++(pos.operator++) -> (pos의 참조값).operator++(); 의 형태
    pos.ShowPosition();

    --(--pos); // operator-- 연산자는 &ref 를 인자로 받고 참조형으로 다시 반환하므로 operator--(pos의 참조값); 의 형태가 된다.
    pos.ShowPosition();

    return 0;
}
