// Exercise 4.26: 4_26.cpp
// Analisando um número de 5 dígitos e classificando ele como palíndromo
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 20:34
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int number;
   int d1, d2, d3, d4, d5;

   cout << "Número: ";
   cin >> number;

   d1 = number / 10000;
   d2 = (number % 10000) / 1000;
   d3 = ((number % 10000) % 1000) / 100;
   d4 = (((number % 10000) % 1000) % 100) / 10;
   d5 = (((number % 10000) % 1000) % 100) % 10;

   if (d1 == d5)
   {
      if (d2 == d4)
         cout << number << " é um palíndromo.";
   }
   else
      cout << number << " não é um palíndromo.";

   return 0;
}