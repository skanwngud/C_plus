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
		std::cout << "요청 내용을 계산합니다." << std::endl;
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
			std::cout << "충전이 필요합니다." << std::endl;
			return;
		}

		std::cout << "이동하면서 ";
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
	TabletNoteBook(const char * name, int initChag, const char * pen)  // NoteBookComp 와 Computer 의 생성자 둘 다 생성
		: NoteBookComp(name, initChag)
	{
		strcpy(regstrPenModel, pen);
	}

	void Write(const char * penInfo)
	{
		if (GetBatteryInfo() < 1)
		{
			std::cout << "충전이 필요합니다." << std::endl;
			return;
		}

		if (strcmp(regstrPenModel, penInfo) != 0)
		{
			std::cout << "등록 된 펜이 아닙니다." << std::endl;
			return;
		}

		std::cout << "필기 내용을 처리합니다." << std::endl;
		UseBattery();
	}
};

int main1(void)
{
	NoteBookComp nc("가나다", 5);
	TabletNoteBook tn("다라마", 5, "ISE-241-242");

	nc.MovingCal();
	tn.Write("ISE-241-242");

	return 0;
}

// TabletNoteBook is NoteBookComp
// NoteBookComp is Computer 
// Also, TabletNoteBook is Computer 라는 관계 성립