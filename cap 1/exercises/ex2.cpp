// Exercise 2
// Calcula o produto de três números inteiros
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
    int x, y, z, result;

    cout << "Digite o primeiro inteiro: ";
    cin >> x;
    cout << "Digite o segundo inteiro: ";
    cin >> y;
    cout << "Digite o terceiro inteiro: ";
    cin >> z;

    result = x * y * z;
    cout << "O produto final é " << result << endl;

    return 0;
}