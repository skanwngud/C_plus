#include <iostream>

class AAA
{
    private:
        int num1;

    public:
        virtual void Func1() { std::cout << "Func1" << std::endl; }
        virtual void Func2() { std::cout << "Func2" << std::endl; }
};

class BBB: public AAA
{
    private:
        int num2;

    public:
        virtual void Func1() { std::cout << "BBB::Func1" << std::endl; }
        void Func3() { std::cout << "Func3" << std::endl; }
};

int main(void)
{
    AAA *aptr = new AAA();
    aptr->Func1();

    BBB *bptr = new BBB();
    bptr->Func1();

    return 0;
}

// 클래스가 만들어질 때 가상함수 테이블이 만들어지는데,
// 이 때, 상속 받은 클래스의 가상함수 테이블에서 오버라이딩 된 가상함수에 대한 정보가 존재하지 않음

// 또한 이렇게 가상함수 테이블이 만들어지면 속도 저하가 발생하지만 그 속도가 미미하고
// 가상함수의 효용성이 훨씬 크기 때문에 유용하게 활용 됨