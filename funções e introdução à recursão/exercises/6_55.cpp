// Exercise 6.55: 6_55.cpp
// Calculando a área de um círculo com uma função inline
// Autor: Edgard Mac Fadden
// Data: 29/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

inline double circleArea(const double radius)
{
    const double PI = 3.14159;
    return PI * radius * radius;
}

int main()
{
    double radius;

    cout << "Radius of circle: ";
    cin >> radius;

    cout << fixed << setprecision(3)  
        << "Area of circle: " << circleArea(radius) << endl;
    return 0;
}