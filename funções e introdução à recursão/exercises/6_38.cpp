// Exercise 6.38: 6_38.cpp
// Jogo de adivinhação de número
// Autor: Edgard Mac Fadden
// Data: 24/03/2023
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{
    int secretNumber, numericalAnswer, responses;
    char response; 

    srand(time(0));

    do 
    {
        secretNumber = 1 + rand() % 1000;
        responses = 0;

        do 
        {
            cout << "\nTenho um número entre 1 e 1000."
                << "\nVocê consegue adivinhá-lo?"
                << "\nDigite sua primeira suposição: ";
            cin >> numericalAnswer;
            responses++;

            if (numericalAnswer == secretNumber)
                cout << "Excelente! Você adivinhou o número!" << endl;
            else if (numericalAnswer > secretNumber)
                cout << "Muito alto. Tente novamente." << endl;
            else if (numericalAnswer < secretNumber)
                cout << "Muito baixo. Tente novamente." << endl;

        } while (numericalAnswer != secretNumber);

        if (responses <= 10)
        {
            cout << "Você sabe o segredo ou teve sorte!" << endl;

            if (responses == 10)
                cout << "Ahah! Você sabe o segredo!" << endl;
        }
        else 
            cout << "Você deveria ser capaz de fazer melhor!\n";

        cout << "Quer jogar de novo (s ou n)? ";
        cin >> response;
    } while (response != 'n');
     
    return 0;
}