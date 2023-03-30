// Exercise 6.27: 6_27.cpp
// Convertendo temperaturas
// Autor: Edgard Mac Fadden
// Data: 22/03/2023
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

double celsius(int);
double fahrenheit(int);

int main()
{
    cout << "Celsius" << setw(17) << "Fahrenheit" << endl;
    cout << setprecision(0) << fixed;

    for (int celsiusT = 0; celsiusT <= 100; celsiusT++)
        cout << setw(5) << celsiusT << "°" 
            << setw(15) << fahrenheit(celsiusT) << "°" << endl;

    cout << "\nFahrenheit" << setw(14) << "Celsius" << endl;

    for (int fahrenheitT = 32; fahrenheitT <= 212; fahrenheitT++)
        cout << setw(5) << fahrenheitT << "°" 
            << setw(15) << celsius(fahrenheitT) << "°" << endl;

    return 0;
}

double celsius(int temperatureFahrenheit)
{
    return (temperatureFahrenheit - 32) / 1.8;
}

double fahrenheit(int temperatureCelsius)
{
    return (temperatureCelsius * 1.8) + 32;
}