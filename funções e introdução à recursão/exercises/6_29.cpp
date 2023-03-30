// Exercise 6.29: 6_29.cpp
// Obtendo números perfeitos
// Autor: Edgard Mac Fadden
// Data: 22/03/2023
#include <iostream>
using std::cout;
using std::endl;

bool perfect(int);

int main()
{
    cout << "Números perfeitos: ";

    for (int number = 1; number <= 1000; number++)
        if (perfect(number))
            cout << number << " ";

    return 0;
}

bool perfect(int number)
{
    int multiplesSum = 0;

    for (int counter = 1; counter < number; counter++)
        if (number % counter == 0)
            multiplesSum += counter;

    return (number == multiplesSum)?(true):(false); 
}