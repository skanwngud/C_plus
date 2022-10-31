#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Account.h"

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum { MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT };

Account * accArr[100];
const int NAME_LEN = 20;
int accNum = 0;

int main(void)
{
	int choice;
	
	while (1)
	{
		ShowMenu();
		std::cout << "Choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		switch (choice)
		{
		case MAKE:
			MakeAccount();
			break;
		case DEPOSIT:
			DepositMoney();
			break;
		case WITHDRAW:
			WithdrawMoney();
			break;
		case INQUIRE:
			ShowAllAccInfo();
			break;
		case EXIT:
			for (int i = 0; i < accNum; i++)
				delete accArr[i];
			return 0;
		default:
			std::cout << "Illegal Selection." << std::endl;
		}
	}
}

void ShowMenu(void)
{
	std::cout << "-----Menu-----" << std::endl;
	std::cout << "1. Make Account" << std::endl;
	std::cout << "2. Deposit" << std::endl;
	std::cout << "3. Withdraw" << std::endl;
	std::cout << "4. Show Account Info" << std::endl;
	std::cout << "5. Exit Program" << std::endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	std::cout << "[Make Account]" << std::endl;
	std::cout << "Account ID: "; std::cin >> id;
	std::cout << "Name: "; std::cin >> name;
	std::cout << "Init Deposit Money: "; std::cin >> balance;
	std::cout << std::endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void DepositMoney(void)
{
	int money;
	int id;

	std::cout << "[Deposit]" << std::endl;
	std::cout << "Account ID: "; std::cin >> id;
	std::cout << "Deposit Money: "; std::cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			std::cout << "Deposit Complete" << std::endl;
			return;
		}
	}

	std::cout << "Not Available ID" << std::endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;

	std::cout << "[Withdraw]" << std::endl;
	std::cout << "Account ID: "; std::cin >> id;
	std::cout << "Withdraw Money: "; std::cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i]->GetAccID() == id)
		{
			if (accArr[i]->Withdraw(money) == 0)
			{
				std::cout << "Balance Error" << std::endl;
				return;
			}

			std::cout << "Withdraw Complete" << std::endl;
			return;
		}
	}

	std::cout << "Not Available ID" << std::endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		std::cout << std::endl;
	}
}