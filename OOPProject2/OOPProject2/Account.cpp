#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include "Account.h"

int Account::GetAccID() { return accID; }

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo()
{
	std::cout << "Account ID: " << accID << std::endl;
	std::cout << "Name: " << cusName << std::endl;
	std::cout << "Balance: " << balance << std::endl;
}
