// 길이정보를 인자로 받아서 해당 길이의 문자열 저장이 가능한 배열을 생성
// 그 배열의 주소값을 반환하는 함수

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