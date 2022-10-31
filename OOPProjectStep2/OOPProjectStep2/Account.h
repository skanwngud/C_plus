#ifndef __ACCOUNT_H
#define __ACCOUNT_H_

class Account
{
private:
	int accID;
	int balance;
	int nameLEN;
	int accNum;  // num of account
	char * cusName;

public:
	Account() {};

	void ShowMenu(void) const;
	void MakeAccount(void);
	void DepositMoney(void);
	void WithdrawMoney(void);
	void ShowAllAccInfo(void) const;
};

#endif __ACCOUNT_H_