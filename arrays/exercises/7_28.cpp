// Exercise 7.28: 7_28.cpp
// O Passeio fechado do Cavalo (xadrez)
// Autor: Edgard Mac Fadden
// Data: 04/06/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    const int rows = 8; // há 8 linhas no tabuleiro
    const int columns = 8; // há 8 colunas no tabuleiro
    int board[rows][columns] = {{0}}; // todas casas inicializadas como 0 no tabuleiro

    const int moves = 8; // o cavalo só possui 8 movimentos
    int horizontal[moves] = {2, 1, -1, -2, -2, -1, 1, 2};
    int vertical[moves] = {-1, -2, -2, -1, 1, 2, 2, 1};
    int currentRow = 7; // linha atual do cavalo
    int currentColumn = 0; // coluna atual do cavalo
    int resume; // Indica para o passeio continuar
    int moveNumber = 0; // representa o número de movimento do cavalo
    int moveComplete[2];
    int counter = 0; // contabiliza os movimentos realizados
    int options;

    int accessibility[rows][columns] = 
        {{2, 3, 4, 4, 4, 4, 3, 2},
         {3, 4, 6, 6, 6, 6, 4, 3},
         {4, 6, 8, 8, 8, 8, 6, 4},
         {4, 6, 8, 8, 8, 8, 6, 4},
         {4, 6, 8, 8, 8, 8, 6, 4},
         {4, 6, 8, 8, 8, 8, 6, 4},
         {3, 4, 9, 6, 6, 6, 4, 3},
         {9, 3, 4, 4, 4, 4, 3, 2}};
    int acessibilityNumber;

    do
    {
        // exibe o tabuleiro com o cavalo instalado
        cout << "---------------------------------\n";
        acessibilityNumber = 10;
        

        for (int row = 0; row < rows; row++)
        {
            cout << "|";

            for (int column = 0; column < columns; column++)
            {
                if (row == currentRow && column == currentColumn)
                    cout << " K |";    
                else
                {
                    for (int move = 0; move < moves; move++)
                    {
                        if (row == (vertical[move] + currentRow) &&
                            column == (horizontal[move] + currentColumn))
                        {
                            if (accessibility[row][column] < acessibilityNumber
                                && board[row][column] != 1)
                            {
                                moveNumber = move;
                                acessibilityNumber = 
                                        accessibility[row][column];        
                            }

                            cout <<
                                ((board[row][column] != 1)?("   |"):(" * |"));
                            break;
                        }
                        else if (move == 7)
                        {   
                            if (board[row][column] == 1)
                                cout << " * |";
                            else
                                cout << "   |";

                            break;
                        }
                    }    
                }     
            }

            cout << "\n---------------------------------\n";
        }

        options = 0;

        for (int move = 0; move < moves; move++)
        {
            moveComplete[0] = currentRow + vertical[move];
            moveComplete[1] = currentColumn + horizontal[move];

            if ((moveComplete[0] < 8) && (moveComplete[0] >= 0) &&
                (moveComplete[1] < 8) && (moveComplete[1] >= 0))
            {
                accessibility[moveComplete[0]][moveComplete[1]]--;  

                if (accessibility[moveComplete[0]][moveComplete[1]] == acessibilityNumber)
                    options++;
            }

            if (options > 1)
            {
                options = 1;
                
                for (int row = 0; row < rows; row++)
                {
                    for (int column = 0; column < columns; column++)
                    {    
                        for (int mv = 0; mv < moves; mv++)
                        {
                            if ((moveComplete[0] + vertical[mv] == row) &&
                                (moveComplete[1] + horizontal[mv] == column))
                            {
                                if (accessibility[row][column] < 
                                    acessibilityNumber && board[row][column] != 1)
                                {
                                    moveNumber = move;
                                    acessibilityNumber = 
                                            accessibility[row][column]; 
                                    
                                } 
                            }    

                        }
                    }
                }
            }
        }     

        board[currentRow][currentColumn] = (counter == 0)?(0):(1);
        currentRow += vertical[moveNumber];
        currentColumn += horizontal[moveNumber];
        counter++;
        
        cout << "Type something to resume: ";
        cin >> resume;

    } while (resume != -1);

    counter--;
    cout << "Moves:" << counter << endl;
    return 0;
}