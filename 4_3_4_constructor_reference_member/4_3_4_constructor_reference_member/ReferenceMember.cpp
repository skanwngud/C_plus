#include <iostream>

class AAA
{
public:
	AAA()
	{
		std::cout << "empty object" << std::endl;  // 객체 생성시 생성자가 호출 되는지 확인
	}

	void ShowYourName()
	{
		std::cout << "I'm Class AAA" << std::endl;
	}
};

class BBB
{
private:
	AAA &ref;  // 참조자가 멤버변수로 선언 -> initializer 로 초기화 해야 함
	const int &num;  // const 참조자가 선언 -> initializer 로 정수형 상수로 초기화 가능

public:
	BBB(AAA &r, const int &n)
		: ref(r), num(n)
	{
		// empty constructor body
	}

	void ShowYourName()
	{
		ref.ShowYourName();
		std::cout << "and" << std::endl;
		std::cout << "I ref num" << num << std::endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);

	obj2.ShowYourName();

	return 0;
}