// Exercise 4.15: 4_15.cpp
// Calculando o salário de vários empregados
// Autor: Edgard Mac Fadden
// Data: 09/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   int workedHours;       // horas trabalhadas
   double valuePerHour;   // valor por hora trabalhada
   double salary;         // salário do empregado

   cout << "Entre com as horas trabalhadas (-1 para terminar): ";
   cin >> workedHours;

   while (workedHours != -1)
   {
      cout << "Entre com o valor por hora trabalhada ($00.00): ";
      cin >> valuePerHour;
      salary = workedHours * valuePerHour;

      if (workedHours > 40)
         salary += valuePerHour * 0.5;

      cout << "Salário: $" << setprecision(2) << fixed << salary << endl;
      cout << "\nEntre com as horas trabalhadas (-1 para terminar): ";
      cin >> workedHours;
   }

   return 0;
}