// Figura 5.5: fig05_05.cpp
// Somando inteiros com a instrução for
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int total = 0; // inicializa o total

   // total de inteiros pares de 2 a 20
   for (int number = 2; number <= 20; number += 2)
      total += number;

   cout << "Sum is " << total << endl; // exibe resultados
   return 0; // terminação bem-sucedida
} // fim de main