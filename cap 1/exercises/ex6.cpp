// Exercise 6
// Comparando dois números
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2;

    cout << "Digite dois números:\n";
    cin >> num1 >> num2;

    if (num1 > num2) 
        cout << "O maior número é o " << num1 << endl;
    if (num2 > num1)
        cout << "O maior número é o " << num2 << endl;
    if (num1 == num2)
        cout << "Estes números são iguais";

    return 0;
}