// Exercise 5.12: 5_12_parte.cpp
// Imprimindo padrões de triângulo lado a lado
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::endl;
using std::left;

#include <iomanip>
using std::setw;

int main()
{
   int spaces;

   for (int row = 1; row <= 10; row++)
   {
      for (int asterisk = 1; asterisk <= row; asterisk++)
      {
         cout << '*';
      }
      
      spaces = 11 - row;
      cout << setw(spaces);
      
      for (int asterisk = 11 - row; asterisk >= 1; asterisk--)
         cout << '*';
   

      cout << setw(10 - spaces + row);

      for (int asterisk = 11 - row; asterisk >= 1; asterisk--)
         cout << '*';

      spaces = 11 - row;
      cout << setw(spaces);

      for (int asterisk = 1; asterisk <= row; asterisk++)
         cout << '*';

      cout << endl;
   }

   return 0;
}