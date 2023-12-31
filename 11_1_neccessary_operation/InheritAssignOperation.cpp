// 대입 연산자는 생성자가 아니다.
// 유도 클래스의 대입 연산자에서는 아무런 명시를 하지 않음년 기초 클래스의 대입 연산자가 호출 되지 않는다.

#include <iostream>

class First
{
private:
	int num1, num2;

public:
	First(int n1 = 0, int n2 = 1) :
		num1(n1), num2(n2)
	{
		// empty
	}

	void ShowData()
	{
		std::cout << num1 << ", " << num2 << std::endl;
	}

	First& operator=(const First& ref)
	{
		std::cout << "First& operator=()" << std::endl;
		num1 = ref.num1;
		num2 = ref.num2;

		return *this;
	}
};

class Second : public First
{
private:
	int num3, num4;

public:
	Second(int n1, int n2, int n3, int n4) :
		First(n1, n2), num3(n3), num4(n4)
	{
		// empty
	}

	void ShowData()
	{
		First::ShowData();
		std::cout << num3 << ", " << num4 << std::endl;
	}

	Second& operator=(const Second& ref)
	{
		std::cout << "Second& operator=()" << std::endl;
		num3 = ref.num3;
		num4 = ref.num4;

		return *this;
	}
};

int main(void)
{
	Second ssrc(111, 222, 333, 444);  // 부모 클래스의 대입연산자를 불러옴
	Second scpy(0, 0, 0, 0);  // 부모 클래스의 대입연산자를 불러오지않고 자식 클래스의 대입연산자만 불러옴

	scpy = ssrc;
	scpy.ShowData();

	return 0;
}