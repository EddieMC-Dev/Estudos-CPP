// Figura 6.9: fig06_09.cpp
// Lança um dado de seis lados 6.000.000 vezes.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib> // contém o protótipo de função para rand
using std::rand;

int main()
{
   int frequency1 = 0; // contagem de 1s lançados
   int frequency2 = 0; // contagem de 2s lançados
   int frequency3 = 0; // contagem de 3s lançados
   int frequency4 = 0; // contagem de 4s lançados
   int frequency5 = 0; // contagem de 5s lançados
   int frequency6 = 0; // contagem de 6s lançados

   int face; // armazena o valor lançado mais recentemente

   // resume os resultados de 6.000.000 lançamentos de um dado
   for (int roll = 1; roll <= 6000000; roll++)
   {
      face = 1 + rand() % 6; // número aleatório de 1 a 6

      // determina valor de lançamento de 1 a 6 e incrementa o contador apropriado
      switch (face)
      {
         case 1:
            ++frequency1; // incrementa o contador de 1s
            break;
         case 2:
            ++frequency2; // incrementa o contador de 2s
            break;
         case 3:
            ++frequency3; // incrementa o contador de 3s
            break;
         case 4:
            ++frequency4; // incrementa o contador de 4s
            break;
         case 5:
            ++frequency5; // incrementa o contador de 5s
            break;
         case 6:
            ++frequency6; // incrementa o contador de 6s
            break;
         default: // valor inválido
            cout << "Program should never get here!";
      } // fim de switch
   } // fim do for

   cout << "Face" << setw(13) << "Frequency" << endl; // cabeçalhos de saída
   cout << "   1" << setw(13) << frequency1
      << "\n   2" << setw(13) << frequency2
      << "\n   3" << setw(13) << frequency3
      << "\n   4" << setw(13) << frequency4
      << "\n   5" << setw(13) << frequency5
      << "\n   6" << setw(13) << frequency6 << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main