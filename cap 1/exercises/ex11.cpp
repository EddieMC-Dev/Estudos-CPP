// Exercise 10
// Analisando dois inteiros e vendo se o primeiro é múltiplo do segundo
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Digite dois números inteiros: ";
    cin >> num1 >> num2;

    if (num1 % num2 == 0)
        cout << num1 << " é múltiplo de " << num2 << endl;
    if (num1 % num2 != 0)
        cout << num1 << " não é múltiplo de " << num2 << endl;    

    return 0;
}