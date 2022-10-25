#include <iostream>

class SelfRef
{
private:
	int num;

public:
	SelfRef(int n) : num(n)
	{
		std::cout << "��ü ����" << std::endl;
	}

	SelfRef& Adder(int n)
	{
		num += n;
		return *this;
		// ��ü �ڽ��� ��ȯ�ϰڴٴ� �ǹ��ε� ��ȯ���� ������ SelfRef& �̹Ƿ� ��ü �ڽ��� ������ �� �ִ� ���� ������ ��ȯ
	}

	SelfRef& ShowTwoNumer()
	{
		std::cout << num << std::endl;
		return *this;  // �ڽ��� ������ �� �ִ� �������� ��ȯ
	}
};

int main(void)
{
	SelfRef obj(3);
	SelfRef &ref = obj.Adder(2);

	obj.ShowTwoNumer();
	ref.ShowTwoNumer();

	ref.Adder(1).ShowTwoNumer().Adder(2).ShowTwoNumer();
	return 0;
}