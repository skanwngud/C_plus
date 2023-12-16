#include <iostream>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0)
            : xpos(x), ypos(y)
        { }

        void ShowPosition() const
        {
            std::cout << xpos << ", " << ypos << std::endl;
        }

        Point& operator++()  // 전위 증가
        {
            xpos += 1;
            ypos += 1;

            return *this;
        }

        const Point operator++(int)  // 후위 증가
        {
            const Point retobj(xpos, ypos); // const Point retobj(*this);
            xpos += 1;  // 위 쪽의 새로운 객체를 만든 뒤 연산
            ypos += 1;

            return retobj;
        }

        friend Point& operator--(Point &ref);  // 전역 함수 전위 감소
        friend const Point operator--(Point &ref, int);  // 전역 함수 후위 감소
};

Point& operator--(Point &ref)
{
    ref.xpos -= 1;
    ref.ypos -= 1;

    return ref;
}

const Point operator--(Point &ref, int)
// 반환형이 const 인 이유는 함수의 반환으로 생성 되는 임시 객체를 const 로 생성하겠단 의미
// 저장 된 값의 변경을 허용하지 않겠다는 의미이며 const 로 선언 되지 않은 함수의 호출은 허용하지 않음
{
    const Point retobj(ref.xpos, ref.ypos);

    ref.xpos -= 1;
    ref.ypos -= 1;

    return retobj;
}

int main(void)
{
    Point pos(3, 5);
    Point cpy;

    cpy = pos--;
    cpy.ShowPosition();
    pos.ShowPosition();

    cpy = pos++;
    cpy.ShowPosition();
    pos.ShowPosition();

    return 0;
}