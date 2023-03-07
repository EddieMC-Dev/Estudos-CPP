// Exercise 2.20: 2_20.cpp
// Calculando as propriedades de um círculo
// Autor: Edgard Mac Fadden
// Data: 01/03/2023 -> 21:59
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int radius, diameter;

    cout << "Raio: ";
    cin >> radius;

    diameter = radius * 2;

    cout << "Diâmetro: " << diameter << endl;
    cout << "Circunferência: " << 2 * 3.14159 * radius << endl;
    cout << "Área: " << 3.14159 * radius * radius << endl;

    return 0;

}