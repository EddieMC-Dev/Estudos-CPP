// Exercise 7.29: 7_29.cpp
// O Crivo de Eratóstenes para identificar números primos
// Autor: Edgard Mac Fadden
// Data: 04/06/2023

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int elements = 1000; // número de elementos
    int array[elements]; // array de 1000 elementos

    // Configura todos os elementos do array como 1
    for (int i = 0; i < elements; i++)
        array[i] = 1;

    // Analisa se um elemento é 1 e configura todos os múltiplos desse elemento como 0
    for (int element = 2; element < elements; element++)
    {
        if (array[element] == 1)
        {
            for (int i = element + 1; i < elements; i++)
            {
                if (i % element == 0)
                    array[i] = 0;
            }
        }
    }

    // Exibe todos os números primos entre 2 e 999
    for (int number = 2; number < elements; number++)
    {
        if (array[number] == 1)
            cout << number << endl;
    }

    return 0;
}