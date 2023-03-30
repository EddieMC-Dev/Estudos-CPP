// Figura 6.29: fig06_29.cpp
// Testando a função fatorial recursiva, demonstrando o processo da recursão.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int spaces = 15;

unsigned long factorial(unsigned long); // protótipo de função

int main()
{
    // calcula o fatorial de 0 a 10
    for (int counter = 0; counter <= 10; counter++)
    {
        cout << "factorial(" << counter << ") " << endl;
        cout << factorial(counter) << " = " << counter << "!" << endl << endl;
        ::spaces = 15;
    }
    
    return 0; // indica terminação bem-sucedida
} // fim de main

// definição recursiva da função fatorial
unsigned long factorial(unsigned long number)
{
    if (number <= 1) // testa caso básico
    {
        cout << setw(::spaces) << "return 1" << endl;
        return 1; // casos básicos: 0! = 1 e 1! = 1
    }
    else
    {
        cout << setw(::spaces) << "  return " << number 
            << " * factorial("<< number - 1 << ")" << endl;
        ::spaces += 7;
        return number * factorial(number - 1);
    }
} // fim da função fatorial