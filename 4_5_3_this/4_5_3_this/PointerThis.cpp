// 멤버함수 내에서는 this 라는 이름의 포인터를 사용할 수 있다
// 객체 자신을 가리키는 용도로 사용 되는 포인터이며 파이썬의 self 와 비슷하다

#include <iostream>
#include <cstring>

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)
	{
		std::cout << "num=" << num << ", ";
		std::cout << "address=" << this << std::endl;
	}

	void ShowSimpleData()
	{
		std::cout << num << std::endl;
	}

	SoSimple *GetThisPointer()
	{
		return this;
	}
};

int main2(void)
{
	SoSimple sim1(100);  // 객체를 선언
	SoSimple *ptr1 = sim1.GetThisPointer();  // sim1 의 주소값 저장 -> this 는 SoSimple 의 포인터 이므로 SoSimple 형 포인터 변수에 저장해야한다
	
	std::cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple *ptr2 = sim2.GetThisPointer();  // sim2 의 주소값 저장 -> 33 행과 마찬가지
	std::cout << ptr2 << " ,";
	ptr2->ShowSimpleData();

	return 0;
}