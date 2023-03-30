// Figura 5.2: fig05_02.cpp
// Repetição controlada por contador com a instrução for
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   // cabeçalho da instrução for inclui inicialização,
   // condição de continuação do loop e incremente
   for (int counter = 1; counter <= 10; counter++)
      cout << counter << " ";

   cout << endl; // gera a saida de um caractere de nova linha
   return 0; // indica terminação bem-sucedida
} // fim de main