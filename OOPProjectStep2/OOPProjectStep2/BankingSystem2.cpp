#include <iostream>
#include "Account.h"

int main(void)
{
	Account *ptrArr = new Account[100]; // ��ü �迭 100�� ����

	for (int i = 0; i < 100; i++)
	{
		ptrArr[i].MakeAccount();
	}

	return 0;
}