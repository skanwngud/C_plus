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

        Point operator+(const Point &ref)
        // operator 뒤에 연산자를 붙이면 왼쪽에 있는 객체를 대상으로 함수를 호출하면서 피연산자를 인자로 전달해 연산함
        // 오버로딩 방식에는 멤버함수 (해당 파일) 방법, 전역함수 방법이 있다
        // operator 함수는 const 로 선언하는 것이 더 좋음 (피연산자의 값을 변경하는 것이 아닌 새로운 연산의 결과를 나타내기 때문)
        {
            Point pos(xpos + ref.xpos, ypos + ref.ypos);  // 기존의 객체와 참조되는 객체의 값을 더함
            return pos;
        }
};

int main(void)
{
    Point pos1(3, 4);
    Point pos2(10, 20);
    Point pos3 = pos1 + pos2;

    pos1.ShowPosition();
    pos2.ShowPosition();
    pos3.ShowPosition();

    return 0;
}