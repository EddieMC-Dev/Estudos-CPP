// Exercise 5.18: 5_18.cpp
// Calculando o valor de pi das séries infinitas
// Autor: Edgard Mac Fadden
// Data: 13/03/2023

#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw;
using std::setprecision;

int main()
{
   double pi = 4; // valor de pi a ser calculado
   int denominator = 3; // valor que participa do processo de divisão
   int variator = -1; // variador altera a operação pra adição ou subtração

   cout << "Termo da sequência" << setw(15) << "Valor de PI" << endl;
   cout << setprecision(4) << fixed; 

   for (int counter = 1; counter <= 1000; counter++)
   {  
      cout << setw(9) << counter << setw(22) << pi << endl;
      pi += (variator * 4.0) / denominator;
      variator = (variator == -1 ? 1 : -1);
      denominator += 2;
   }

   return 0;
}