// Exercise 5.8: 5_8.cpp
// Analisando o menor valor entre um número específico de valores inteiros
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int size; // quantidade valores a serem inseridos
   int value; // valor a ser inserido
   int minValue = 0; // valor mínimo

   cout << "Insira a quantidade de valores inteiros: ";
   cin >> size;

   for (int counter = 1; counter <= size; counter++)
   {
      cout << "Insira um valor inteiro: ";
      cin >> value;

      if (minValue == 0 || minValue > value)
         minValue = value;
   }

   cout << "Menor valor digitado: " << minValue << endl;
   return 0;
}