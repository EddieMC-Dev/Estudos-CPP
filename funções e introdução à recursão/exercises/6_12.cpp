// Exercise 6.12: 6_12.cpp
// Calculando custos de um estacionamento 
// Autor: Edgard Mac Fadden
// Data: 20/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

double calculateCharges(double);

int main()
{
    double hours, charge;
    double totalHours = 0; 
    double totalCharges = 0;

    cout << "Car" << setw(11) << "Hours" << setw(12) << "Charge" << endl;
    cout << fixed;

    for (int car = 1; car <= 3; car++)
    {   
        switch (car)
        {
        case 1:
            hours = 1.5;
            break;   
        case 2:
            hours = 4.0;
            break;
        case 3:
            hours = 24.0;
            break;
        default:
            break;
        }

        charge = calculateCharges(hours);
        totalHours += hours;
        totalCharges += charge;

        cout << car << setw(13) << setprecision(1) << hours 
            << setw(12) << setprecision(2) << charge << endl;
    }

    cout << "TOTAL" << setw(9) << setprecision(1) << totalHours
        << setw(12) << setprecision(2) << totalCharges << endl;
    return 0;
}

double calculateCharges(double hours)
{
    if (hours <= 3) // Nas 3 primeiras horas, a taxa é de $2.00
        return 2.00;
    else if (hours > 3 && hours < 24) // Depois das 3 horas, um custo adicional de 0.50 por hora
        return 2.00 + (hours - 3) * 0.50;
    else // Quando 24 horas tem taxa de $10.00
        return 10.00;
}