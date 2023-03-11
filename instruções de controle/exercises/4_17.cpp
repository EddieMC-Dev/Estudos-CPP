// Exercise 4.17: 4_17.cpp
// Analisando o vencedor de uma competição de vendas com 10 participantes
// e coletando a maior número de unidades vendidas
// Autor: Edgard Mac Fadden
// Data: 09/03/2023 --> 14:43
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int counter = 1;  // contador do loop 
   int number;       // número de unidades vendidas
   int largest = 0;  // maior número de unidades vendidas

   while (counter <= 10)
   {
      cout << "Unidades vendidas: ";
      cin >> number;

      if (largest < number)
         largest = number;

      counter++;
   }

   cout << "\nMaior número de unidades vendidas pelo vencedor: " << largest << endl;
   return 0;
}