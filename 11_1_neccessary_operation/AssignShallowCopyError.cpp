// 디폴트 대입 연산자의 문제점
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Person
{
private:
	char* name;
	int age;

public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const
	{
		std::cout << "Name: " << name << std::endl;
		std::cout << "Age: " << age << std::endl;
	}

	~Person()
	{
		delete[]name;
		std::cout << "called destructor" << std::endl;
	}
};

int main(void)
{
	Person man1("MAN1 NAME", 29);
	Person man2("MAN2 NAME", 22);
	
	man2 = man1;  // 얕은 복사를 수행하므로 힙메모리에서 man2 의 name 이 해제할 메모리를 참조할 수 없게 되어버렸다.

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}