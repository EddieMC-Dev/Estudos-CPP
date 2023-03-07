// Exercise 2.24: 2_24.cpp
// Classificando um número como par ou ímpar
// Autor: Edgard Mac Fadden
// Data: 02/03/2023 --> 16:39
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int number;

    cout << "Digite um valor inteiro: ";
    cin >> number;

    // Verificando se o número é par ou ímpar
    if (number % 2 == 0)
        cout << "O número " << number << " é PAR!";
    if (number % 2 == 1)
        cout << "O número " << number << " é ÍMPAR!";

    return 0;

}