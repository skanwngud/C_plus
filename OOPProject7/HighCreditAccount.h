// HighCreditAccount 클래스의 선언과 정의

#ifndef __HIGH_CREDIT_ACCOUNT_H__
#define __HIGH_CREDIT_ACCOUNT_H__

#include "NormalAccount.h"

class HighCreditAccount : public NormalAccount
{
    private:
        int specialRate;

    public:
    HighCreditAccount(int ID, int money, char *name, int rate, int special)
        : NormalAccount(ID, money, name, rate), specialRate(special)
    {
        // empty
    }

    virtual void Deposit(int money)
    {
        NormalAccount::Deposit(money);  // 원금 이자
        Account::Deposit(money * (specialRate / 100.0));  // 특별 이자
    }
};

#endif