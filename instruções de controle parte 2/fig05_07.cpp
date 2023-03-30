// Figura 5.7: fig05_07.cpp
// instrução de repetição do...while.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int counter = 1; // inicializa o contador

   do
   {
      cout << counter << " "; // exibe o contador
      counter++; // incrementa o contador
   } while (counter <= 10); // fim da instrução do...while

   cout << endl; // gera a saída de um caractere de nova linha
   return 0; // indica terminação bem-sucedida
} // fim de main