// Figura 7.14: fig07_14.cpp
// Passando arrays e elementos de array individuais a funções.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

void modifyArray(int [], int); // parece estranho
void modifyElement(int);

int main()
{
    const int arraySize = 5; // tamanho do array a
    int a[arraySize] = {0, 1, 2, 3, 4}; // inicializa o array a

    cout << "Effects of passing entire array by reference:"
        << "\n\nThe values of the original array are:\n";

    // gera saída de elementos do array original
    for (int i = 0; i < arraySize; i++)
        cout << setw(3) << a[i];

    cout << endl;

    // passa o array a para modifyArray por referência
    modifyArray(a, arraySize);
    cout << "The values of the modified array are:\n";

    // gera saída de elementos do array modificado
    for (int j = 0; j < arraySize; j++)
        cout << setw(3) << a[j];

    cout << "\n\n\nEffects of passing array element by value:"
        << "\n\na[3] before modifyElement: " << a[3] << endl;

    modifyElement(a[3]); // passa elemento do array a[3] por valor
    cout << "a[3] after modifyElement: " << a[3] << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main

// na função modifyArray, "b" aponta para o array original "a" na memória
void modifyArray(int b[], int sizeOfArray)
{
    // multiplica cada elemento do array por 2
    for (int k = 0; k < sizeOfArray; k++)
        b[k] *= 2;
} // fim da função modifyArray

// na função modifyElement. "e" é uma cópia local do
// elemento do array a[3] passado de main
void modifyElement(int e)
{
    // multiplica parâmetro por 2
    cout << "Value of element in modifyElement: " << (e *= 2) << endl;
} // fim da função modifyElement