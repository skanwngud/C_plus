// 객체를 초기화 할 때 이미 생성 된 객체로 초기화

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)  // 생성자 함수
	{
		// empty
		cout << "memory address: " << &num << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)  // 복사 생성자
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
		cout << "Copied memory address: " << &num << endl;
	}

	void ShowDate() const  // 단순 정보 출력
	{
		cout << "num: " << num << endl;
		cout << "Show date memory address: " << &num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)  // 객체를 매개변수로 받는다
{
	ob.ShowDate();  // 복사 한 매개변수의 정보 출력
}

int main1(void)
{
	SoSimple obj(7);  // 객체 생성
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);  // 기존에 생성 된 객체의 복사와 함께 객체 생성
	cout << "함수 호출 후" << endl;
	
	return 0;
}