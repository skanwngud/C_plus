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
        BoundCheckIntArray(int len): arrlen(len)
        {
            arr = new int[len];
        }

        int &operator[](int idx) const 
        {
            if (idx < 0 || idx >= arrlen)
            {
                std::cout << "Array index out of bound exception" << std::endl;
                exit(1);
            }

            return arr[idx];
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
        std::cout << ref[idx] << std::endl; // ref[idx] = ref.operator[](idX); 는 const 로 선언 되었으므로 이제 컴파일 가능.
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