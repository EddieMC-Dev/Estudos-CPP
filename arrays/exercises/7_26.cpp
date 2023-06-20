// Exercise 7.26: 7_26.cpp
// Problema das oito rainhas
// Autor: Edgard Mac Fadden
// Data: 03/06/2023

#include <iostream>
using std::cout; // objeto de saída de fluxo

int main()
{
    // inicializa tudo que é necessário
    const int rows = 8, columns = 8; // linhas e colunas são constantes
    int board[rows][columns] = {{0}}; // tabuleiro é composto por 8 linhas e 8 colunas.
    int accessibility[rows][columns] = {{22, 22, 22, 22, 22, 22, 22, 22},  // grau inicial de acessibilidade
                                        {22, 24, 24, 24, 24, 24, 24, 22},  // de cada casa no tabuleiro
                                        {22, 24, 26, 26, 26, 26, 24, 22},
                                        {22, 24, 26, 28, 28, 26, 24, 22},
                                        {22, 24, 26, 28, 28, 26, 24, 22},
                                        {22, 24, 26, 26, 26, 26, 24, 22},
                                        {22, 24, 24, 24, 24, 24, 24, 22},
                                        {22, 22, 22, 22, 22, 22, 22, 22}};

    int currentRow;
    int currentColumn;

    for (int queen = 0, queens = 8; queen < queens; queen++) // 8 damas são colocadas no tabuleiro, uma por vez.
    {   if (queen != 0)
        {
            // Encontra a casa com menor controle de casas do tabuleiro
            int lowerAccess = 29; // define o menor acesso

            for (int row = 0; row < rows; row++) // acessa todas as linhas
            {   
                for (int column = 0; column < columns; column++) // acessa todas as colunas
                {
                    if (lowerAccess > accessibility[row][column] &&  // verifica se há um grau de acessibilidade menor
                        board[row][column] == 0) // e se a casa correspondente está desocupada
                    {
                        lowerAccess = accessibility[row][column]; // o menor grau passa a ser o mesmo da casa
                        currentRow = row; // guardando a linha da casa
                        currentColumn = column; // guardando a coluna da casa
                    }
                }

            }
        }
        else
        {
            currentRow = 5;
            currentColumn = 0;
        }

        board[currentRow][currentColumn] = 1; // Indica que a dama ocupa essa casa no tabuleiro
        accessibility[currentRow][currentColumn] = 0; // Acessibilidade zerada

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

        // Reduz o grau de acessibilidade das casas vazias

        for (int row = 0; row < rows; row++)
        {
            for (int column = 0; column < columns; column++)
            {
                if (board[row][column] == 2 && accessibility[row][column] != 0)
                {
                    accessibility[row][column] = 0;
                    
                    for (int r = 0; r < rows; r++)
                    {
                        if (board[r][column] == 0)
                            accessibility[r][column]--;
                    }

                    for (int c = 0; c < columns; c++)
                    {
                        if (board[row][c] == 0)
                            accessibility[row][c]--;
                    }

                    int r = row - 1;

                    for (int c = column + 1; c < columns; c++)
                    {
                        if (r < 0) 
                            break;
                        else if (board[r][c] == 0)
                            accessibility[r][c]--;

                        r--;
                    }

                    r = row + 1;

                    for (int c = column + 1; c < columns; c++)
                    {
                        if (r > 7) 
                            break;
                        else if (board[r][c] == 0)
                            accessibility[r][c]--;

                        r++;
                    }

                    r = row - 1;

                    for (int c = column - 1; c >= 0; c--)
                    {
                        if (r < 0) 
                            break;
                        else if (board[r][c] == 0)
                            accessibility[r][c]--;

                        r--;
                    }

                    r = row + 1;

                    for (int c = column - 1; c >= 0; c--)
                    {
                        if (r > 7) 
                            break;
                        else if (board[r][c] == 0)
                            accessibility[r][c]--;

                        r++;
                    }

                }
            }
        }

        // Exibe o tabuleiro de maneira elegante

        cout << "---------------------------------\n";

        for (int row = 0; row < rows; row++)
        {
            cout << "|";

            for (int column = 0; column < columns; column++)
            {
                if (board[row][column] == 0)
                    cout << "   |";
                else if (board[row][column] == 1)
                    cout << " Q |";
                else if (board[row][column] == 2)
                    cout << " * |";
            }

            cout << "\n---------------------------------\n";
        }
    }

    return 0;
}