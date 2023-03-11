// Exercise 4.29: 4_29.cpp
// Imprimindo as potência do número 2 infinitamente
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 22:23
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int number = 2;

   while (true)
   {
      cout << number << endl;
      number = number * 2;

      if (number == 0)
         cout << "OK";
   }

   return 0;
}