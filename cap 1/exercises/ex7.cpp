// Exercise 7
// Analisando números inteiros
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2, num3, sum, average, product, min, max;

    cout << "Digite 3 números inteiros:\n";
    cin >> num1 >> num2 >> num3;

    sum = num1 + num2 + num3;
    average = (num1 + num2 + num3) / 3;
    product = num1 * num2 * num3;
    
    if (num1 > num2 && num1 > num3) 
        max = num1;
    if (num2 > num3 && num2 > num1)
        max = num2;
    if (num3 > num1 && num3 > num2)
        max = num3;
    
    if (num1 < num2 && num1 < num3)
        min = num1;
    if (num2 < num1 && num2 < num3)
        min = num2;
    if (num3 < num1 && num3 < num2)
        min = num3;

    cout << "A soma é " << sum << endl;
    cout << "A média é " << average << endl;
    cout << "O produto é " << product << endl;

    if (num1 == num2 && num1 == num3 && num2 == num3) {
        cout << "Todos os números são iguais";
    } else {
        cout << "O menor é " << min << endl;
        cout << "O maior é " << max << endl;
    }

    return 0;
        
}