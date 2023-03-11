// Exercise 4.13: 4_13.cpp
// Calculando quilometragem e consumo total de vários automóveis 
// Autor: Edgard Mac Fadden
// Data: 08/03/2023 --> 20:43
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

int main()
{  
   int mileage;              // quilometragem
   int liters;               // litros
   int totalMileage = 0;     // total de quilometragem
   int totalLiters = 0;      // total de litros
   double consumption;       // consumo
   double totalConsumption;  // consumo total

   cout << "Entre com a quilometragem (-1 para sair): ";
   cin >> mileage;

   while (mileage != -1) // -1 é o valor sentinela
   {
      cout << "Entre com os litros: ";
      cin >> liters;

      totalLiters += liters;
      totalMileage += mileage;
      consumption = static_cast<double>(mileage) / liters;
      totalConsumption = static_cast<double>(totalMileage) / totalLiters;

      cout << "km/litro desse tanque: " << fixed << consumption << endl;
      cout << "Total km/litro: " << fixed << totalConsumption << endl << endl;

      cout << "Entre com a quilometragem (-1 para sair): ";
      cin >> mileage;
   }

   return 0;
}