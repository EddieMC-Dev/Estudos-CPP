// Figura 2.5: fig02_05.cpp
// Programa de adição que exibe a soma de dois números.
#include <iostream> // permite ao programa realizar entrada e saida

// a funçao main inicia a execução do programa
int main()
{   
    // declarações de variável
    int number1;
    int number2;
    int sum;

    std::cout << "Enter first integer: "; // solicita dados ao usuário
    std::cin >> number1; // lê primeiro inteiro inserido pelo usuário em number1

    std::cout << "Enter second integer: "; // solicita dados ao usuário
    std::cin >> number2; // lê segundo inteiro inserido pelo usuário em number2

    sum = number1 + number2; // adiciona os números; armazena o resultado em sum

    std::cout << "Sum is " << sum << std::endl; // exibe sum; termina a linha

    return 0; // indica que o programa terminou com sucesso

} // fim da função main