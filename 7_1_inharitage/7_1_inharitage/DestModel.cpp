#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char * name;

public:
	Person(const char * myname)
	{
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}

	~Person()
	{
		delete[]name;
	}

	void WhatYourNmae() const
	{
		cout << "My Name is " << name << endl;
	}
};

class UnivStudent : public Person
{
private:
	char * major;

public:
	UnivStudent(const char * myname, const char * mymajor)
		: Person(myname)
	{
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}

	~UnivStudent()
	{
		delete[]major;
	}

	void WhoAreYou() const
	{
		WhatYourNmae();
		cout << "My major is " << major << endl;
	}
};

int main(void)
{
	UnivStudent st1("Kim", "Mathmatics");
	st1.WhoAreYou();

	UnivStudent st2("Hong", "Physics");
	st2.WhoAreYou();

	return 0;
}