#include <iostream>

class First
{
    public:
        virtual void MyFunc() { std::cout << "FirstFunc" << std::endl; }  // virtual 로 선언하면 가상함수화
};

class Second : public First{
    public:
        virtual void MyFunc() { std::cout << "SeocndFunc" << std::endl; }  // First 에서 이미 virtual 선언을 했기에 오버라이딩 관계의 함수는 자동으로 virtual 이 된다
};

class Third : public Second
{
    public:
        virtual void MyFunc() { std::cout << "ThirdFunc" << std::endl; }  // 하지만 명시적으로 virtual 이라고 선언해두는 것도 좋은 습관
};

int main(void)
{
    Third *tptr = new Third();
    Second *sptr = tptr;
    First *fptr = sptr;

    tptr->MyFunc();  // 가상함수로 선언이 되면 해당 함수 호출 시 포인터 자료형을 기반으로 호출 대상을 결정하지 않는다
    sptr->MyFunc();  // 실제 포인터가 가리키는 객체를 참조하여 호출의 대상을 결정한다
    fptr->MyFunc();

    delete tptr;
    return 0;
}

// ThirdFunc 만 출력