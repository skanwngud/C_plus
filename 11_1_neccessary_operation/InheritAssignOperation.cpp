// ���� �����ڴ� �����ڰ� �ƴϴ�.
// ���� Ŭ������ ���� �����ڿ����� �ƹ��� ��ø� ���� ������ ���� Ŭ������ ���� �����ڰ� ȣ�� ���� �ʴ´�.

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
	Second ssrc(111, 222, 333, 444);  // �θ� Ŭ������ ���Կ����ڸ� �ҷ���
	Second scpy(0, 0, 0, 0);  // �θ� Ŭ������ ���Կ����ڸ� �ҷ������ʰ� �ڽ� Ŭ������ ���Կ����ڸ� �ҷ���

	scpy = ssrc;
	scpy.ShowData();

	return 0;
}