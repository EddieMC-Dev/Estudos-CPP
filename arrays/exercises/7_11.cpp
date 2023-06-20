// Exercise 7.11: 7_11.cpp
// Algoritmo de classificação por borbulhamento (bubble sort)
// Autor: Edgard Mac Fadden
// Data: 03/04/2023

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int numbersSize = 10; // tamanho do array de números
    int numbers[] = {10, 3, 1, 2, 4, 6, 7, 5, 8, 9}; // array de 10 elementos
    int aux; // uma variável auxiliar pra realizar trocas entre valores do array
    int count; // conta a quantidade de pares trocados

    cout << "Numbers: ";
    
    for (int i = 0; i < 10; i++)
        cout << numbers[i] << " ";

    cout << endl;

    // Processo de ordenação do array
    do
    {
        count = 0;
        numbersSize--;

        // compara cada par e realiza a troca se necessário
        for (int j = 0; j < numbersSize; j++)
            if (numbers[j] > numbers[j + 1])
            {
                aux = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = aux;
                count++;
            }
    } while (count != 0);

    cout << "Ordered numbers: ";

    for (int i = 0; i < 10; i++)
        cout << numbers[i] << " ";

    cout << endl;
    return 0;
}