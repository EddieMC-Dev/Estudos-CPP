// Exercise 7.15: 7_15.cpp
// Lendo 20 números diferentes (maiores que 9 e menores que 101)
// Autor: Edgard Mac Fadden
// Data: 03/04/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int arraySize = 20;
    int numbers[arraySize];
    bool condition = false;

    for (int number = 0; number < 20; number++)
    {
        cout << "Enter a number: ";
        cin >> numbers[number];

        if (numbers[number] < 10 || numbers[number] > 100)
            condition = true;
        else
        {
            for (int i = 0; i < 20; i++)
                if (numbers[number] == numbers[i] && number != i)
                {
                    condition = true;
                    break;
                }
        }

        if (condition)
        {
            cout << "Error!\n";
            condition = false;
            number--;
        }
        else
            cout << endl;
    }

    cout << "\nValue" << setw(10) << "Input\n";

    for (int value = 1; value <= 20; value++)
        cout << setw(5) << value << setw(9) << numbers[value - 1] << endl;

    return 0;
}
