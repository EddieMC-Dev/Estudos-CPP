// Fig. 1.6: figOlO6.cpp
// Programa de adição
#include <iostream>

int main()
{
    int integer1, integer2, sum;

    std::cout << "Digite o primeiro inteiro:\n"; // prompt
    std::cin >> integer1; // lê um inteiro
    std::cout << "Digite o segundo inteiro:\n"; // prompt
    std::cin >> integer2; // lê um inteiro
    sum = integer1 + integer2;
    std::cout << "A soma é " << sum << std::endl;

    return 0; // indica que o programa terminou com êxito
}