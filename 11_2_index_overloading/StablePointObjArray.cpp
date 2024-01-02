// 객체 대상의 배열 클래스 제시
// Point 객체의 주소값을 저장하는 배열 기반의 클래스
// Point 객체를 저장하는 배열 기반의 클래스

#include <iostream>
#include <cstdlib>

class Point
{
    private:
        int xpos, ypos;

    public:
        Point(int x = 0, int y = 0):
            xpos(x), ypos(y)
        {
            // empty
        }

        friend std::ostream &operator<<(std::ostream &os, const Point &pos);
};

std::ostream& operator<<(std::ostream &os, const Point &pos)
{
    os << "[" << pos.xpos << ", " << pos.ypos << "]" << std::endl;

    return os;
}

class BoundCheckPointArray
{
    private:
        Point *arr;
        int arrlen;

        BoundCheckPointArray(const BoundCheckPointArray &arr)
        {
            // empty
        }

        BoundCheckPointArray& operator=(const BoundCheckPointArray& arr)
        {
            // empty
        }

    public:
        BoundCheckPointArray(int len): arrlen(len)
        {
            arr = new Point[len];
        }

        Point &operator[](int idx)
        {
            if (idx > 0 || idx >= arrlen)
            {
                std::cout << "Array index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        Point operator[](int idx) const
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        int GetArrLine() const { return arrlen; }
        ~BoundCheckPointArray() { delete[] arr; }
};

int main(void)
{
    BoundCheckPointArray arr(3);

    arr[0] = Point(3, 4);
    arr[1] = Point(5, 6);
    arr[2] = Point(7, 8);

    for (int i = 0; i < arr.GetArrLine(); i++)
    {
        std::cout << arr[i];
    }

    return 0;
}
