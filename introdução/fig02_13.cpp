// Figura 2.13: fig02_13.cpp
// Comparando inteiros utilizando instruções if, operadores relacionais
// e operadores de igualdade
#include <iostream> // permite ao programa realizar entrada e saída

using std::cout; // o programa utiliza cout
using std::cin; // o programa utiliza cin
using std::endl; // o programa utiliza endl;

// a função main inicia a execução do programa
int main()
{
    int number1; // primeiro inteiro a comparar
    int number2; // segundo inteiro a comparar

    cout << "Enter two integers to compare: "; // solicita dados ao usuário
    cin >> number1 >> number2; // lê dois inteiros fornecidos pelo usuário

    if (number1 == number2) 
        cout << number1 << " == " << number2 << endl;

    if (number1 != number2)
        cout << number1 << " != " << number2 << endl;

    if (number1 < number2)
        cout << number1 << " < " << number2 << endl;

    if (number1 > number2)
        cout << number1 << " > " << number2 << endl;
    
    if (number1 <= number2) 
        cout << number1 << " <= " << number2 << endl;
    
    if (number1 >= number2)
        cout << number1 << " >= " << number2 << endl;

    return 0; 
} 