// Exercise 4.16: 4_16.cpp
// Calculando o salário de vários vendedores
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 13:12
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   double sales;
   double salary;

   cout << "Entre com as vendas em dolar (-1 para terminar): ";
   cin >> sales;

   while (sales != -1)
   {
      salary = 200 + sales * 0.09;
      cout << "Salário: $" << setprecision(2) << fixed << salary << endl;

      cout << "\nEntre com as vendas em dolar (-1 para terminar): ";
      cin >> sales;
   }

   return 0;
}