// ���� ������ �ʿ��� ��Ȳ

#include <iostream>

int simObjCnt = 0;  // ���� ���� �ʱ�ȭ
int cmxObjCnt = 0;

class SoSimple  // �Լ� ����
{
public:
	SoSimple()  // ������
	{
	simObjCnt++;  // ���� ���� ����
	std::cout << simObjCnt << "��° SoSimple ��ü" << std::endl;
	}
};

class SoComplex
{
public:
	SoComplex()  // ������
	{
		cmxObjCnt++;  // ���� ���� ����
		std::cout << cmxObjCnt << "��° SoComplex ��ü" << std::endl;
	}

	SoComplex(SoComplex &copy)  // ���� ������
	{
		cmxObjCnt++; // ���� ���� ����
		std::cout << cmxObjCnt << "��° Socomplex ��ü" << std::endl;
	}
};

int main2(void)
{
	SoSimple sim1;  // Simple ��ü �����ϸ鼭 simObjCnt++ ���� ���� -> 1
	SoSimple sim2;  // ���� �����ϹǷ� -> 2

	SoComplex com1;  // Complex ��ü �����ϸ鼭 cmxObjCnt++ ���� ���� -> 1
	SoComplex com2 = com1;  // ���� �����ڷ� -> 2
	SoComplex();  // �Լ� ȣ��� -> 3

	return 0;
}

// �� �ڵ�� ��ü���� ���� �����ϴ� ���� �������� �����Ѵ�
// ������������ ������ �ɸ��� �ƹ��� ��ġ�� �����Ƿ� �ڵ尡 ���ݸ� ���������鼭 �����ϰ� �Ǹ� ��ġ ���� ����� ���� �� �ִ�
// simObjCnt �� SoSimple �� static ������, cmxObjCnt �� SoComplex �� static ������ �����ϸ� ������ ���� �� �ִ�