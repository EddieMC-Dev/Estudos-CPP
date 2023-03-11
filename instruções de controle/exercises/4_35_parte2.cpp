// Exercise 4.35: 4_35_parte2.cpp
// Calculando o valor estimado da constante e
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 17:10
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   int size;
   int counter = 1;
   int fatorial = 1;
   double e = 1;

   cout << "Calcular a constante 'e' em quantos termos? ";
   cin >> size;

   while (counter <= size)
   {
      fatorial *= counter;
      e += 1 / static_cast<double>(fatorial);
      counter++;
   }

   cout << "e = " << setprecision(5) << fixed << e << endl;
   return 0;
}