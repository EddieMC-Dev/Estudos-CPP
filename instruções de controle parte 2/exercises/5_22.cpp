// Exercise 5.22: 5_22.cpp
// Escrevendo expressões lógicas equivalentes com as leis de Morgan
// Autor: Edgard Mac Fadden
// Data: 14/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   cout << "x = 5, y = 8" << endl
      << "!(x < 5) && !(y >= 7) = !(false) && !(true) = "
      << "true && false = false" << endl
      << "!(x < 5 || y >= 7) = !(false || true) = "
      << "!true = false" << endl << endl;
   
   cout << "a = 3, b = 3, g = 5" << endl
      << "!(a == b) || !(g != 5) = !(true) || !(false) = "
      << "false || true = true" << endl
      << "!(a == b && g != 5) = !(true && false) = "
      << "!false = true" << endl << endl;

   cout << "x = 8, y = 3" << endl
      << "!(x <= 8 && y > 4) = !(true && false) = "
      << "!false = true" << endl
      << "!(x <= 8) || !(y > 4) = !(true) || !(false)  = "
      << "false || true = true" << endl << endl;

   cout << "i = 5, j = 7" << endl
      << "!(i > 4 || j <= 6) = !(true || false) = "
      << "!true = false" << endl
      << "!(i > 4) && !(j <= 6) = !(true) && !(false) = "
      << "false && true = false" << endl << endl;

   return 0;
}