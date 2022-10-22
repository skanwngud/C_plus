#include <iostream>

class AAA
{
private:
	int num;
	
public:
	AAA() :num(0) {}  // public 으로 생성자가 정의, 외부에서는 이 생성자를 기반으로 객체를 생성
	AAA& CreateInitObj(int n) const
	{
		AAA * ptr = new AAA(n);  // 18 행에 정의 된 private 생성자를 통해 객체를 생성 및 반환
		return *ptr;
	}

	void ShowNum() const { std::cout << num << std::endl; }
	
private:
	AAA(int n) :num(n) {}
};

int main(void)
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;

	return 0;
}