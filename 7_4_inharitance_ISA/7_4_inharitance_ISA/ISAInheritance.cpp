#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Computer
{
private:
	char owner[50];

public:
	Computer(const char * name)
	{
		strcpy(owner, name);
	}

	void Calculate()
	{
		std::cout << "��û ������ ����մϴ�." << std::endl;
	}
};

class NoteBookComp : Computer
{
private:
	int Battery;

public:
	NoteBookComp(const char * name, int initChag)
		: Computer(name), Battery(initChag)
	{
		// empty
	}

	void Charging() { Battery += 5; }
	void UseBattery() { Battery -= 1; }
	void MovingCal()
	{
		if (GetBatteryInfo() < 1)
		{
			std::cout << "������ �ʿ��մϴ�." << std::endl;
			return;
		}

		std::cout << "�̵��ϸ鼭 ";
		Calculate();
		UseBattery();
	}

	int GetBatteryInfo() { return Battery; }
};

class TabletNoteBook : public NoteBookComp
{
private:
	char regstrPenModel[50];

public:
	TabletNoteBook(const char * name, int initChag, const char * pen)  // NoteBookComp �� Computer �� ������ �� �� ����
		: NoteBookComp(name, initChag)
	{
		strcpy(regstrPenModel, pen);
	}

	void Write(const char * penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			std::cout << "������ �ʿ��մϴ�." << std::endl;
			return;
		}

		if (strcmp(regstrPenModel, penInfo) != 0)
		{
			std::cout << "��� �� ���� �ƴմϴ�." << std::endl;
			return;
		}

		std::cout << "�ʱ� ������ ó���մϴ�." << std::endl;
		UseBattery();
	}
};

int main1(void)
{
	NoteBookComp nc("������", 5);
	TabletNoteBook tn("�ٶ�", 5, "ISE-241-242");

	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}

// TabletNoteBook is NoteBookComp
// NoteBookComp is Computer 
// Also, TabletNoteBook is Computer ��� ���� ����