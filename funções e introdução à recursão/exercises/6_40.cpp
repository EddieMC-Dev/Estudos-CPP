// Exercise 6.40: 6_40.cpp
// Calculando potência
// Autor: Edgard Mac Fadden
// Data: 24/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int power(int, int);

int main()
{
    int base, exponent;

    cout << "Base: ";
    cin >> base;
    cout << "Exponent: ";
    cin >> exponent;

    cout << "Result: " << power(base, exponent) << endl;
    return 0;
}

int power(int base, int exponent)
{
    if (exponent == 1)
        return base;

    return base * power(base, exponent - 1);
}