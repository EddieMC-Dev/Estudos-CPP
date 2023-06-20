// Figura 7.5: fig07_05.cpp
// Configura o array s para os inteiros pares de 2 a 20.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    // uma variável constante pode ser utilizada para especificar o tamanho do array
    const int arraySize = 10;

    int s[arraySize]; // array s tem 10 elementos

    for (int i = 0; i < arraySize; i++) // configura os valores
        s[i] = 2 + 2 * i;

    cout << "Element" << setw(13) << "Value" << endl;

    // gera saída do conteúdo do array s em formato tabular
    for (int j = 0; j < arraySize; j++)
        cout << setw(7) << j << setw(13) << s[j] << endl;
    
    return 0; // indica terminação bem-sucedida
} // fim de main