// C ������ malloc �� free �� CPP ������ new �� delete �� ��ü �ȴ�.

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