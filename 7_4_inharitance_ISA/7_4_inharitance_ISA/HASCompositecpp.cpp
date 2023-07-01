#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Gun
{
private:
	int bullet;

public:
	Gun(int bnum)
		: bullet(bnum)
	{
		// empty
	}

	void Shot()
	{
		std::cout << "BBANG!" << std::endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs;
	Gun * pistol;  // Ŭ���� ������, ����� �ƴ϶� ��ü�� �����ؼ� ����

public:
	Police(int bnum, int bcuff)
		:handcuffs(bcuff)
	{
		if (bnum > 0)  // bnum �� 1 �̻��̸� �ѿ� ����
			pistol = new Gun(bnum);

		else  // 0 �̸� �ѿ� �ƹ��͵� �������� ����
			pistol = NULL;
	}

	void PutHandcuff()
	{
		std::cout << "SNAP!" << std::endl;
		handcuffs--;
	}

	void Shot()  // Gun Ŭ������ ����Ѵٸ� �ʿ������ ��ü�� ����� �����ϱ� ������ �ʿ�
	{
		if (pistol == NULL)
			std::cout << "Hut BBANG" << std::endl;

		else
			pistol->Shot();  // ��ü�� ���� �� Gun Ŭ������ �Լ� ȣ��
	}

	~Police()
	{
		if (pistol == NULL)
			delete pistol;
	}
};

int main(void)
{
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3);
	pman2.Shot();
	pman2.PutHandcuff();

	return 0;
}

// HAS-A ����� ���� �������� ���� ������ ǥ���ϱ� ����쳪 Composite �� NULL �� �ʱ�ȭ�� ������ �ذ�.
// ������� ���� ���� HAS ���迡���� Ŭ������ Ȯ���ϴ� �͵� ���� �ʴ�.