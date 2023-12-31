// []연산자 오버로딩

#include <iostream>
#include <cstdlib>

class BoundCheckIntArray
{
    private:
        int *arr;
        int arrlen;

    public:
        BoundCheckIntArray(int len) :
            arrlen(len)
        {
            arr = new int[len];
        }

        int& operator[](int idx)  // 배열 접근 오버로딩을 통해 잘못 접근 된 인덱스는 걸러준다
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array Index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        ~BoundCheckIntArray()
        {
            delete[] arr;
        }
};

int main(void)
{
    BoundCheckIntArray arr(5);

    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 11;
    }

    for (int i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }

    return 0;
}