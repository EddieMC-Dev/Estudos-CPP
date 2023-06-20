// Exercise 7.25: 7_25.cpp
// O Passeio do Cavalo (xadrez) pela abordagem da força bruta
// Autor: Edgard Mac Fadden
// Data: 20/04/2023

#include <iostream>
using std::cout; 
using std::cin;
using std::endl;

#include <cstdlib>
using std::srand;
using std::rand;

#include <ctime>
using std::time;

int main()
{
    const int rows = 8, columns = 8, moves = 8;
    int board[rows][columns] = {{0}};
    int vertical[moves] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int horizontal[moves] = {2, 1, -1, -2, -2, -1, 1, 2};

    int currentRow = 7;
    int currentColumn = 0;
    int moveNumber;

    const int tourSize = 65;
    unsigned long int frequencies[tourSize] = {0};
    int counter;

    srand(time(0));

    while (true)
    {
        counter = 0;
        currentRow = 7;
        currentColumn = 0;

        for (int move = 1; move <= 63; move++)
        {
            board[currentRow][currentColumn] = 1;
            moveNumber = 0 + rand() % 8;
            currentRow += vertical[moveNumber];
            currentColumn += horizontal[moveNumber];

            while ((currentRow < 0 || currentRow > 7) ||
                   (currentColumn < 0 || currentColumn > 7))
            {
                currentRow -= vertical[moveNumber];
                currentColumn -= horizontal[moveNumber];
                moveNumber = 0 + rand() % 8;
                currentRow += vertical[moveNumber];
                currentColumn += horizontal[moveNumber];
            } 
        }

        for (int row = 0; row < rows; row++)
        {
            for (int column = 0; column < columns; column++)
            {
                if (board[row][column] == 1)
                {
                    counter++;
                    board[row][column] = 0;
                }
                else if (row == currentRow && column == currentColumn)
                {
                    counter++;
                    board[row][column] = 0;
                }
            }
        }

        frequencies[counter]++;

        if (counter == 64)
            break;
    }

    cout << "\a";

    for (int frequency = 0; frequency < tourSize; frequency++)
    {
        cout << frequency << ": " << frequencies[frequency] << endl;
    }

    return 0;
}