// ����Լ� �������� this ��� �̸��� �����͸� ����� �� �ִ�
// ��ü �ڽ��� ����Ű�� �뵵�� ��� �Ǵ� �������̸� ���̽��� self �� ����ϴ�

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
	SoSimple sim1(100);  // ��ü�� ����
	SoSimple *ptr1 = sim1.GetThisPointer();  // sim1 �� �ּҰ� ���� -> this �� SoSimple �� ������ �̹Ƿ� SoSimple �� ������ ������ �����ؾ��Ѵ�
	
	std::cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple *ptr2 = sim2.GetThisPointer();  // sim2 �� �ּҰ� ���� -> 33 ��� ��������
	std::cout << ptr2 << " ,";
	ptr2->ShowSimpleData();

	return 0;
}