// Exercise 4.34: 4_34_parte2.cpp
// descriptografando um número de 4 dígitos
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 14:35
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int encryptedNumber;                 // O número criptografado  
   int number;                          // O número descriptografado          
   int digit1, digit2, digit3, digit4;  // Os dígitos do valor criptografado
   int d1, d2, d3, d4;                  // Os dígitos para descriptografar
   int counter = 0;                     // Contador

   cout << "Número criptografado: ";
   cin >> encryptedNumber;

   digit1 = encryptedNumber / 1000;
   digit2 = encryptedNumber % 1000 / 100;
   digit3 = encryptedNumber % 1000 % 100 / 10;
   digit4 = encryptedNumber % 1000 % 100 % 10;

   while (counter != -1)
   {
      d1 = ((counter % 1000 % 100 / 10) + 7) % 10 ;
      d2 = ((counter % 1000 % 100 % 10) + 7) % 10 ;   
      d3 = ((counter / 1000) + 7) % 10;            
      d4 = ((counter % 1000 / 100) + 7) % 10;

      if (d1 == digit1)
         if (d2 == digit2)
            if (d3 == digit3)
               if (d4 == digit4)
               {
                  number = counter;
                  counter = -1;
               }

      if (counter != -1)
         ++counter;
   }

   cout << "Número descriptografado: " << number << endl;
   return 0;
}