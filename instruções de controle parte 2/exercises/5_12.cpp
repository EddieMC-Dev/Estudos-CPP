// Exercise 5.12: 5_12.cpp
// Imprimindo padrões de triângulo
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
   int row;
   int spaces = 1;

   for (row = 1; row <= 10; row++)
   {
      for (int asterisk = 1; asterisk <= row; asterisk++)
         cout << '*';
      
      cout << endl;
   }

   for (row = 10; row >= 1; row--)
   {
      for (int asterisk = row; asterisk >= 1; asterisk--)
         cout << '*';
      
      cout << endl;
   }

   for (row = 10; row >=1; row--)
   {
      cout << setw(spaces);

      for (int asterisk = row; asterisk >= 1; asterisk--)
         cout << '*';
      
      cout << endl;
      spaces++;
   }

   spaces--;

   for (row = 1; row <= 10; row++)
   {
      cout << setw(spaces);

      for (int asterisk = 1; asterisk <= row; asterisk++)
         cout << '*';
      
      cout << endl;
      spaces--;
   }

   return 0;
}