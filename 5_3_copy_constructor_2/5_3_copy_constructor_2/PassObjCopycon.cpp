// ��ü�� �ʱ�ȭ �� �� �̹� ���� �� ��ü�� �ʱ�ȭ

#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;

public:
	SoSimple(int n) : num(n)  // ������ �Լ�
	{
		// empty
		cout << "memory address: " << &num << endl;
	}

	SoSimple(const SoSimple& copy) : num(copy.num)  // ���� ������
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
		cout << "Copied memory address: " << &num << endl;
	}

	void ShowDate() const  // �ܼ� ���� ���
	{
		cout << "num: " << num << endl;
		cout << "Show date memory address: " << &num << endl;
	}
};

void SimpleFuncObj(SoSimple ob)  // ��ü�� �Ű������� �޴´�
{
	ob.ShowDate();  // ���� �� �Ű������� ���� ���
}

int main1(void)
{
	SoSimple obj(7);  // ��ü ����
	cout << "�Լ� ȣ�� ��" << endl;
	SimpleFuncObj(obj);  // ������ ���� �� ��ü�� ����� �Բ� ��ü ����
	cout << "�Լ� ȣ�� ��" << endl;
	
	return 0;
}