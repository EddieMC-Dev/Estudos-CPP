// Exercise 7.27: 7_27.cpp
// Problema das oito rainhas: força bruta aleatória e exaustiva
// Autor: Edgard Mac Fadden
// Data: 03/06/2023

#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    // inicializa variáveis
    const int rows = 8, columns = 8;
    int board[rows][columns] = {{0}};

    int currentRow, currentColumn;
    const int solutions = 93;

    int solutionsArray[solutions][64]; // armazena todas as soluções possíveis

    // Aleatoriza os números da função rand
    srand(time(0));
    
    // Exibe todas as 92 solutions
    for (int solution = 1; solution < solutions; solution++)
    {
        while (true)
        {
            // Insere a dama de maneira aleatória pelo tabuleiro
            do {
                currentRow = 0 + rand() % 8;
                currentColumn = 0 + rand() % 8;
            } while (board[currentRow][currentColumn] != 0);

            board[currentRow][currentColumn] = 1;

            // Elimina as casas controladas pela dama 
            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    if (row == currentRow && column == currentColumn) 
                    { 
                        // A condicional ativa a função de marcas todas as casas ocupadas pela dama nas diagonais
                        int r = row + 1;
                    
                        for (int c = column + 1; c < columns; c++)
                        {
                            if (r > 7)
                                break;

                            board[r][c] = 2;
                            r++;
                        }

                        r = row - 1;

                        for (int c = column - 1; c >= 0; c--)
                        {
                            if (r < 0)
                                break;

                            board[r][c] = 2;
                            r--;
                        }

                        r = row + 1;

                        for (int c = column - 1; c >= 0; c--)
                        {
                            if (r > 7)
                                break;

                            board[r][c] = 2;
                            r++;
                        }

                        r = row - 1;

                        for (int c = column + 1; c < columns; c++)
                        {
                            if (r < 0)
                                break;

                            board[r][c] = 2;
                            r--;
                        }
                        }  // Condicional que marca as linhas e as colunas ocupadas pela dama
                        else if (row == currentRow || column == currentColumn)
                            board[row][column] = 2;
                    }
                }

            int queens = 0; // prepara o contador de damas
            int squaresNull = 0; // prepara o contador de casas vazias

            // Conta as damas e a quantidade de casas vazias
            
            for (int row = 0; row < rows; row++)
            {
                for (int column = 0; column < columns; column++)
                {
                    if (board[row][column] == 0)
                        squaresNull++;
                    else if (board[row][column] == 1)
                        queens++;
                }
            }

            if (queens == 8)
            {
                int squares = 1;
                int repetion = false;
                
                for (int row = 0; row < rows; row++)
                {
                    for(int column = 0; column < columns; column++)
                    {
                        solutionsArray[solution][squares] = board[row][column];
                        squares++;
                    } 
                }

                

                for (int sol = 1; sol < solutions; sol++)
                {
                    int movesCopied = 0;

                    for (int square = 0; square < 64; square++)
                    {
                        if (solutionsArray[sol][square] == solutionsArray[solution][square])
                            movesCopied++;
                    }

                    if (movesCopied == 64)
                    {
                        repetion = true;
                        break;
                    }
                }

                if (repetion)
                    break;
            }
            else if (squaresNull == 0) // Reinicia o tabuleiro pra outra tentativa
            {
                for (int row = 0; row < rows; row++)
                {
                    for (int column = 0; column < columns; column++)
                    {
                        board[row][column] = 0;
                    }
                }
            }
        }

        // Exibe tabuleiro

        cout << "\nSolution " << solution << endl;
        cout << "---------------------------------\n";

        for (int row = 0; row < rows; row++)
        {
            cout << "|";

            for (int column = 0; column < columns; column++)
            {
                if (board[row][column] == 2)
                    cout << " * |";
                else if (board[row][column] == 1)
                    cout << " Q |";
            } 

            cout << "\n---------------------------------\n";
        }

        for (int row = 0; row < rows; row++)
        {
            for (int column = 0; column < columns; column++)
            {
                board[row][column] = 0;
            }
        }
    }
}