// Figura 7.9: fig07_09.cpp
// Programa de impressão de gráfico de barras.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int arraySize = 11;
    int n[arraySize] = {0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1};

    cout << "Grade distribution:" << endl;

    // para cada elemento do array n, gera saída de uma barra do gráfico
    for (int i = 0; i < arraySize; i++)
    {
        // gera a saída do rótulo das barras ("0-9:", ..., "90-99:", "100:")
        if (i == 0)
            cout << "  0-9: ";
        else if (i == 10)
            cout << "  100: ";
        else
            cout << i * 10 << "-" << (i * 10) + 9 << ": ";

        // imprime a barra de asteriscos
        for (int stars = 0; stars < n[i]; stars++)
            cout << '*';
        
        cout << endl; // inicia uma nova linha de saída
    } // fim do for externo

    return 0; // indica terminação bem-sucedida
} // fim de main