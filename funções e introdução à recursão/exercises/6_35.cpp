// Exercise 6.35: 6_35.cpp
// Ensinando multiplicação
// Autor: Edgard Mac Fadden
// Data: 24/03/2023
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
    int n1, n2, solution, response, caseOption, option, level;
    int optionRandom = 0, hits = 0, misses = 0, responses = 0;

    srand(time(0)); 
    cout << "CTRL Z (windows) ou CRTL D (linux) para finalizar o programa: ";

    if (response = cin.get() != EOF)
    {
        response = -2;
        cout << "Opção 1 - Adição\nOpção 2 - Subtração\n"
            << "Opção 3 - Multiplicação\nOpção 4 - Divisão\n"
            << "Opção 5 - Aleatório\nSua opção: ";
        cin >> option;

        if (option == 5)
            optionRandom = 5;

        cout << "\nLevel 1 - números de um dígito\n"
            << "Level 2 - números de dois dígitos\n"
            << "Level escolhido: ";
        cin >> level;
    }

    do 
    {
        if (response == EOF)
            break;

        n1 = rand() % 11;
        n2 = rand() % 11;

        if (level == 2)
        {
            n1 = 10 + rand() % 89;
            n2 = 10 + rand() % 89;      
        }

        if (optionRandom == 5)
            option = 1 + rand() % 4;

        if (option == 1)
                solution = n1 + n2;
        else if (option == 2)
            solution = n1 - n2;
        else if (option == 3)
            solution = n1 * n2;
        else if (option == 4)
            solution = n1 / n2;     

        switch (option)
        {
            case 1:
                cout << "Quanto é " << n1 << " mais " << n2 << "? ";
                break;
            case 2:
                cout << "Quanto é " << n1 << " menos " << n2 << "? ";
                break;
            case 3:
                cout << "Quanto é " << n1 << " vezes " << n2 << "? ";
                break;
            case 4:
                cout << "Quanto é " << n1 << " dividido por " << n2 << "? ";
                break;
            default:
                break;
        }

        while (response != solution && response != EOF)
        {
            cin >> response;

            if (response != solution && response >= 0)
            {
                caseOption = 1 + rand() % 4;
                hits--;
                responses++;

                switch (caseOption)
                {
                    case 1:
                        cout << "Não. Tente novamente.";
                        break;
                    case 2:
                        cout << "Errado. Tente mais uma vez.";
                        break;
                    case 3:
                        cout << "Não desista!";
                        break;
                    case 4:
                        cout << "Não. Continue tentando.";
                    default:
                        break;
                }

                cout << endl;

                switch (option)
                {
                    case 1:
                        cout << "Quanto é " << n1 << " mais " << n2 << "? ";
                        break;
                    case 2:
                        cout << "Quanto é " << n1 << " menos " << n2 << "? ";
                        break;
                    case 3:
                        cout << "Quanto é " << n1 << " vezes " << n2 << "? ";
                        break;
                    case 4:
                        cout << "Quanto é " << n1 << " dividido por " << n2 << "? ";
                        break;
                    default:
                        break;
                }

                cout << endl;
            }     
            else if (response == EOF)
            {
                cout << "Encerrando programa..." << endl;
                break;
            }
            else    
            {
                hits++;
                responses++;
                caseOption = 1 + rand() % 4;

                switch (caseOption)
                {
                    case 1:
                        cout << "Muito bom!";
                        break;
                    case 2:
                        cout << "Excelente!";
                        break;
                    case 3:
                        cout << "Bom trabalho!";
                        break;
                    case 4:
                        cout << "Continue assim!";
                    default:
                        break;
                }

                cout << endl;
            }

            if (responses == 10)
            {
                if (hits < 8)
                {
                    cout << "\nPeça ao seu professor uma ajuda extra" << endl;
                    response = EOF;
                    break;
                }
            }  

        }
    } while (response != EOF);

    return 0;
}