// Exercise 6.33: 6_33.cpp
// Avaliando pontos de acordo com a média do aluno
// Autor: Edgard Mac Fadden
// Data: 23/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int qualityPoints(int);

int main()
{
    int average;

    cout << "Enter average: ";
    cin >> average;

    cout << "Points: " << qualityPoints(average) << endl;
    return 0;
}

int qualityPoints(int average)
{
    if (average >= 90)
        return 4;
    else if (average < 90 && average >= 80)
        return 3;
    else if (average < 80 && average >= 70)
        return 2;
    else if (average < 70 && average >= 60)
        return 1;
    else if (average < 60)
        return 0;
}