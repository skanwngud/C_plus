// const 를 통한 배열 오버로딩

#include <iostream>
#include <cstdlib>

class BoundCheckIntArray
{
    private:
        int *arr;
        int arrlen;
        BoundCheckIntArray(const BoundCheckIntArray &arr) {}
        BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}
    public:
        BoundCheckIntArray(int len)
        {
            arr = new int[len];
        }

        int &operator[](int idx)
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
        }

        int GetArrlen() const { return arrlen; }
        ~BoundCheckIntArray() { delete[] arr; }
};

void ShowAllData(const BoundCheckIntArray& ref) // 배열 저장소의 변경을 막기 위해 const 로 선언
{
    int len = ref.GetArrlen();
    for (int idx = 0; idx < len; idx++)
    {
        std::cout << ref[idx] << std::endl; // ref[idx] = ref.operator[](idX); 이므로 해당 함수는 const 가 아니기 때문에 컴파일 에러 발생
    }
}

int main(void)
{
    BoundCheckIntArray arr(5);

    for (int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 11;
    }

    ShowAllData(arr);

    return 0;
}