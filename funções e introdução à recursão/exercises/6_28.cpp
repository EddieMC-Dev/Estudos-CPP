// Exercise 6.28: 6_28.cpp
// Obtendo o menor valor de ponto flutuante
// Autor: Edgard Mac Fadden
// Data: 22/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

double doubleMin(double, double, double);

int main()
{
    double num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << setprecision(2) << fixed;
    cout << "Minimum: " << doubleMin(num1, num2, num3);
    return 0;
}

double doubleMin(double x, double y, double z)
{
    double minValue = x;

    if (minValue > y)
        minValue = y;
    
    if (minValue > z)
        minValue = z;

    return minValue;
}