// 객체 포인터 배열
// 객체의 주소값이 저장이 가능한 포인터 변수로 이뤄진 배열

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

class Person
{
private:
	char * name;
	int age;

public:
	Person(char * myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);

		age = myage;
	}

	Person()
	{
		name = NULL;
		age = 0;

		std::cout << "called Person()" << std::endl;
	}

	void SetPersonInfo(char * myname, int myage)
	{
		name = myname;
		age = myage;
	}

	void ShowPersonInfo() const
	{
		std::cout << "이름: " << name << ", ";
		std::cout << "나이: " << age << std::endl;
	}

	~Person()
	{
		delete[]name;
		std::cout << "called destructor!" << std::endl;
	}
};

int main(void)
{
	Person *parr[3]; // 포인터 배열
	char namestr[100];
	int age;

	for (int i = 0; i < 3; i++)
	{
		std::cout << "name: " ;
		std::cin >> namestr;
		std::cout << "age: ";
		std::cin >> age;
		parr[i] = new Person(namestr, age); // 3번에 걸쳐 new 연산을 진행
	}

	parr[0]->ShowPersonInfo();
	parr[1]->ShowPersonInfo();
	parr[2]->ShowPersonInfo();

	delete parr[0];  // 3 번에 걸쳐 진행한 new 연산을 delete
	delete parr[1];
	delete parr[2];

	return 0;
}