/**
생성자는 함수가 호출 될 때 딱 한 번만 실행
클래스의 이름과 동일 이름의 함수로 정의
반환형이 선언 되지 않으며 실제로 반환하지 않음
python 의 __init__ 과 같음

생성자도 함수의 일종이니 오버로딩이 가능
매개변수에 디폴트 값을 설정할 수 있다
**/

#include <iostream>

class SimpleClass
{
private:
	int num1;
	int num2;
public:
	SimpleClass()
	{
		num1 = 0;
		num2 = 0;
	}

	SimpleClass(int n)
	{
		num1 = n;
		num2 = 0;
	}

	SimpleClass(int n1, int n2)
	{
		num1 = n1;
		num2 = n2;
	}

	/*
	SimpleClass(int n1=0, int n2=0)
	{
		num1 = n1;
		num2 = n2;
	}
	*/  // 해당 디폴트 값도 입력 가능하다, 주석을 해제하고 바로 위의 함수와 같이 컴파일하면 어떤 함수를 호출할 지 애매하다는 에러가 뜬다

	void ShowData() const
	{
		std::cout << num1 << " " << num2 << std::endl;
	}
};

int main2(void)
{
	SimpleClass sc1;
	// SimpleClass * ptr1 = new SimpleClass;  -> 동적 할당의 형태
	// SimpleClass * ptr1 = new SimpleClass();
	// SimpleClass sc1();  -> 이렇게 선언 불가
	sc1.ShowData();

	SimpleClass sc2(100);
	// SimpleClass * ptr2 = new SimpleClass(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	// SimpleClass * ptr3 = new SimpleClass(100, 200);
	sc3.ShowData();

	return 0;
}