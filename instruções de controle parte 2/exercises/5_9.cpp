// Exercise 5.9: 5_9.cpp
// Calculando o produto dos números ímpares de 1 a 15
// Autor: Edgard Mac Fadden
// Data: 12/03/2023

#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int product = 1; // produto dos número ímpares

   for (int counter = 1; counter <= 15; counter += 2)
      product *= counter;  

   cout << "Produto: " << product << endl;
   return 0;
}