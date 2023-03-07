// Exercise 2.28: 2_28.cpp
// Separando os dígitos de um número com 5 dígitos
// Autor: Edgard Mac Fadden
// Data: 02/03/2023 --> 17:29
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num, d1, d2, d3, d4, d5;

    cout << "Insira um número de 5 dígitos: ";
    cin >> num;

    d1 = num / 10000;
    d2 = (num % 10000) / 1000;
    d3 = ((num % 10000) % 1000) / 100;
    d4 = ((((num % 10000) % 1000) % 100)) / 10;
    d5 = (((num % 10000) % 1000) % 100) % 10;

    cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5;

    return 0;

}