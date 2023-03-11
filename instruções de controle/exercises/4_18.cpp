// Exercise 4.18: 4_18.cpp
// Imprimindo uma tabela de valores
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 15:19
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int counter = 1;

   cout << "N\t10*N\t100*N\t1000*N" << endl;

   while (counter <= 5)
   {
      cout << counter << "\t" << counter * 10 << "\t" << counter * 100 
         << "\t" << counter * 1000 << endl;

      ++counter;
   }

   return 0;
}