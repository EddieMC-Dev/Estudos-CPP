// Exercise 2_16: 2_16.cpp
// Calculando a soma, o produto, a diferença e o quociente de dois números
// Autor: Edgard Mac Fadden
// Data: 01/03/2023 -> 16:37
#include <iostream> 

using std::cout; 
using std::cin;
using std::endl;

int main()
{
    int num1, num2, sum, product, difference, division;

    cout << "Insira dois números: ";
    cin >> num1 >> num2;

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;
    division = num1 / num2;

    cout << "Soma: " << sum << endl;
    cout << "Diferença: " << difference << endl;
    cout << "Produto: " << product << endl;
    cout << "Quociente: " << division << endl; 

    return 0;

}