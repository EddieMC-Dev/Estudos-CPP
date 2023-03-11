// Exercise 4.30: 4_30.cpp
// Analisando atributos de um círculo através de seu raio
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 12:06
#include <iostream>
using std::cout; 
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   double radius, diameter, circumference, area;
   double pi = 3.14159;

   cout << "Raio do círculo: ";
   cin >> radius;

   diameter = 2 * radius;
   circumference = 2 * pi * radius;
   area = pi * radius * radius;

   cout << "Diâmetro: " << setprecision(2) << fixed << diameter << endl
      << "Perímetro: " << setprecision(3) << fixed << circumference << endl
      << "Área: " << setprecision(2) << fixed << area << endl;
   return 0;
}