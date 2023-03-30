// Figura 6.30: fig06_30.cpp
// Testando a função fibonacci recursiva.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

unsigned long fibonacci(unsigned long); // protótipo de função

int main()
{
    // calcula os valores de fibonacci de 0 a 10
    for (int counter = 0; counter <= 10; counter++)
        cout << "fibonacci(" << counter << ") = "
            << fibonacci(counter) << endl;
        
    // exibe valores fibonacci mais altos
    cout << "fibonacci(20) = " << fibonacci(20) << endl;
    cout << "fibonacci(30) = " << fibonacci(30) << endl;
    cout << "fibonacci(35) = " << fibonacci(35) << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main

// função fibonacci recursiva
unsigned long fibonacci(unsigned long number)
{
    if ((number == 0) || (number == 1)) // casos básicos
        return number;
    else // passo de recursão
        return fibonacci(number - 1) + fibonacci(number - 2);
} // fim da função fibonacci