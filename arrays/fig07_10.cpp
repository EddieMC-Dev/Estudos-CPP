// Figura 7.10: fig07_10.cpp
// Rola um dado de seis lados 6.000.000 vezes.
#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    vector<int> frequency(7);

    srand(time(0)); // semeia o gerador de número aleatório

    // lança o dado 6.000.000 vezes; usa o valor do dado como índice de frequência
    for (int roll = 1; roll <= 6000000; roll++)
        frequency[1 + rand() % 6]++;

    cout << "Face" << setw(13) << "Frequency" << endl;

    // gera a saída do valor de cada elemento do array
    for (unsigned int face = 1; face < frequency.size(); face++)
        cout << setw(4) << face << setw(13) << frequency[face]
            << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main