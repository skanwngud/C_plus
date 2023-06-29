// ������ �����ڿ� �Ҹ��ڸ� �����ϰ� �̸� Ȯ���ϱ� ���� main �Լ� ����

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class MyFriendInfo
{
private:
	char * name;
	int age;

public:
	MyFriendInfo(const char * myname, int myage)
		: age(myage)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	void ShowFriendInfo()
	{
		std::cout << "�̸�: " << name << std::endl;
		std::cout << "����: " << age << std::endl;
	}

	~MyFriendInfo()
	{
		delete[]name;
	}
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
	char * addr;
	char * phone;

public:
	MyFriendDetailInfo(const char * myname, int myage, const char * myaddr, const char * myphone)
		: MyFriendInfo(myname, myage)
	{
		addr = new char[strlen(myaddr) + 1];
		phone = new char[strlen(myphone) + 1];

		strcpy(addr, myaddr);
		strcpy(phone, myphone);
	}

	void ShowMyFriendDetailInfo()
	{
		ShowFriendInfo();
		std::cout << "�ּ�: " << addr << std::endl;
		std::cout << "��ȭ: " << phone << std::endl;
	}

	~MyFriendDetailInfo()
	{
		delete[]addr;
		delete[]phone;
	}
};

int main(void)
{
	MyFriendDetailInfo myfriend("HongJo", 32, "Seoul", "010-1234-5678");
	myfriend.ShowMyFriendDetailInfo();

	return 0;
}