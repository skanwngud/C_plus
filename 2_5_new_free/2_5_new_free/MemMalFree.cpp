// ���������� ���ڷ� �޾Ƽ� �ش� ������ ���ڿ� ������ ������ �迭�� ����
// �� �迭�� �ּҰ��� ��ȯ�ϴ� �Լ�

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char* MakeStrAdr__(int len)
{
	char *str = (char *)malloc(sizeof(char)*len);
	return str;
}

int main__(void)
{
	char * str = MakeStrAdr__(20);
	strcpy(str, "I am So Happy");
	cout << str << endl;
	free(str);
	
	return 0;
}