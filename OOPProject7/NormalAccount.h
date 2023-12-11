// NormalAccount 클래스의 선언과 정의

#ifndef __NORMAL_ACCOUNT_H__
#define __NORMAL_ACCOUNT_H__

#include "Account.h"

class NormalAccount: public Account
{
    private:
        int interRate;  // 이자율

    public:
        NormalAccount(int ID, int money, char *name, int rate)
            : Account(ID, money, name), interRate(rate)
        {
            // empty
        }

        virtual void Deposit(int money)
        {
            Account::Deposit(money);
            Account::Deposit(money * (interRate / 100.0));
        }
};

#endif