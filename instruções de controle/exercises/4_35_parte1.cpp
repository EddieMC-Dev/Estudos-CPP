// Exercise 4.35: 4_35_parte1.cpp
// Calculando fatorial de um número inteiro não negativo
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 16:51
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int number = -1; 
   int fatorial = 1;
   int counter = 1;

   while (number < 0)
   {
      cout << "Deseja o fatorial de qual número? (evite números negativos) ";
      cin >> number;
   }

   if (number == 0)
      fatorial = 1;

   while (counter <= number)
   {
      fatorial *= counter;
      counter++;
   }

   cout << "Fatorial: " << fatorial << endl;

   return 0;
}