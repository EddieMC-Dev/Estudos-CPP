// Figura 5.14: 5_14.cpp
// continua instrução que termina uma iteração de uma instrução for
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   for (int count = 1; count <= 10; count++) // itera 10 vezes
   {
      if (count != 5) // se count for 5
         cout << count << " ";
   } // fim do for

   cout << "\nUsed continue to skip printing 5" << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main