// Figura 7.20: fig07_20.cpp
// Este programa classifica valores de um array em ordem crescente.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int arraySize = 10; // tamanho do array a
    int data[arraySize] = {34, 56, 4, 10, 77, 51, 93, 30, 5, 52};
    int insert; // variável temporária para armazenar o elemento a inserir

    cout << "Unsorted array:\n";

    // gera saída do array original
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    // classificação por inserção
    // itera pelos elementos do array
    for (int next = 1; next < arraySize; next++)
    {
        insert = data[next]; // armazena o valor no elemento atual

        int moveItem = next; // inicializa a localização para colocar elemento

        // procura a localização em que colocar o elemento atual
        while ((moveItem > 0) && (data[moveItem - 1]) > insert)
        {
            // desloca o elemento uma posição para a direita
            data[moveItem] = data[moveItem - 1];
            moveItem--;
        } // fim do while
         
        data[moveItem] = insert; // lugar em que o elemento é inserido no array
    } // fim do for

    cout << "\nSorted array:\n";

    // gera a saída do array classificado
    for (int i = 0; i < arraySize; i++)
        cout << setw(4) << data[i];

    cout << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main