/**
�����ڴ� �Լ��� ȣ�� �� �� �� �� ���� ����
Ŭ������ �̸��� ���� �̸��� �Լ��� ����
��ȯ���� ���� ���� ������ ������ ��ȯ���� ����
python �� __init__ �� ����

�����ڵ� �Լ��� �����̴� �����ε��� ����
�Ű������� ����Ʈ ���� ������ �� �ִ�
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
	*/  // �ش� ����Ʈ ���� �Է� �����ϴ�, �ּ��� �����ϰ� �ٷ� ���� �Լ��� ���� �������ϸ� � �Լ��� ȣ���� �� �ָ��ϴٴ� ������ ���

	void ShowData() const
	{
		std::cout << num1 << " " << num2 << std::endl;
	}
};

int main2(void)
{
	SimpleClass sc1;
	// SimpleClass * ptr1 = new SimpleClass;  -> ���� �Ҵ��� ����
	// SimpleClass * ptr1 = new SimpleClass();
	// SimpleClass sc1();  -> �̷��� ���� �Ұ�
	sc1.ShowData();

	SimpleClass sc2(100);
	// SimpleClass * ptr2 = new SimpleClass(100);
	sc2.ShowData();

	SimpleClass sc3(100, 200);
	// SimpleClass * ptr3 = new SimpleClass(100, 200);
	sc3.ShowData();

	return 0;
}