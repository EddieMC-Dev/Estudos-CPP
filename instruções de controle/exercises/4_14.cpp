// Exercise 4.1: 4_1.cpp
// Determinando se clientes ultrapassaram o limite de crédito em uma conta corrente
// Autor: Edgard Mac Fadden
// Data: 08/03/2023 --> 22:15 
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   int accountNumber;      // número da conta
   double openingBalance;  // saldo inicial
   double totalFees;       // taxas totais 
   double totalCredits;    // total de créditos
   double creditLimit;     // Limite de crédito
   double newBalance;      // Novo saldo

   cout << "Entre com o número da conta (-1 para terminar): ";
   cin >> accountNumber;

   while (accountNumber != -1)
   {
      cout << "Entre com o saldo inicial: ";
      cin >> openingBalance;
      cout << "Entre com o total de taxas: ";
      cin >> totalFees;
      cout << "Entre com o total de créditos: ";
      cin >> totalCredits;
      cout << "Entre com o limite de crédito: ";
      cin >> creditLimit;
      
      newBalance = openingBalance + totalFees - totalCredits;
      cout << "Novo saldo: " << setprecision(2) << fixed << newBalance << endl;

      if (newBalance > creditLimit)
         cout << "Conta:             " << accountNumber << endl
            << "Limite de crédito: " << setprecision(2) << fixed << creditLimit << endl
            << "Saldo:             " << setprecision(2) << fixed << newBalance << endl
            << "Limite de crédito ultrapassado." << endl;

      cout << "\nEntre com o número da conta (-1 para terminar): ";
      cin >> accountNumber;
   }

   return 0;
}