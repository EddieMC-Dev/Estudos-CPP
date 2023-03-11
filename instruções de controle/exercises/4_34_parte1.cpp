// Exercise 4.34: 4_34_parte1.cpp
// criptografando um número de 4 dígitos
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 13:43
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int number;
   int d1, d2, d3, d4;

   cout << "Número (4 dígitos): ";
   cin >> number;

   // O primeiro dígito é trocado pelo terceiro
   // e o segundo dígito é trocado pelo quarto
   // ao mesmo tempo se realiza o ato de encriptar
   d1 = ((number % 1000 % 100 / 10) + 7) % 10;  
   d2 = ((number % 1000 % 100 % 10) + 7) % 10;   
   d3 = ((number / 1000) + 7) % 10;              
   d4 = ((number % 1000 / 100) + 7) % 10;       

   cout << "Número criptografado: " << d1 << d2 << d3 << d4 << endl;
   return 0;
}