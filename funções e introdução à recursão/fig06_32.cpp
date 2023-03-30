// Figura 6.32: fig06_32.cpp
// Testando a função fatorial iterativa.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

unsigned long factorial(unsigned long); // protótipo de função

int main()
{
    // calcula o fatorial de 0 a 10
    for (int counter = 0; counter <= 10; counter++)
        cout << setw(2) << counter << "! = " << factorial(counter)
            << endl;

    return 0;
} // fim de main

// função fatorial iterativa
unsigned long factorial(unsigned long number)
{
    unsigned long result = 1;

    // declaração iterativa da função fatorial
    for (unsigned long i = number; i >= 1; i--)
        result *= i;

    return result;
} // fim da função fatorial