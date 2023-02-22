// Mostra exemplo de uso pro if/else
#include <iostream>

using std::cout;

int main()
{
    int nota;

    nota = 70;
    if (nota > 90)
        cout << "A";
    else if (nota > 80)
        cout << "B";
    else if (nota > 70)
        cout << "C";
    else if (nota >= 60)
        cout << "D";
    else
        cout << "R";

    return 0;
}