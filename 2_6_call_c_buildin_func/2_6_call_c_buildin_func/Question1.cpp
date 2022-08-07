#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;

int main___(void)
{
	char str1[] = "Hello world";
	char str2[30];

	strcpy(str2, str1);
	strcat(str2, "!");
	
	cout << "strcpy: " << str1 << " " << str2 << endl;
	cout << "strcat: " << str2 << endl;
	cout << "strlen: " << strlen(str1) << endl;
	cout << "strcmp: " << strcmp(str1, str2) << endl;

	return 0;
}