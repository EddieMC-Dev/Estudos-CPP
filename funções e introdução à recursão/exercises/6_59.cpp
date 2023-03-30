// Exercise 6.59: 6_59.cpp
// Avaliando o maior valor por meio do template de função
// Autor: Edgard Mac Fadden
// Data: 29/03/2023
#include "max.h"

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    double v1, v2, v3;

    cout << "Enter three values: ";
    cin >> v1 >> v2 >> v3;

    cout << "Max value: " << max(v1, v2, v3);
    return 0; 
}