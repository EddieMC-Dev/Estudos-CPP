// Exercise 6.32: 6_32.cpp
// Calculando MDC - Máximo Divisor Comum
// Autor: Edgard Mac Fadden
// Data: 23/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int getMdc(int, int);

int main()
{
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    cout << "MDC: " << getMdc(number1, number2) << endl;
    return 0;
}

int getMdc(int x, int y)
{
    int maxValue = (x > y)?(x):(y);

    for (int number = maxValue; true; number--)
        if ((x % number == 0) && (y % number == 0))
            return number;
}