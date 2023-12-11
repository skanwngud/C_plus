#include <iostream>

// Data 이름의 구조체 생성
typedef struct Data
{
    int data;
    void (*ShowData)(Data *);  // 함수포인터
    void (*Add)(Data *, int);  // 함수포인터
};

void ShowData(Data *THIS) { std::cout << "Data: " << THIS->data << std::endl; }
void Add(Data *THIS, int num) { THIS->data += num; }

int main(void)
{
    Data obj1 = {15, ShowData, Add}; 
    Data obj2 = {7, ShowData, Add};
    // obj1, obj2 가 생성 되면 두 변수가 하나의 함수들을 공유 (ShowData, Add)

    obj1.Add(&obj1, 17);
    obj2.Add(&obj2, 9);

    obj1.ShowData(&obj1);
    obj2.ShowData(&obj2);

    return 0;
}
