// Figura 7.15: fig07_15.cpp
// Demonstrando o qualificador de tipo const.
#include <iostream>
using std::cout;
using std::endl;

void tryToModifyArray(const int []); // protótipo de função

int main()
{
    int a[] = {10, 20, 30};

    tryToModifyArray(a);
    cout << a[0] << ' ' << a[1] << ' ' << a[2] << '\n';

    return 0; // indica terminação bem-sucedida
} // fim de main

// Na função tryToModifyArray, "b" não pode ser utilizado
// para modificar o array original "a" em main.
void tryToModifyArray(const int b[])
{
    b[0] /= 2; // error
    b[1] /= 2; // error
    b[2] /= 2; // error
} // fim da função tryToModifyArray