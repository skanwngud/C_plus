// const 함수 내에서의 값의 변경을 예외적으로 허용
// 따라서 가급적이면 mutable 의 사용을 줄여야함

#include <iostream>

class SoSimple
{
private:
	int num1;
	mutable int num2;  // const 함수 내에서 변화를 예외적으로 허용

public:
	SoSimple(int n1, int n2)
		: num1(n1), num2(n2)
	{
		// empty
	}

	void ShowSimpleData() const  // const 함수 정의
	{
		std::cout << num1 << ", " << num2 << std::endl;
	}

	void CopyNum2() const  // const 함수 정의
	{
		num2 = num1;  // 원래라면 const 함수 내에서의 값의 변화는 허용 되지 않지만 mutable 로 선언 된 num2 는 num1 로 변경 되었다
	}
};

int main(void)
{
	SoSimple sim(1, 2);

	sim.ShowSimpleData();
	sim.CopyNum2();
	sim.ShowSimpleData();

	return 0;
}