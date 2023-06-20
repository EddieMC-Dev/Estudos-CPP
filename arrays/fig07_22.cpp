// Figura 7.22: fig07_22.cpp
// Inicialização de arrays multidimensionais.
#include <iostream>
using std::cout;
using std::endl;

void printArray(const int [][3]); // protótipo

int main()
{
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int array2[2][3] = {1, 2, 3, 4, 5};
    int array3[2][3] = {{1, 2}, {4}};

    cout << "Values in array1 by row are:" << endl;
    printArray(array1);

    cout << "\nValues in array2 by row are: " << endl;
    printArray(array2);

    cout << "\nValues in array3 by row are:" << endl;
    printArray(array3);
    return 0; // indica terminação bem-sucedida
} // fim de main

// gera saída do array com duas linhas e três colunas
void printArray(const int a[][3])
{
    // faz um loop pelas linhas do array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << a[i][j] << ' ';
    
        cout << endl; // inicia nova linha de saída 
    } // fim do for externo
} // fim da função printArray