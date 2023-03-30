// Exercise 6.25: 6_25.cpp
// Imprimindo um número aleatório com dígitos separados
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

void printRandomNumber(void);

int main()
{
    printRandomNumber();

    return 0;
}

void printRandomNumber(void)
{
    int number, d1, d2, d3, d4, d5;

    srand(time(0));
    number = 1 + rand() % 32767; // números aleatórios entre 1 e 32767

    d1 = number / 10000;
    d2 = (number % 10000) / 1000;
    d3 = ((number % 10000) % 1000) / 100;
    d4 = (((number % 10000) % 1000) % 100) / 10;
    d5 = (((number % 10000) % 1000) % 100) % 10;

    cout << "Random number: " << number << endl;

    if (d1 != 0)
        cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5;
    if (d1 == 0 && d2 != 0)
        cout << d2 << " " << d3 << " " << d4 << " " << d5;
    if (d1 == 0 && d2 == 0)
        cout << d3 << " " << d4 << " " << d5;
    if ((d1 == 0 && d2 == 0) && d3 == 0)
        cout << d4 << " " << d5;
    if ((d1 == 0 && d2 == 0) && (d3 == 0 && d4 == 0))
        cout << d5;

    cout << endl;
}
