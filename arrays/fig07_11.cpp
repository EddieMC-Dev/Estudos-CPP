// Figura 7.11: fig07_11.cpp
// Programa de enquete de alunos.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    // define o tamanho do arrays
    const int responseSize = 40; // tamanho do array responses
    const int frequencySize = 11; // tamanho do array frequency

    // coloca as respostas da enquete no array responses
    const int responses[responseSize] = {1, 2, 6, 4, 8, 5, 9, 7, 8,
        10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
        5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // inicializa contadores de frequência como 0
    int frequency[frequencySize] = {0};

    // para cada resposta, seleciona o elemento de respostas e utiliza esse valor
    // como subscrito de frequência para determinar o elemento a incrementar
    for (int answer = 0; answer < responseSize; answer++)
        frequency[responses[answer]]++;

    cout << "Rating" << setw(17) << "Frequency" << endl;

    // gera saída do valor de cada elemento do array
    for (int rating = 1; rating < frequencySize; rating++)
        cout << setw(6) << rating << setw(17) << frequency[rating]
            << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main