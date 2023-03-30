// Exercise 6.21: 6_21.cpp
// Analisando se um número inteiro é par ou ímpar
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool even(int);

int main()
{
    int number;

    cout << "Insira um valor inteiro: ";
    cin >> number;

    if (even(number))
        cout << number << " é par." << endl;
    else    
        cout << number << " é ímpar." << endl;
    
    return 0;
}

bool even(int x)
{
    return x % 2 == 0;
}
