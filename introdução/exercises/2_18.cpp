// Exercise 2.18: 2_18.cpp
//Compara dois números e diz se são iguais ou se um número é maior
// Autor: Edgard Mac Fadden
// Data: 01/03/2013 -> 21:34
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Insira dois valores inteiros: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        cout << num1 << " é o maior" << endl;
    
    if (num2 > num1)
        cout << num2 << " é o maior" << endl;

    if (num1 == num2)
        cout << "Estes números são iguais";

    return 0;

}