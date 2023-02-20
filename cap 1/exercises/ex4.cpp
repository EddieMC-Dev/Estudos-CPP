// Exercise 4
// Calcula soma, produto, diferença, quociente dos dois números
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int num1, num2, soma, produto, subtracao, divisao;

    cout << "Digite o primeiro inteiro: ";
    cin >> num1;
    cout << "Digite o segundo inteiro: ";
    cin >> num2;

    soma = num1 + num2;
    produto = num1 * num2;
    subtracao = num1 - num2;
    divisao = num1 / num2;

    cout << "Soma: " << soma << endl;
    cout << "Diferença: " << subtracao << endl;
    cout << "Produto: " << produto << endl;
    cout << "Quociente: " << divisao << endl;

    return 0;
}