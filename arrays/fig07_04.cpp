// Figura 7.4: fig07_04.cpp
// Inicializando um array em uma declaração.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    // utiliza lista inicializadora para inicializar o array n
    int n[10] = {32, 27, 64, 18, 95, 14, 90, 70, 60, 37};

    cout << "Element" << setw(13) << "Value" << endl;

    // gera saída do valor de cada elemento do array
    for (int i = 0; i < 10; i++)
        cout << setw(7) << i << setw(13) << n[i] << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main