// Exercise 8
// Analisando as medidas de um círculo
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    int radius, diameter;

    cout << "Digite o raio do círculo: ";
    cin >> radius;
    diameter = 2 * radius;
    cout << "Diâmetro: " << radius * 2 << endl;
    cout << "Circunferência: " << 2 * 3.14159 * radius << endl;
    cout << "Área: " << 3.14159 * radius * radius << endl;

    return 0;
}