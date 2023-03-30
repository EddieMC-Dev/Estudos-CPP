// Exercise 6.19: 6_19.cpp
// Calculando a hipotenusa
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

double hypotenuse(double, double);

int main()
{
    double side1, side2;

    cout << "Insira os dois catetos do triângulo: ";
    cin >> side1 >> side2;

    cout << "Hipotenusa: " << hypotenuse(side1, side2);
    return 0;
}

double hypotenuse(double side1, double side2)
{
    int counter = 1;
    double result = side1 * side1 + side2 * side2;

    while (true)
    {
        if (counter * counter == result)
        {
            result = counter;
            break;
        }

        counter++;
    }

    return result;
}