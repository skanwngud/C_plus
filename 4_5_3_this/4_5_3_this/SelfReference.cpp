#include <iostream>

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		std::cout << "객체 생성" << std::endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
		// 객체 자신을 반환하겠다는 의미인데 반환형이 참조형 SelfRef& 이므로 객체 자신을 참조할 수 있는 참조 정보가 반환
	}

	SelfRef& ShowTwoNumer()
	{
		std::cout << num << std::endl;
		return *this;  // 자신을 참조할 수 있는 참조값이 반환
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumer();
	ref.ShowTwoNumer();

	ref.Adder(1).ShowTwoNumer().Adder(2).ShowTwoNumer();
	return 0;
}