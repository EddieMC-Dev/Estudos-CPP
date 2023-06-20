// Figura 7.3: fig07_03.cpp
// Inicializando um array
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    int n[10]; // n é um array de 10 inteiros

    // inicializa elementos do array n como 0
    for (int i = 0; i < 10; i++)
        n[i] = 0; // configura elemento na posição i como 0

    cout << "Element" << setw(13) << "Value" << endl;

    // gera saída do valor de cada elemento do array
    for (int j = 0; j < 10; j++)
        cout << setw(7) << j << setw(13) << n[j] << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main