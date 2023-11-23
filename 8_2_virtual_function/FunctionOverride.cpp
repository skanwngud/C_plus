#include <iostream>


class First
{
    public:
        void MyFunc() { std::cout << "FirstFunc" << std::endl; }
};

class Second : public First
{
    public:
        void MyFunc() { std::cout << "SecondFunc" << std::endl; }
};

class Third : public Second
{
    public:
        void MyFunc() { std::cout << "ThridFunc" << std::endl; }
};


int main(void)
{
    Third *tptr = new Third;
    Second *sptr = tptr;
    First *fptr = sptr;

    fptr->MyFunc();  // First 형태로 선언했기에 First 내부의 함수는 무조건 호출 가능하므로 First 클래스 내의 함수 호출
    sptr->MyFunc();  // Second 형태로 선언했기에 First, Second 함수를 호출 가능, 클래스 별 오버라이딩이 존재하므로 오버라이딩한 Second 함수 호출
    tptr->MyFunc();  // 오버라이딩 관계에 놓인 함수가 총 3개가 존재하며 가장 마지막에 오버라이딩 된 Thrid 의 함수 호출

    delete tptr;

    return 0;
}