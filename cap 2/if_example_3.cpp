// Usando if/else com múltiplos comandos
#include <iostream>

using std::cout;

int main()
{
    int nota;

    nota = 40;
    if (nota >= 60)
        cout << "Aprovado.\n";
    else {
        cout << "Reprovado.\n";
        cout << "Você deve fazer este curso de novo.\n";
    }

    return 0;
}