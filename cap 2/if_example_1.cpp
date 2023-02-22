// Mostrando dois exemplos de uso do if
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int nota;

    nota = 60;
    // Usando if/else
    if (nota >= 60)
        cout << "Aprovado" << endl;
    else 
        cout << "Reprovado" << endl;

    // Usando o operador condicional tenário
    nota >= 60 ? cout << "Aprovado" << endl : cout << "Reprovado" << endl;

    return 0;   
}