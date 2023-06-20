//////////////////////////////////////////////
// Exercise 7.37: 7_37.cpp                  //
// Localizando o valor mínimo em um array   //
// Autor: Edgard Mac Fadden                 //  
// Data: 20/06/2023                         //
//////////////////////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int recursiveMinimum(vector<int> &, int, int initialIndex = 0);

int main()
{
    vector<int> numbers(8);

    cout << "Numbers: ";

    for (size_t i = 0; i < numbers.size(); i++ )
    {
        cin >> numbers[i];
    }

    cout << "\nLowest number: " << recursiveMinimum(numbers, 7) << endl;

    return 0;    
}

int recursiveMinimum(vector<int> &vectorNumbers, int finalIndex, int initialIndex)
{
    static int minValue = vectorNumbers[initialIndex];

    if (finalIndex == initialIndex)
    {
        if (vectorNumbers[initialIndex] < minValue)
            minValue = vectorNumbers[initialIndex];

        return minValue;
    }
    else if (vectorNumbers[initialIndex] < minValue)
        minValue = vectorNumbers[initialIndex];

    return recursiveMinimum(vectorNumbers, finalIndex, (initialIndex + 1));
}