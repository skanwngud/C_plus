// Account 클래스의 정의

#include "BankingCommonDecl.h"
#include "Account.h"

Account::Account(int ID, int money, char *name)
    :accID(ID), balance(money)
{
    cusName = new char[strlen(name) + 1];
    strcpy(cusName, name);
}

Account::Account(const Account &ref)
    :accID(ref.accID), balance(ref.balance)
{
    cusName = new char[strlen(ref.cusName) + 1];
    strcpy(cusName, ref.cusName);
}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
    balance += money;
}

int Account::Withdraw(int money)
{
    if(balance < money)
    {
        return 0;
    }

    balance -= money;
    return money;
}

void Account::ShowAccInfo() const
{
    std::cout << "Account ID: " << accID << std::endl;
    std::cout << "Name: " << cusName << std::endl;
    std::cout << "Balance: " << balance << std::endl;
}

Account::~Account()
{
    delete[] cusName;
}