// Exercise 6.31: 6_31.cpp
// Obtendo dígitos invertidos
// Autor: Edgard Mac Fadden
// Data: 23/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::to_string;

int numberReverse(int);

int main()
{
    int number;

    cout << "Enter a number: ";
    cin >> number;

    cout << "Reverse number: " << numberReverse(number) << endl;
    return 0;
}

int numberReverse(int number)
{
    int digits = to_string(number).length();
    int newNumber = 0;
    int multipler;
    int limit = 10;

    while (digits != 0)
    {
        limit *= 10;
        digits--;
    }

    multipler = limit / 100;

    for (int divider = 10; divider < limit; divider *= 10)
    {
        newNumber += ((number % divider) / (divider / 10)) * multipler;
        multipler /= 10;
    }

    return newNumber;  
}