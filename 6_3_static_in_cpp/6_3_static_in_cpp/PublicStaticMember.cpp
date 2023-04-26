// static ������ private ���� �����ϸ� Ŭ������ ��ü�鸸 ���� ����������
// public ���� �����ϸ� Ŭ������ �̸��̳� ��ü�� ���� ��𼭵� ���� �����ϴ�

#include <iostream>

class SoSimple
{
public:
	static int simObjCnt;  // publc ���� static ���� ����

public:  // ���ʿ������� ������ �Լ��� ������ �������� ����ϱ⵵ ��
	SoSimple()
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;  // Ŭ���� �ۿ��� static ���� �ʱ�ȭ

int main4(void)
{
	std::cout << SoSimple::simObjCnt << "��° ��ü" << std::endl;  // SoSimple ��ü�� �������� �ʾ����� Ŭ���� �̸��� ���� ����, Ŭ���� ���ο� static ������ ���ٴ� ���

	SoSimple sim1;  // ��ü ����
	SoSimple sim2;  // ��ü ����

	std::cout << SoSimple::simObjCnt << "��° ��ü" << std::endl;  // ��ü�� �ƴ� Ŭ���� �̸����� ����
	std::cout << sim1.simObjCnt << "��° ��ü" << std::endl;  // ��ü �̸����� ���������� �̷� ���ٹ���� �Ϲ����� ��������� ���ٰ� ������ ����Ű�� ������ ��õ���� �ʴ´�
	std::cout << sim2.simObjCnt << "��° ��ü" << std::endl;

	return 0;
}

// �߰��� static ����Լ��� static ��� ������ ����
// static ��� �Լ� �������� static ��� ������ static ��� �Լ��� ȣ�� ����