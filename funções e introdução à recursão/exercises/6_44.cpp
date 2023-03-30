// Exercise 6.44: 6_44.cpp
// Calculando recursivamente o mdc - máximo divisor comum
// Autor: Edgard Mac Fadden
// Data: 28/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int mdc(int, int);

int main()
{
    int number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    cout << "MDC: " << mdc(number1, number2) << endl;
    return 0;
}

int mdc(int x, int y)
{
    if (y == 0)
        return x;

    return mdc(y, x % y);
}