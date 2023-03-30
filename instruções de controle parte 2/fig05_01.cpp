// Figura 5.1: fig05_01.cpp
// Repetição controlada por contador
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int counter = 1; // declara e inicializa a variável de controle

   while (counter <= 10) // condição de continuação do loop
   {
      cout << counter << " ";
      counter++; // incrementa a variável de controle por 1
   } // fim do while

   // Outra abordagem:
   // int counter = 1;
   //
   // while (++counter <= 10)
   //    cout << counter << " ";

   cout << endl; // gera a saída de um caractere de nova linhas
   return 0; // terminação bem-sucedida
} // fim de main