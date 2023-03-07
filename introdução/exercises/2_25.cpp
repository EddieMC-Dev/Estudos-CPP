// Exercise 2.25: 2_25.cpp
// Verificando se um número é múltiplo do outro
// Autor: Edgard Mac Fadden
// Data: 02/03/2023 --> 16:51
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Digite 2 números inteiros: ";
    cin >> num1 >> num2;

    if (num1 % num2 == 0)
        cout << num1 << " é múltiplo de " << num2 << endl;
    if (num1 % num2 != 0)
        cout << num1 << " não é múltiplo de " << num2 << endl;

    return 0;

}