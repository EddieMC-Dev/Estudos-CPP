// Funções-membro pra classe Account
#include "iostream"
using std::cout;

#include "Account.h"

Account::Account(int balance)
{   
    if (balance >= 0)
        accountBalance = balance;

    if (balance < 0)
    {
        cout << "Invalid balance!";
        accountBalance = 0; 
    }
}

void Account::credit(int balanceAdded)
{
    accountBalance = accountBalance + balanceAdded;
}

void Account::debit(int balanceRemoved)
{   
    if (balanceRemoved <= accountBalance)
        accountBalance = accountBalance - balanceRemoved;
    
    if (balanceRemoved > accountBalance)
        cout << "Debit amount exceeded account balance.";
}

int Account::getBalance()
{
    return accountBalance;
}