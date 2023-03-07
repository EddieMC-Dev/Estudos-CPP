// Exercise 2.27: 2_27.cpp
// Mostrando números equivalentes a caracteres
// Autor: Edgard Mac Fadden
// Data: 02/03/2023 --> 17:17
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    char letter;

    cout << "Digite uma letra ou um símbolo: ";
    cin >> letter;
    cout << letter << ": " << static_cast <int> (letter);

    return 0;

}