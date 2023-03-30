// Exercise 6.34: 6_34.cpp
// Simulando lançamento de uma moeda
// Autor: Edgard Mac Fadden
// Data: 23/03/2023
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int flip(void);

int main()
{
    int heads = 0, tails = 0;

    srand(time(0));

    for (int lance = 1; lance <= 100; lance++)
    {
        if (flip())
        {
            cout << "Heads" << endl;
            heads++;
        }
        else
        {
            cout << "Tails" << endl;
            tails++;
        }
    }

    cout << "\nTails: " << tails << "\nHeads: " << heads << endl;
    return 0;
}

int flip(void)
{
    return rand() % 2;
}