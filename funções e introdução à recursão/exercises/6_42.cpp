// Exercise 6.42: 6_42.cpp
// Resolvendo recursivamente o problema das Torres de Hanói
// Autor: Edgard Mac Fadden
// Data: 25/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

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
    if (discs == 1)
        cout << startingPin << " --> " << endPin << endl;
    else
    {
        solution(discs - 1, startingPin, storagePin, endPin);
        cout << startingPin << " --> " << endPin << endl;    
        solution(discs - 1, storagePin, endPin, startingPin);
    }
}