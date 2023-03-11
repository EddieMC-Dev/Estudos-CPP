// Exercise 4.27: 4_27.cpp
// Convertendo binário em decimal
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 20:59
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int binaryNumber;
   int b1, b2, b3, b4, b5, b6, b7, b8;
   int decimalNumber = 0;

   cout << "Digite o valor binário: ";  // recomenda-se no máximo 8 dígitos
   cin >> binaryNumber;

   b8 = binaryNumber / 10000000;
   b7 = binaryNumber % 10000000 / 1000000;
   b6 = binaryNumber % 10000000 % 1000000 / 100000;
   b5 = binaryNumber % 10000000 % 1000000 % 100000 / 10000;
   b4 = binaryNumber % 10000000 % 1000000 % 100000 % 10000 / 1000;
   b3 = binaryNumber % 10000000 % 1000000 % 100000 % 10000 % 1000 / 100;
   b2 = binaryNumber % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 / 10;
   b1 = binaryNumber % 10000000 % 1000000 % 100000 % 10000 % 1000 % 100 % 10;

   decimalNumber += b1 * 1;
   decimalNumber += b2 * 2;
   decimalNumber += b3 * 4;
   decimalNumber += b4 * 8;
   decimalNumber += b5 * 16;
   decimalNumber += b6 * 32;
   decimalNumber += b7 * 64;
   decimalNumber += b8 * 128;

   cout << "Número decimal: " << decimalNumber; 

   return 0;
}