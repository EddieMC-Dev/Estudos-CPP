// Exercise 6.18: 6_18.cpp
// Calculando a potência de um número
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int integerPower(int, int); 

int main()
{
    int number, exponent, result;

    cout << "Insira o inteiro e o expoente: ";
    cin >> number >> exponent;
    
    result = integerPower(number, exponent);
    cout << number << "^" << exponent << " = " << result;
    return 0;
}

int integerPower(int x, int y)
{
    int result = 1;

    for (y; y >= 1; y--)
        result *= x;

    return result;
}