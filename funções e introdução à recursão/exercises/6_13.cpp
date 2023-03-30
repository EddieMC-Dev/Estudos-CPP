// Exercise 6.13: 6_13.cpp
// Arrendondando vários números com a função floor 
// Autor: Edgard Mac Fadden
// Data: 20/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

#include <cmath>
using std::floor;

int main()
{
    double originalNumber, newNumber;
    
    // Configurando a saida de dados pra ponto flutuante
    cout << setprecision(2) << fixed; 

    do
    {
        cout << "Insira um valor pra ser arrendondado (negativo para sair): ";
        cin >> originalNumber;
        newNumber = static_cast<int>(floor(originalNumber));
        
        if (newNumber >= 0)
            cout << "Original: " << originalNumber << endl
                << "Arredondado: " << newNumber << endl << endl;

    } while (newNumber >= 0);

    return 0;  
}