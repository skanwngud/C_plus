/**
����, ȸ���̸�, ��ȭ��ȣ, ������ ����ִ� NameClass ����

���� ������ ������ �������� ���ڿ��� ���·� ����, ���̿� �� �´� �޸� ������ �Ҵ� �޴� ���·� ����
(���� �Ҵ�)
���� ������ int �� ��������� �����ϰ� �Ʒ��� enum ������ Ȱ��
enum {CLERK, SENIOR, ASSIST, MANAGER};
���, ����, �븮, ����
**/

#include <iostream>
#include "NameCard.h"

struct COMP_POS
{
	enum
	{
		CLERK = 1, SENIOR = 2, ASSIST = 3, MANAGER = 4
	};
};

int main(void)
{
	NameCard manClerk("Lee", "ABCEng", "010-1111-1111", COMP_POS::CLERK);
	NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
	NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
	
	manClerk.ShowNameCardInfo();
	manSENIOR.ShowNameCardInfo();
	manAssist.ShowNameCardInfo();

	return 0;
}