// 적절한 생성자와 소멸자를 정의하고 이를 확인하기 위한 main 함수 정의

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
		std::cout << "이름: " << name << std::endl;
		std::cout << "나이: " << age << std::endl;
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
		std::cout << "주소: " << addr << std::endl;
		std::cout << "전화: " << phone << std::endl;
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