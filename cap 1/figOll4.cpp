// Fig. 1.14: figOll4.cpp
// Utilizando comandos if, operadores
// relacionais e operadores de igualdade
#include <iostream>

using std::cout; // o programa usa cout
using std::cin; // o programa usa cin
using std::endl; // o programa usa endl

int main()
{
    int num1, num2;

    cout << "Digite dois inteiros e lhe direi\n"
    << "quais os relacionamentos que eles satisfazem: ";
    cin >> num1 >> num2; // lê dois inteiros

    if (num1 == num2)
        cout << num1 << " é igual a " << num2 << endl; 
       
    if (num1 != num2) 
        cout << num1 << " não é igual a " << num2 << endl;
    
    if (num1 < num2) 
        cout << num1 << " é menor que " << num2 << endl;
    
    if (num1 > num2) 
        cout << num1 << " é maior que " << num2 << endl;
    
    if (num1 <= num2) 
        cout << num1 << " é menor que ou igual a "
        << num2 << endl;
    
    if (num1 >= num2) 
        cout << num1 << " é maior que ou igual a "
        << num2 << endl;
    
    return 0; // indica que o programa terminou com sucesso
}