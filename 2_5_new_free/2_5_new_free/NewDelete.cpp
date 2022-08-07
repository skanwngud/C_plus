// C 언어에서의 malloc 와 free 는 CPP 에서는 new 와 delete 로 대체 된다.

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>

using namespace std;

char* MakeStrAdr(int len)
{
	char *str = new char[len];

	return str;
}

int main_(void)
{
	char* str = MakeStrAdr(20);
	strcpy(str, "I am So Happy~");
	cout << str << endl;
	delete[]str;

	return 0;
}