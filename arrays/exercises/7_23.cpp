// Exercise 7.23: 7_23.cpp
// Gráfico de tartagura
// Autor: Edgard Mac Fadden
// Data: 06/04/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    enum Status {UP = 1, DOWN, RIGHT, LEFT, LUP = 10, LDOWN, RUP, RDOWN}; // posição da caneta
    Status pen = UP; // a caneta começa virada pra cima

    // chão que simula o gráfico de tartaruga
    int row = 0, column = 0;
    const int rows = 20;
    const int columns = 20;
    int floor[rows][columns] = {{0}};

    // atribuição de comandos a serem executados
    int command = 0, commandActived;
    const int commandsSize = 24;
    int commands[commandsSize][3] =
        {{2}, {5, 12}, {3}, {5, 12}, 
         {7, 12, 4}, {7, 13, 4}, {7, 11, 4}, {7, 10, 4},
         {2}, {5, 9}, {4}, {5, 12}, {1}, {5, 20},
         {7, 13, 15}, {2}, {5, 6}, {7, 10, 4}, 
         {7, 13, 4}, {7, 12, 4}, {1}, {5, 6}, {6}, {9}};

    // executando os comandos
    while (commands[command][0] != 9)
    {
        commandActived = commands[command][0];

        switch (commandActived)
        {
            case 1: // Aponta pra cima
                pen = UP;
                break;
            case 2: // Aponta pra baixo
                pen = DOWN;
                break;
            case 3: // Aponta pra direita
                pen = RIGHT;
                break;
            case 4: // Aponta pra esquerda
                pen = LEFT;
                break;
            case 5: // Movimenta em linha reta pra cima, baixo, esquerda ou direita
                for (int move = 1; move < commands[command][1]; move++)
                {
                    floor[row][column] = 1;

                    if (pen == UP)
                        row--;
                            
                    if (pen == DOWN)
                        row++;

                    if (pen == LEFT)
                        column--;

                    if (pen == RIGHT)
                        column++;               
                }

                break;
            case 6: // Exibe o tabuleiro
                for (int line = 0; line < rows; line++)
                {
                    for (int col = 0; col < columns; col++)
                    {
                        if (floor[line][col] == 1)
                            cout << " ";
                        else
                            cout << "█";
                    }

                    cout << endl;
                }

                break;
            default:
                break;
            case 7: // Esse comando serve pra desenhar diagonais pra qualquer lado
                floor[row][column] = 1;

                if (commands[command][1] == 10)
                    pen = LUP;
                else if (commands[command][1] == 11)
                    pen = LDOWN;
                else if (commands[command][1] == 12)
                    pen = RUP;
                else if (commands[command][1] == 13)
                    pen = RDOWN;

                for (int move = 1; move < commands[command][2]; move++)
                {
                    if (pen == LUP)
                    {
                        row--;
                        column--;
                    }
                    else if (pen == LDOWN)
                    {
                        row++;
                        column--;
                    }
                    else if (pen == RUP)
                    {
                        row--;
                        column++;
                    }
                    else if (pen == RDOWN)
                    {
                        row++;
                        column++;
                    }

                    floor[row][column] = 1;
                }
        }

        command++; // passa pro próximo comando
    }

    return 0;
}