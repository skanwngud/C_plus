// �ӽð�ü

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
	Temporary(100);  // 100 ���� �ʱ�ȭ �� �ӽð�ü ����, ���� ������ �Ѿ�� �ٷ� ����
	cout << "after make!" << endl << endl;

	Temporary(200).ShowTempInfo();
	cout << "after make!" << endl << endl;

	const Temporary &ref = Temporary(300);
	cout << "end of main!" << endl << endl;

	return 0;
}

// �ӽ� ��ü�� ȣ���� ���� �ʿ��� �͵�
// ��ü�� �ٿ��� �̸�, ������, �ּҰ�
// �ӽ� ��ü�� ���� �� ��ġ���� �������� ��ȯ �Ǹ�, ���� ������ �Ѿ �� �ٷ� �������
// �׷��� ������ (&) �� ���� ���� �� ��ü�� �ٷ� �Ҹ� ������ �ʴ´�