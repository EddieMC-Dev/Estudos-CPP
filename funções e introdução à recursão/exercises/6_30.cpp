// Exercise 6.30: 6_30.cpp
// Obtendo números primos
// Autor: Edgard Mac Fadden
// Data: 22/03/2023
#include <iostream>
using std::cout;
using std::endl;

#include <cmath>
using std::sqrt;

bool checkPrimeNumber(int);

int main()
{
    cout << "Números primos:" << endl;

    for (int number = 2; number <= 10000; number++)
        if (checkPrimeNumber(number))
            cout << number << endl;

    return 0;
}

/*
bool checkPrimeNumber(int number)
{
    int multiples = 2;

    for (int counter = 2; counter <= number / 2; counter++)
    {    
        if (number % counter == 0)
        {
            multiples++;
            break;
        }
    }    

    return (multiples == 2)?(true):(false);
}
*/


bool checkPrimeNumber(int number)
{
    int multiples = 2;
    int limit = sqrt(number);

    for (int counter = 2; counter <= limit; counter++)
        if (number % counter == 0)
        {
            multiples++;
            break;
        }

    return (multiples == 2)?(true):(false);
}
