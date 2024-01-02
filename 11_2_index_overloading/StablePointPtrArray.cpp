// 주소값을 대상으로하는 배열

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

// 포인터 형을 의미하는 POINT_PTR 지정
// 저장의 대상, 또는 연산의 주 대상이 포인터인 경우 별도의 자료형을 정의하는 것이 좋다.
typedef Point *POINT_PTR;

class BoundCheckPointPtrArray
{
    private:
        POINT_PTR *arr;  // 포인터형
        int arrlen;

        BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) { }
        BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) { }

    public:
        BoundCheckPointPtrArray(int len):
            arrlen(len)
        {
            arr = new POINT_PTR[len];  // 새로운 포인터형 배열 생성
        }

        POINT_PTR &operator[](int idx)
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array Index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        POINT_PTR operator[](int idx) const
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array indext out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        int GetArrLen() const { return arrlen; }
        ~BoundCheckPointPtrArray() { delete[] arr; }
};

int main(void)
{
    BoundCheckPointPtrArray arr(3);

    arr[0] = new Point(3, 4);  // 주소값을 저장하므로 얕은 복사냐 깊은 복사냐 생각 할 필요가 없다.
    arr[1] = new Point(5, 6);
    arr[2] = new Point(7, 8);

    for (int i = 0; i < arr.GetArrLen(); i++)
    {
        std::cout << *(arr[i]);
    }

    delete arr[0];  // 객체의 생성과 소멸 때문에 new 와 delete 를 사용하므로 더 복잡해보이지만 얕은 복사, 깊은 복사를 신경쓰지 않아도 되므로 더 많이 사용한다.
    delete arr[1];
    delete arr[2];

    return 0;
}