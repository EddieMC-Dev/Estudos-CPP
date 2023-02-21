// Exercise 10
// Analisando se um número é par ou ímpar
#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int number;

    cout << "Digite um número inteiro: ";
    cin >> number;

    if (number % 2 == 0)
        cout << number << " é Par!";
    if (number % 2 != 0)
        cout << number << " é Ímpar!";

    return 0;
}