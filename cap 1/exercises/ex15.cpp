// Exercise 15
// Separando números por espaços
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num, digit1, digit2, digit3, digit4, digit5;

    cout << endl << "Digite um número de 5 dígitos: ";
    cin >> num;

    digit1 = num / 10000;
    digit2 = num % 10000 / 1000;
    digit3 = (num % 10000) % 1000 / 100;
    digit4 = ((num % 10000) % 1000) % 100 / 10;
    digit5 = (((num % 10000) % 1000) % 100) % 10; 

    cout << digit1 << " " << digit2 << " " << digit3 
    << " " << digit4 << " " << digit5 << endl;

    return 0;
}