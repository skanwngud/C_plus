#define _CRT_SECURE_NO_WARNINGS

#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <cstring>

class Account
{
private:
	int accID;
	int balance;
	char * cusName;

public:
	Account(int ID, int money, char * name)
		:accID(ID), balance(money)
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}

	int GetAccID();
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo();

	~Account()
	{
		delete[]cusName;
	}
};

#endif // !_ACCOUNT_H_

