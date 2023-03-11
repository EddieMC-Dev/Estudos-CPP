// Exercise 4.33: 4_33.cpp
// Determinando se os lados de triângulo correspondem ao triângulo reto 
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 12:32
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int side1, side2, side3;

   cout << "side 1: ";
   cin >> side1;
   cout << "side 2: ";
   cin >> side2;
   cout << "side 3: ";
   cin >> side3;

   if (side1 == 0)
      cout << "Não são lados de um triângulo reto!";
   else if (side2 == 0)
      cout << "Não são lados de um triângulo reto!";
   else if (side3 == 0)
      cout << "Não são lados de um triângulo reto!";
   else if (side1 * side1 + side2 * side2 == side3 * side3)
      cout << "São lados de um triângulo reto!";
   else if (side1 * side1 + side3 * side3 == side2 * side2)
      cout << "São lados de um triângulo reto!";
   else if (side2 * side2 + side3 * side3 == side1 * side1 )
      cout << "São lados de um triângulo reto!";
   else 
      cout << "Não são lados de um triângulo reto!";

   return 0;
}