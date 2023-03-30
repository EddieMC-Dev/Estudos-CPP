// Figura 5.13: fig05_13.cpp
// a instrução break sai de uma instrução for.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int count; // variável de controle também utilizada depois que loop termina
   int number;

   for (count = 1; count <= 10; count++) // itera 10 vezes
   {
      if (count == 5)
      {
         number = count;
         count = 11;
      }
      else
         cout << count << " ";
   } // fim do for

   cout << "\nBroke out of loop at count = " << number << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main