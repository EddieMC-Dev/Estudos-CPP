// Exercise 4.28: 4_28.cpp
// Exibindo um padrão de tabuleiro com somente 3 instruções de saída
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 21:53
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int row = 1;
   int column;

   while (row <= 8)
   {
      if (row == 2 || row == 5 || row == 7)
            cout << " ";

      column = 1;

      while (column <= 7)
      {  
         cout << "* ";
         column++;
      }

      cout << endl;
      row++;
   }

   return 0;
}