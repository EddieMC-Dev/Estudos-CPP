// Exercise 4.19: 4_19.cpp
// Analisando 10 números e encontrando os dois maiores números
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 16:01
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int number;             // número
   int firstLargest = 0;   // primeiro maior número
   int secondLargest = 0;  // segundo maior número
   int counter = 1;        // contador

   while (counter <= 10)
   {
      cout << "Digite um valor inteiro: ";
      cin >> number;

      if (firstLargest < number)
      {
         secondLargest = firstLargest;
         firstLargest = number;
      }
      
      if (secondLargest < number)
         if (number < firstLargest)
            secondLargest = number;

      counter++;
   }

   cout << "Os dois maiores números: " << firstLargest << " " 
      << secondLargest << endl;

   return 0;
}