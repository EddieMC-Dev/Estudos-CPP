// Exercise 6.43: 6_43.cpp
// Resolvendo iterativamente o problema das Torres de Hanói com 3 discos
// Autor: Edgard Mac Fadden
// Data: 27/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cmath>
using std::pow;

void solution(int, int, int, int);

int main()
{
    int discs;

    cout << "Discs: ";
    cin >> discs;

    solution(discs, 1, 3, 2);
    return 0;
}

void solution(int discs, int startingPin, int endPin, int storagePin)
{
    int moves = static_cast<int>((pow(2, discs) - 1) / 2) + 1;  
    int move = moves; // Um movimento de padrão repetitivo
    int change = 1; // valor de alteração de exibição

    for (moves; moves >= 1; moves--)
    {
        if (moves == move)
        {
            cout << startingPin << " --> " << endPin << endl;
            move -= 2;
        }
        else if (change == 1)
        {
            cout << startingPin << " --> " << storagePin << endl;
            cout << endPin << " --> " << storagePin << endl; 
            change *= -1;
        }
        else if (change == -1)
        {
            cout << storagePin << " --> " << startingPin << endl;
            cout << storagePin << " --> " << endPin << endl;
            change *= -1;
        }
    }
    
    cout << startingPin << " --> " << endPin;
}