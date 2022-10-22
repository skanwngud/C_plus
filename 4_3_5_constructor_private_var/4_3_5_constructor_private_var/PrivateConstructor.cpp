#include <iostream>

class AAA
{
private:
	int num;
	
public:
	AAA() :num(0) {}  // public ���� �����ڰ� ����, �ܺο����� �� �����ڸ� ������� ��ü�� ����
	AAA& CreateInitObj(int n) const
	{
		AAA * ptr = new AAA(n);  // 18 �࿡ ���� �� private �����ڸ� ���� ��ü�� ���� �� ��ȯ
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