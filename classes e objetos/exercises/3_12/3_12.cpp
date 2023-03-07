// Exercise 3.12: 3_12.cpp
// Simulando uma conta bancária e testando a classe Account
// Autor: Edgard Mac Fadden
// Data: 05/03/2023 --> 17:17
#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main()
{   
    Account myAccount(100); // Criando uma conta com saldo de R$100
    cout << "Account Balance: " << myAccount.getBalance() << endl << endl;

    myAccount.credit(50); // Adicionando R$50 ao saldo
    cout << "Account Balance after credit: " << myAccount.getBalance()
        << endl << endl;

    myAccount.debit(50); // Tirando R$50 do saldo
    cout << "Account Balance after debit: " << myAccount.getBalance()
        << endl << endl;

    myAccount.debit(200); // Tirando dinheiro além do limite do saldo
    cout << "\nAccount Balance after debit exceeds balance limit: "
        << myAccount.getBalance() << endl;

    return 0;
}