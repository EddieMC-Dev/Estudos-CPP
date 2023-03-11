// Exercise 4.25: 4_25.cpp
// Desenhando um quadrado
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 18:00
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{  
   int side;
   int row;
   int column;

   cout << "Tamanho do lado do quadrado: ";
   cin >> side;
   row = side;

   while (row >= 1)
   {
      column = side;

      while (column >= 1)
      {  
         if (row == side)
            cout << "*";
         else if (row == 1)
            cout << "*";
         else if (column == 1)
            cout << "*";
         else if (column == side)
            cout << "*";  
         else
            cout << " ";

         column--;
      }
      
      cout << endl;
      row--;
   }

   return 0;
}