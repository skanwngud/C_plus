// 디폴트 대입 연산자의 해결
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

	Person& operator=(const Person& ref)
	{
		delete[]name;  // 메모리 누수를 막기 위해 선언 되었던 기존 name 의 메모리를 해제시킨다.
		int len = strlen(ref.name) + 1;
		name = new char[len];
		strcpy(name, ref.name);
		age = ref.age;
		
		return *this;
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

	man2 = man1;

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}