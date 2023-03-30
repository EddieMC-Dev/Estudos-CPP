// Figura 6.8: fig06_08.cpp
// Inteiros aleatórios deslocados e escalonados.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;

int main()
{
   // itera 20 vezes
   for (int counter = 1; counter <= 20; counter++)
   {
      // escolhe um número aleatório de 1 a 6 e o envia para saída
      cout << setw(10) << (1 + rand() % 6);

      // se o contador for divisível por 5, inicia uma nova linha de saída
      if (counter % 5 == 0)
         cout << endl;
   } // fim do for

   return 0; // indica terminação bem-sucedida
} // fim de main