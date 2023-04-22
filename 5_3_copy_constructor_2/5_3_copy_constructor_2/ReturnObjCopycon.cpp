// �������� �ƴ� ��ü�� ��ȯ

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

	SoSimple2& AddNum(int n)  // ������ ��ȯ
	{
		num += n;
		return *this; // �����ϴ� ��ü �ڽ��� ��ȯ�ϴµ� ��ȯ���� ������
	}

	void ShowData() const
	{
		cout << "num: " << num << endl;
	}
};

SoSimple2 SimpleFuncObj2(SoSimple2 ob)  // return ���� SoSimple ��ü�� �ϴ� �Լ�
{
	cout << "return ����" << endl;
	return ob;  // ��ü�� ��ȯ�ϴµ� ��ȯ���� �������� �ƴ� (�ӽ� ��ü ����)
}

int main2(void)
{
	SoSimple2 obj(7);
	SimpleFuncObj2(obj).AddNum(30).ShowData();  // �ӽð�ü�� ���� �Ǹ鼭 AddNum �Լ��� ȣ��� �ӽð�ü�� �� ���� -> �ӽ� ��ü�� ���
	obj.ShowData();  // ��������ڷ� ���� �� ��ü�̹Ƿ� ���� �ӽ� ��ü�ʹ� �ٸ� ���� ����

	return 0;
}