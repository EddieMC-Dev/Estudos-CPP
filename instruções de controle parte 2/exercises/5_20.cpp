// Exercise 5.20: 5_20.cpp
// Localizando triplos de pitágoras menores que 501
// Autor: Edgard Mac Fadden
// Data: 13/03/2023

#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::pow;

int main()
{
   for (int side1 = 1; side1 <= 500; side1++)
   {
      for (int side2 = 1; side2 <= 500; side2++)
      {
         for (int hypotenuse = 500; hypotenuse >= 1; hypotenuse--)
         {
            if (side1 * side1 + side2 * side2 == hypotenuse * hypotenuse)
            {
               cout << "Side 1: " << side1 << " "
                  << "Side 2: " << side2 << " "
                  << "Hypotenuse: " << hypotenuse << endl;
               break;
            }
         }
      }
   }
}