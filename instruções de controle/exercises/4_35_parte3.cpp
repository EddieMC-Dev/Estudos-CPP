// Exercise 4.35: 4_35_parte2.cpp
// Calculando o valor estimado da constante 'e' elevado a 'x'
// Autor: Edgard Mac Fadden
// Data: 10/03/2023 --> 18:18
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
   int power, x_pow, x;
   int counter = 1;
   int fatorial = 1;
   double e = 1.0;

   cout << "Deseja calcular o e^x em quantos termos? ";
   cin >> size;
   cout << "Escolha o valor de x: ";
   cin >> x_pow;

   while (counter <= size)
   {  
      fatorial *= counter;
      power = 1;
      x = 1;

      while (power <= counter)
      {  
         x *= x_pow;
         power++;
      }
      
      e += x / static_cast<double>(fatorial);
      counter++;
   }

   cout << "e^" << x_pow << " = " << setprecision(3) << fixed << e << endl;
   return 0;
}