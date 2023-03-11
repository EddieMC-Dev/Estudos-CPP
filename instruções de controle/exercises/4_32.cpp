// Exercise 4.32: 4_32.cpp
// Determinando se 3 valores representam os lados de um triângulo
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 12:59
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int side1, side2, side3;

   cout << "Side 1: ";
   cin >> side1;
   cout << "Side 2: ";
   cin >> side2;
   cout << "Side 3: ";
   cin >> side3;

   if (side1 == 0)
      cout << "Não podem formar um triângulo.";
   else if (side2 == 0)
      cout << "Não podem formar um triângulo.";
   else if (side3 == 0)
      cout << "Não podem formar um triângulo.";
   else if (side1 + side2 > side3)
   {
      if (side1 + side3 > side2)
         if (side2 + side3 > side1)
            cout << "Formam um triângulo.";
   }
   else
      cout << "Não podem formar um triângulo.";

   return 0;
}