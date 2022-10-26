#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Account.h"


void Account::ShowMenu(void) const
{
	std::cout << "-----Menu-----" << std::endl;
	std::cout << "1. Make Account" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Show All Account Info" << std::endl;
	std::cout << "5. Exit" << std::endl;
}

void Account::MakeAccount(void)
{
	char *name;

	std::cout << "[Make Account]" << std::endl;
	std::cout << "Account ID: ";
	std::cin >> accID;
	std::cout << "Name: ";
	std::cin >> cusName;
	std::cout << "Amount Money: ";
	std::cin >> balance;

	/*nameLEN = strlen(name) + 1;
	cusName = new char[nameLEN];
	strcpy(cusName, name);
*/
	accNum++;
}

//void Account::DepositMoney(void)
//{
//	int id;
//	int money;
//
//	std::cout << "[Deposit]" << std::endl;
//	std::cout << "Account ID";
//	std::cin >> id;
//	
//	for (int i = 0; i < accNum; i++)
//	{
//		if (accID == id)
//		{
//
//		}
//	}
//}