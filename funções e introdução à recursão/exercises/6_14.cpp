// Exercise 6.14: 6_14.cpp
// Arrendonando vários números
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::floor;

int roundToInteger(double);
int roundToTenths(double);
int roundToHundredths(double);
int roundToThousandths(double);

int main()
{
    double number, intNumber;

    do 
    {
        cout << "Digite um valor a ser arredondado (negativo para sair): ";
        cin >> number;
        intNumber = static_cast<int>(floor(number));

        if (intNumber >= 0) 
        {
            cout << "Arredondado: " << roundToInteger(number)
                << "\nArredondado para décimo: " << roundToTenths(number)
                << "\nArredondado para centésimo: " << roundToHundredths(number)
                << "\nArredondado para milésimo: " << roundToThousandths(number) 
                << endl << endl;
        }

    } while (intNumber >= 0);

    return 0;
}

int roundToInteger(double number)
{
    return floor(number + 0.5);
}

int roundToTenths(double number)
{
    return floor(number * 10 + 0.5) / 10;
}

int roundToHundredths(double number)
{
    return floor(number * 100 + 0.5) / 100;
}

int roundToThousandths(double number)
{
    return floor(number * 1000 + 0.5) / 1000;
}