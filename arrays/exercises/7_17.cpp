// Exercise 7.17: 7_17.cpp
// Simulando a rolagem de dois dados
// Autor: Edgard Mac Fadden
// Data: 03/04/2023

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
    int die1, die2; // os dados a serem rolados
    int sum; // soma dos dados
    
    // vetor pra calcular frequência de aparição das somas
    vector<int> frequency(13);

    srand(time(0)); // aleatoriza os números

    // Rolagem dos dados
    for (int loop = 1; loop <= 36000; loop++)
    {
        // produz números aleatórios de 1 a 6 para cada dado
        die1 = 1 + rand() % 6; 
        die2 = 1 + rand() % 6;
        sum = die1 + die2;
        frequency[sum]++;
    }

    // gera uma saída tabular aos resultados das somas entre os dados
    cout << "sum" << setw(15) << "rolls\n";

    for (unsigned int i = 2; i < frequency.size(); i++)
        cout << setw(3) << i << setw(14) << frequency[i] << endl;

    return 0;
}