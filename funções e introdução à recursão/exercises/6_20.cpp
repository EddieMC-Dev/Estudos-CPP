// Exercise 6.20: 6_20.cpp
// Avaliando se um inteiro é múltiplo de outro inteiro
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool multiple(int, int);

int main()
{
    int value1, value2;

    cout << "Insira dois valores inteiros: ";
    cin >> value1 >> value2;
    
    if (multiple(value1, value2))
        cout << value2 << " é múltiplo de " << value1 << endl;
    else
        cout << value2 << " não é múltiplo de " << value1 << endl;

    return 0;
}

bool multiple(int number1, int number2)
{
    return number2 % number1 == 0;
}