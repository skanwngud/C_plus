// 상속한 클래스는 상속 된 클래스의 초기화를 해야하므로 상속 된 클래스의 초기화를 담당 할 생성자를 만든다
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

class Person
{
private:
	int age;
	char name[50];

public:
	Person(int myage, const char* myname) : age(myage)
	{
		strcpy(name, myname);
	}

	void WhatYourName() const
	{
		cout << "My name is " << name << endl;
	}

	void HowOldAreYou() const
	{
		cout << "I'm " << age << " years old." << endl;
	}
};

class UnivStudent : public Person // Person 이란 클래스를 UnivStudent 가 상속
{
private:
	char major[50];

public:
	UnivStudent(const char *myname, int myage, const char *mymajor)  // 상속 된 클래스 초기화를 위한 생정자
		: Person(myage, myname)  // 상속 된 클래스 초기화
	{
		strcpy(major, mymajor);
	}

	void WhoAreYou() const
	{
		WhatYourName();
		HowOldAreYou();
		cout << "My major is " << major << endl;
	}
};

int main1(void)
{
	UnivStudent ustd1("Lee", 22, "Computer eng.");
	ustd1.WhoAreYou();

	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
	ustd2.WhoAreYou();

	return 0;
}

// private 으로 선언 된 변수는 상속이 된다한들 외부에서 접근 불가능
// 해당 예제에서는 UnivStudent 의 클래스에서 Person 의 private 에 접근 불가

// Person -> UnivStudent
// 상위 -> 하위
// 기초(base) -> 유도 (derived)
// 슈퍼(super) -> 서브 (sub)
// 부모 -> 자식