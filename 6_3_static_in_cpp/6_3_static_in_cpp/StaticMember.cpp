// Class ���� static ����
// �������, Ŭ���� ������� �ϸ� �Լ� ������ �����ϸ� ��������ó�� ��� �Ǵ� �Ͱ� �޸� ������ Ŭ������ ��ü �������� �����Ѵ�

#include <iostream>

class SoSimple
{
private:
	static int simObjCnt;  // Ŭ���� ������ static ���� ����, �ش� ������ Ŭ������ ��� ��ü�� �����Ѵ�

public:
	SoSimple()
	{
		simObjCnt++;
		std::cout << simObjCnt << "��° ��ü" << std::endl;
	}
};

int SoSimple::simObjCnt = 0;
// Ŭ���� ������ �Լ����� static ������ �ʱ�ȭ�� ���� �ʴ´�
// static ������ ��ü�鳢�� ���� �����ϱ� ������ ��ü�� ���� ���� ������ �ʱ�ȭ�� �Ǳ� �����̴�
// ���� �̷��� �ۿ��� ���� �ʱ�ȭ�� ����������Ѵ�

class SoComplex
{
private:
	static int cmxObjCnt;

public:
	SoComplex()
	{
		cmxObjCnt++;
		std::cout << cmxObjCnt << "��° ��ü" << std::endl;
	}

	SoComplex(SoComplex &copy)
	{
		cmxObjCnt++;
		std::cout << "��° ��ü" << std::endl;
	}
};

int SoComplex::cmxObjCnt = 0;

int main3(void)
{
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}

// �Ϲ������� ��ü�� ������ ������ ���� �Ҵ� �Ǵ� Ŭ���� ���� ��������� �޸�
// Ŭ���� ������ static ������ �����ϰ� �Ǹ� �޸� ������ �� �ϳ��� �Ҵ��� �ǹǷ� �� Ŭ������ ���� ��ü�� �ϳ��� ������ ��� �����Ѵ�
// Ŭ���� ���� static ������ ������ �Ҹ� ������ ���������� ����ϴ�