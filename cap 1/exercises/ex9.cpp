// Exercise 9
// Comparando 5 números e encontrando o maior e o menor deles
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2, num3, num4, num5, max, min;

    cout << "Digite 5 inteiros diferentes: ";
    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    if (num1 > num2 && num1 > num3 && num1 > num4 && num1 > num5)
        max = num1;
    if (num2 > num1 && num2 > num3 && num2 > num4 && num2 > num5)
        max = num2;
    if (num3 > num1 && num3 > num2 && num3 > num4 && num3 > num5)
        max = num3;
    if (num4 > num1 && num4 > num2 && num4 > num3 && num4 > num5)
        max = num4;
    if (num5 > num1 && num5 > num2 && num5 > num3 && num5 > num4)
        max = num5;

    if (num1 < num2 && num1 < num3 && num1 < num4 && num1 < num5)
        min = num1;
    if (num2 < num1 && num2 < num3 && num2 < num4 && num2 < num5)
        min = num2;
    if (num3 < num1 && num3 < num2 && num3 < num4 && num3 < num5)
        min = num3;
    if (num4 < num1 && num4 < num2 && num4 < num3 && num4 < num5)
        min = num4;
    if (num5 < num1 && num5 < num2 && num5 < num3 && num5 < num4)
        min = num5;

    cout << "Maior número: " << max << endl;
    cout << "Menor número: " << min << endl;

    return 0;
}