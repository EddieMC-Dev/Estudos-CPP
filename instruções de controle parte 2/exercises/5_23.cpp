// Exercise 5.23: 5_23.cpp
// Desenhando um losango
// Autor: Edgard Mac Fadden
// Data: 14/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
   int spaces = 1;
   int position;
   int rowsAmount;

   cout << "Insira a quantidade de linhas do losango: ";
   cin >> rowsAmount;
   cout << endl;
   position = (rowsAmount / 2) + 2;

   for (int row = 1; row <= rowsAmount; row += 2)
   {
      cout << setw(position - spaces);

      for (int size = 1; size <= row; size++)
         cout << "*";
         
      spaces++;
      cout << endl;
   }

   spaces = 1;

   for (int row = rowsAmount - 2; row >= 1; row -= 2)
   {
      cout << setw(++spaces);
      
      for (int size = 1; size <= row; size++)
         cout << "*";

      cout << endl;
   }

   return 0;
}