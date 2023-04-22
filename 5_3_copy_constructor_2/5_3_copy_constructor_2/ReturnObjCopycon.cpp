// 참조형이 아닌 객체를 반환

#include <iostream>
using namespace std;

class SoSimple2
{
private:
	int num;

public:
	SoSimple2(int n) : num(n)
	{
		// empty
	}

	SoSimple2(const SoSimple2& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}

	SoSimple2& AddNum(int n)  // 참조형 반환
	{
		num += n;
		return *this; // 참조하는 객체 자신을 반환하는데 반환값이 참조형
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

SoSimple2 SimpleFuncObj2(SoSimple2 ob)  // return 값을 SoSimple 객체로 하는 함수
{
	cout << "return 이전" << endl;
	return ob;  // 객체를 반환하는데 반환값이 참조형이 아님 (임시 객체 생성)
}

int main2(void)
{
	SoSimple2 obj(7);
	SimpleFuncObj2(obj).AddNum(30).ShowData();  // 임시객체가 생성 되면서 AddNum 함수의 호출로 임시객체의 값 증가 -> 임시 객체값 출력
	obj.ShowData();  // 복사생성자로 생성 된 객체이므로 위의 임시 객체와는 다른 값을 가짐

	return 0;
}