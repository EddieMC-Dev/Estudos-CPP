// Exercise 5.13: 5_15.cpp
// Desenhando linhas
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int size; // tamanho da linha

   for (int counter = 1; counter <= 5; counter++)
   {
      cout << "Insira o tamanho da linha: ";
      cin >> size;

      for (int asterisk = 1; asterisk <= size; asterisk++)
         cout << '*';

      cout << endl << endl;
   }

   return 0; 
}