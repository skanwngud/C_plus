// AccountHandler 의 정의

#include "BankingCommonDecl.h"
#include "AccountHandler.h"
#include "Account.h"
#include "NormalAccount.h"
#include "HighCreditAccount.h"

void AccountHandler::ShowMenu(void) const
{
    std::cout << "---Menu---" << std::endl;
    std::cout << "1. Create Account" << std::endl;
    std::cout << "2. Deposit" << std::endl;
    std::cout << "3. Withdraw" << std::endl;
    std::cout << "4. Show Entire Account Information" << std::endl;
    std::cout << "5. EXIT" << std::endl;
}

void AccountHandler::MakeAccount(void)
{
    int sel;
    std::cout << "[Select Account]" << std::endl;
    std::cout << "1. Normal Account" << std::endl;
    std::cout << "2. Credit Account" << std::endl;
    std::cout << "Select: " << std::endl;
    std::cin >> sel;

    if(sel == NORMAL)
    {
        MakeNormalAccount();
    }

    else
    {
        MakeCreditAccount();
    }
}

void AccountHandler::MakeNormalAccount(void)
{
    int id;
    char name[NAME_LEN];
    int balance;
    int interRate;

    std::cout << "[Create Normal Account]" << std::endl;
    std::cout << "Account Name: ";
    std::cin >> id;
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Deposit: ";
    std::cin >> balance;
    std::cout << "Rate: ";
    std::cin >> interRate;
    std::cout << std::endl;
    accArr[accNum++] = new NormalAccount(id, balance, name, interRate);
}

void AccountHandler::MakeCreditAccount(void)
{
    int id;
    char name[NAME_LEN];
    int balance;
    int interRate;
    int creditLevel;

    std::cout << "[Create Credit Account]" << std::endl;
    std::cout << "Account Name: ";
    std::cin >> id;
    std::cout << "Name: ";
    std::cin >> name;
    std::cout << "Deposit: ";
    std::cin >> balance;
    std::cout << "Rate: ";
    std::cin >> interRate;
    std::cout << "Credit Level(1toA, 2toB, 3toC): ";
    std::cin >> creditLevel;
    std::cout << std::endl;

    switch (creditLevel)
    {
    case 1:
        accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_A);
        break;
    case 2:
        accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_B);
        break;
    case 3:
        accArr[accNum++] = new HighCreditAccount(id, balance, name, interRate, LEVEL_C);
        break;
    }
}

void AccountHandler::DepositMoney(void)
{
    int money;
    int id;
    std::cout << "[Deposit]" << std::endl;
    std::cout << "Account Name: ";
    std::cin >> id;
    std::cout << "Deposit: ";
    std::cin >> money;

    for (int i = 0; i < accNum; i++)
    {
        if (accArr[i]->GetAccID()==id)
        {
            accArr[i]->Deposit(money);
            std::cout << "Deposit Complete" << std::endl;
            return;
        }
    }

    std::cout << "The ID is Not Impleted" << std::endl;
}

void AccountHandler::WithdrawMoney(void)
{
    int money;
    int id;
    std::cout << "[Withdraw]" << std::endl;
}