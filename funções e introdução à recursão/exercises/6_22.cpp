// Exercise 6.22: 6_22.cpp
// Desenhando um quadrado
// Autor: Edgard Mac Fadden
// Data: 21/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

void drawSquare(int, char);

int main()
{
    int side;
    char character;

    cout << "Side: ";
    cin >> side;
    cout << "Character: ";
    cin >> character;

    drawSquare(4, character);
    return 0;
}

void drawSquare(int side, char fillCharacter)
{
    for (int row = 1; row <= side; row++)
    {
        for (int column = 1; column <= side; column++)
            cout << fillCharacter;

        cout << endl;
    }
}