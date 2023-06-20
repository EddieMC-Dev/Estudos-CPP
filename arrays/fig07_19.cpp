// Figura 7.19: fig07_19.cpp
// Pesquisa linear de um array.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch(const int [], int, int); // protótipo

int main()
{
    const int arraySize = 100; // tamanho do array a
    int a[arraySize]; // cria o array a
    int searchKey; // valor a localizar no array a 

    for (int i = 0; i < arraySize; i++)
        a[i] = 2 * i; // cria alguns dados
    
    cout << "Enter integer search key: ";
    cin >> searchKey;

    // tenta localizar searchKey no array a
    int element = linearSearch(a, searchKey, arraySize);

    // exibe os resultados
    if (element != -1)
        cout << "Fount value in element " << element << endl;
    else 
        cout << "Value not found" << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main

// compara a chave com cada elemento do array até que a localização seja
// encontrada ou até que o fim do array seja alcançado; retorna o subscrito do
// elemento se a chave for encontrada ou -1 caso contrário
int linearSearch(const int array[], int key, int sizeOfArray)
{
    for (int j = 0; j < sizeOfArray; j++)
        if (array[j] == key) // se localizado,
            return j; // retorna a localização da chave

    return -1; // chave não-localizada
} // fim da função linearSearch