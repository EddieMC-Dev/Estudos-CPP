// Exercise 13
// Mostrando o valor inteiro de vários caracteres
#include <iostream>

using std::cout;
using std::endl;

int main()
{
    cout << static_cast <int> ('A') << endl; // imprime o valor inteiro do caractere
    cout << static_cast <int> ('B') << endl;
    cout << static_cast <int> ('C') << endl;
    cout << static_cast <int> ('a') << endl;
    cout << static_cast <int> ('b') << endl;
    cout << static_cast <int> ('c') << endl;
    cout << static_cast <int> ('O') << endl;
    cout << static_cast <int> ('1') << endl;
    cout << static_cast <int> ('2') << endl;
    cout << static_cast <int> ('$') << endl;
    cout << static_cast <int> ('*') << endl;
    cout << static_cast <int> ('+') << endl;
    cout << static_cast <int> ('/') << endl;
    cout << static_cast <int> (' ') << endl;

    return 0;
}