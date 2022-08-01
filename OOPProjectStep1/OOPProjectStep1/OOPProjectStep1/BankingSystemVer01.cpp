#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

void ShowMenu(void);
void MakeAccount(void);
void DepositMoney(void);
void WithdrawMoney(void);
void ShowAllAccInfo(void);

enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
	int accID;
	int balance;
	char cusName[NAME_LEN];
} Account;

Account accArr[100];
int accNum = 0;

int main(void)
{
	int choice;

	while (1)
	{
		ShowMenu();
		cout << "choice: ";
		cin >> choice;
		cout << endl;

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
			return 0;
		default:
			cout << "Illegal selection.." << endl;
		}

	}
	return 0;
}

void ShowMenu(void)
{
	cout << "-----Menu-----" << endl;
	cout << "1. Make Account" << endl;
	cout << "2. Deposit" << endl;
	cout << "3. Withdraw" << endl;
	cout << "4. Show All Account Info" << endl;
	cout << "5. Exit" << endl;
}

void MakeAccount(void)
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[Make Account]" << endl;
	cout << "Account ID: "; cin >> id;
	cout << "Name: "; cin >> name;
	cout << "Amount Money: "; cin >> balance;
	cout << endl;

	accArr[accNum].accID = id;
	accArr[accNum].balance = balance;
	strcpy(accArr[accNum].cusName, name);
	accNum++;
}

void DepositMoney(void)
{
	int money;
	int id;

	cout << "[Deposit]" << endl;
	cout << "Account ID: "; cin >> id;
	cout << "Amount Deposit Money: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			accArr[i].balance += money;
			cout << "Deposit completed" << endl;
			return;
		}
	}
	cout << "Please, check Account ID again." << endl << endl;
}

void WithdrawMoney(void)
{
	int money;
	int id;
	cout << "[Withdraw]" << endl;
	cout << "Account ID: "; cin >> id;
	cout << "Amount Money: "; cin >> money;

	for (int i = 0; i < accNum; i++)
	{
		if (accArr[i].accID == id)
		{
			if (accArr[i].balance < money)
			{
				cout << "You're account money has less than input money." << endl;
				return;
			}

			accArr[i].balance -= money;
			cout << "Withdraw completed." << endl;
			return;
		}
	}
	cout << "Please, check Account ID again." << endl << endl;
}

void ShowAllAccInfo(void)
{
	for (int i = 0; i < accNum; i++)
	{
		cout << "Account ID: " << accArr[i].accID << endl;
		cout << "Name: " << accArr[i].cusName << endl;
		cout << "Balance: " << accArr[i].balance << endl;
	}
}