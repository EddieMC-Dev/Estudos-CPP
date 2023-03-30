// Exercise 6.58: 6_58.cpp
// Avaliando o menor valor com um template de função
// Autor: Edgard Mac Fadden
// Data: 29/03/2023
#include "min.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double v1, v2;

    cout << "Enter two values: ";
    cin >> v1 >> v2;

    cout << "Min value: " << min(v1, v2) << endl;
    return 0;
}