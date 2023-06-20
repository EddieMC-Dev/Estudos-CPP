// Figura 7.8: fig07_08.cpp
// Calcula a soma dos elementos do array
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int arraySize = 10; // variável constante indicando o tamanho do array
    int a[arraySize] = {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};
    int total = 0;

    // soma o conteúdo do array a
    for (int i = 0; i < arraySize; i++)
        total += a[i];
    
    cout << "Total of array elements: " << total << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main