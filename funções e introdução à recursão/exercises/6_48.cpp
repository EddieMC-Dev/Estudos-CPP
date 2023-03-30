// Exercise 6.48: 6_48.cpp
// Calculando a distância entre dois pontos
// Autor: Edgard Mac Fadden
// Data: 29/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using std::pow;
using std::sqrt;

double distance(double, double, double, double);

int main()
{
    int x1, x2, y1, y2;

    cout << setprecision(2) << fixed;

    cout << "Ponto (x1, y1): ";
    cin >> x1 >> y1;

    cout << "Ponto (x2, y2): ";
    cin >> x2 >> y2;

    cout << "Distância: " << distance(x1, y1, x2, y2) << endl;
    return 0;
}

double distance(double x1, double y1, double x2, double y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}