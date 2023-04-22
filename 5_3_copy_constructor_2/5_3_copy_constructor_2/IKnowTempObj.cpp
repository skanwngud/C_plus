// 임시객체

#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;

public:
	Temporary(int n) : num(n)
	{
		cout << "create obj" << endl;
	}

	~Temporary()
	{
		cout << "destroy obj" << endl;
	}

	void ShowTempInfo() const
	{
		cout << "My num is " << num << endl;
	}
};

int main3(void)
{
	Temporary(100);  // 100 으로 초기화 된 임시객체 생성, 다음 행으로 넘어가면 바로 종료
	cout << "after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "after make!" << endl << endl;

	const Temporary &ref = Temporary(300);
	cout << "end of main!" << endl << endl;

	return 0;
}

// 임시 객체의 호출을 위해 필요한 것들
// 객체에 붙여진 이름, 참조값, 주소값
// 임시 객체가 생성 된 위치에는 참조값이 반환 되며, 다음 행으로 넘어갈 때 바로 사라진다
// 그러나 참조자 (&) 에 의해 참조 된 객체는 바로 소멸 되지는 않는다