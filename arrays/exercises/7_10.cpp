// Exercise 7.10: 7_10.cpp
// Construindo uma tabela frequência salarial dos vendedores
// Autor: Edgard Mac Fadden
// Data: 03/04/2023

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const int salarySize = 20; // Define um tamanho para o array de salários
    const int frequencySize = 11; // Define o tamanho da array de frequências

    // Define um array que contém os salários de cada vendedor
    const int salary[salarySize] = 
        {250, 325, 378, 400, 459, 461, 500, 523, 587, 600, 750,
         780, 865, 945, 953, 1000, 893, 732, 974, 841};

    int frequency[frequencySize] = {0}; // Inicializa todos os elementos como zero

    // Armazenando as frequências de vendedores em cada categoria salarial
    for (int seller = 0; seller < salarySize; seller++)
        frequency[(salary[seller] / 100)]++;

    cout << "Salespeople by salary category:\n\n";

    // Imprimindo uma saída formatada com barras
    for (int count = 2; count < frequencySize; count++)
    {
        if (count == 10)
            cout << "    $1000: ";
        else
            cout << "$" << count * 100 << "-$" << (count * 100) + 99 << ": ";
        
        for (int sellers = 0; sellers < frequency[count]; sellers++)
            cout << '*';
        
        cout << endl;
    }

    return 0;
}