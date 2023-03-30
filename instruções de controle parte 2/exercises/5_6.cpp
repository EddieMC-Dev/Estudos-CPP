// Exercise 5.6: 5_6.cpp
// Calculando a média de vários números inteiros
// Autor: Edgard Mac Fadden 
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   double average; // média a ser calculada
   int sum = 0; // soma total dos números
   int number; // número a ser digitado
   int counter; // contador dos números inseridos

   for (counter = 0; true; counter++)
   {
      cout << "Insira um valor inteiro: ";
      cin >> number;

      if (number == 9999)
         break;

      sum += number;
      cout << counter << endl;
   }

   average = static_cast<double>(sum) / counter;
   cout << "Média: " << setprecision(2) << fixed << average << endl;
   return 0;
}