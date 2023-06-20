// Exercise 7.20: 7_20.cpp
// Sistema de reservas de passagens áreas
// Autor: Edgard Mac Fadden
// Data: 04/04/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
    const int totalSeats = 11; // há somente 10 assentos no vôo
    int freeSeats = 10; // assentos disponíveis
    int seats[totalSeats] = {0}; // 0 representa que todos os 10 assentos estão vazios 
    int option; // Opção para assento de primeira classe (1) e para econômica (2)
    int singleSeat; // Armazena o número do assento da pessoa
    bool fullSeats = false; // Se em um dos tipos de vôos não tiver assento, um valor boolean indica isso
    char response; // resposta pra saber se o passageiro quer mudar de classe

    while (freeSeats != 0)
    {
        cout << "\nFree seats\n\n";

        // Gera a saída dos assentos disponíveis
        for (int seat = 1; seat < totalSeats; seat++)
        {
            cout << setw(2) << seat << " [" << seats[seat] << "]     ";

            if (seat % 2 == 0)
                cout << endl;  
        }

        cout << "\nPlease type 1 for \"Economy Class\""
            << "\nPlease type 2 for \"First Class\""
            << "\nType: ";
        cin >> option;

        do 
        {
            if (option == 1)
            {
                for (int seat = 1; seat <= 5; seat++)
                    if (seats[seat] == 0)
                    {
                        singleSeat = seat;
                        seats[seat]++;
                        freeSeats--;
                        fullSeats = false;
                        break;
                    } 
                    else if (seat == 5)
                        fullSeats = true;
            }
            else if (option == 2)
            {
                for (int seat = 6; seat <= 10; seat++)
                    if (seats[seat] == 0)
                    {
                        singleSeat = seat;
                        seats[seat]++;
                        freeSeats--;
                        fullSeats = false;
                        break;
                    }
                    else if (seat == 10)
                        fullSeats = true;
            }

            if (fullSeats && freeSeats != 0) // Os assentos de uma classe estão lotados
            {
                cout << "Your class seats are full.\n"
                    << "Do you want to change classes? [Y/N] ";
                cin >> response;

                if (response == 'Y')
                    option = (option == 1)?(2):(1);
                else
                {
                    cout << "Next flight leaves in 3 hours.\n\n";
                    fullSeats = false;
                }
            }
            else // configura a saída de um bilhete de passagem
            {
                cout << "\nTICKET\n";

                if (option == 1)
                    cout << "Type: Economy Class\n";
                else 
                    cout << "Type: First Class\n";

                cout << "Seat number: " << singleSeat << endl << endl;
            }
                
        } while (fullSeats);
    } // termina o loop se não tiver assentos disponíveis

    cout << "\n\nAll available seats have been filled.\n";
    return 0;
}