// Exercise 5.14: 5_14.cpp
// Calculando o valor total de produtos vendidos
// Autor: Edgard Mac Fadden
// Data: 13/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   int productNumber; // número do produto
   int salesAmount; // quantidade de vendas
   double cost; // preço do produto
   double totalSales = 0; // valor total de todos os produtos vendidos

   int sentinelValue;

   do 
   {
      cout << "---------------------\n"
         << "| Produto 1 - $2,98 |\n"
         << "| Produto 2 - $4,50 |\n"
         << "| Produto 3 - $9,98 |\n"
         << "| Produto 4 - $4,49 |\n"
         << "| Produto 5 - $6,87 |\n"
         << "---------------------\n"
         << "Número do produto (-1 para sair): ";
      cin >> sentinelValue;

      if (sentinelValue != -1)
      {
         productNumber = sentinelValue;

         do
         {
            cout << "Número de vendas: ";
            cin >> salesAmount;
         } while (salesAmount <= 0);

         switch (productNumber)
         {
            case 1:
               cost = 2.98;
               break;

            case 2:
               cost = 4.50;
               break;
            
            case 3:
               cost = 9.98;
               break;

            case 4:
               cost = 4.49;
               break;

            case 5:
               cost = 6.87;
               break;

            default:
               cout << "Número do produto inválido!" << endl;
               cost = 0;
               break;      
         }

         totalSales += cost * salesAmount;
      }

      cout << endl;
   } while (sentinelValue != -1);

   cout << "Total das vendas: R$" << setprecision(2) << fixed << totalSales
      << endl;
   return 0;
}