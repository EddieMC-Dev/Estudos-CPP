// Exercise 5.10: 5_10.cpp
// Imprimindo uma tabela de fatorial de 1 ao 5
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
   int fatorial; 

   cout << "Integers" << setw(23) << "Fatorial" << endl;

   for (int number = 1; number <= 5; number++)
   {
      fatorial = 1;

      for (int counter = 1; counter <= number; counter++)
         fatorial *= counter;

      cout << setw(8) << number << setw(23) << fatorial << endl;
   }

   return 0;
}