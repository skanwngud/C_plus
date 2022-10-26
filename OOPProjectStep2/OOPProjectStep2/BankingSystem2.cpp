#include <iostream>
#include "Account.h"

int main(void)
{
	Account *ptrArr = new Account[100]; // 객체 배열 100개 생성

	for (int i = 0; i < 100; i++)
	{
		ptrArr[i].MakeAccount();
	}

	return 0;
}