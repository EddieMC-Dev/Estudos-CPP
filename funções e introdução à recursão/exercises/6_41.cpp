// Exercise 6.41: 6_41.cpp
// Calculando fibonacci até o seu nésimo número
// Autor: Edgard Mac Fadden
// Data: 25/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

double fibonacci(double);

int main()
{
    double sequenceNumber, fibonacciNumber;

    cout << "Enter how many fibonacci terms you want to see: ";
    cin >> sequenceNumber;

    fibonacciNumber = fibonacci(sequenceNumber);
    cout << setprecision(0) << fixed ;
    cout << "Number: " << fibonacciNumber << endl;
    return 0;
}

double fibonacci(double n)
{
    double number;
    double predecessor = -1;
    double copyNumber = 1;

    for (int counter = 1; counter <= n; counter++)
    {
        number = copyNumber + predecessor;
        predecessor = copyNumber;
        copyNumber = number;
    }

    return number;
}