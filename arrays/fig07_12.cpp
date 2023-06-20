// Figura 7.12: fig07_12.cpp
// Tratando arrays de caracteres como strings.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    char string1[20]; // reserva 20 caracteres
    char string2[] = "string literal"; // reserva 15 caracteres

    // lê a string fornecida pelo usuário para o array string1
    cout << "Enter the string \"hello there\": ";
    cin >> string1; // lê "hello" [o espaço termina a entrada]

    // gera a saída de strings
    cout << "string1 is: " << string1 << "\nstring2 is: " << string2;

    cout << "\nstring1 with spaces between characters is:\n";

    // caracteres de saída até que caractere nulo é alcançado
    for (int i = 0; string1[i] != '\0'; i++)
        cout << string1[i] << ' ';

    cin >> string1; // lê "there"
    cout << "\nstring1 is: " << string1 << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main