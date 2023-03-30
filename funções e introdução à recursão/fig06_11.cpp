// Figura 6.11: fig06_11.cpp
// Simulação do jogo de dados craps.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <cstdlib> // contém protótipos para funções srand e rand
using std::rand;
using std::srand;

#include <ctime> // contém protótipos para a função time
using std::time;

int runGame(void); // Função que executa o jogo 
int rollDice(); // lança o dado, calcula e exibe a soma

int main()
{
   int bankBalance = 1000;
   int wager, result;

   do
   {
      cout << "Enter a wager: ";
      cin >> wager;

      if (wager > bankBalance)
         cout << "Invalid wager\n";
   } while (wager > bankBalance);
   
   result = runGame();

   if (result == 2)
   {
      bankBalance -= wager;
      cout << "Sorry. You busted!\n"
         << "Bank balance: " << bankBalance << endl;
   }
   else
   {
      bankBalance += wager;
      cout << "Bank balance: " << bankBalance << endl;
   }

   return 0; // indica terminação bem-sucedida
} // fim de main

// lança os dados, calcula a soma e exibe os resultados
int rollDice()
{
   // seleciona valores aleatórios do dado
   int die1 = 1 + rand() % 6; // primeiro lançamento do dado
   int die2 = 1 + rand() % 6; // segundo lançamento do dado

   int sum = die1 + die2; // calcula a soma de valores do dados

   // exibe os resultados desse lançamento
   cout << "Player rolled " << die1 << " + " << die2
      << " = " << sum << endl;
   return sum; // fim da função rollDice
} // fim da função rollDice

int runGame(void)
{
   // enumeração com constantes que representam o status do jogo
   enum Status {CONTINUE, WON, LOST}; // todas as maiúculas em constantes

   int dialogs; // diálogos pro jogo
   int myPoint; // pontos se não ganhar ou perder na primeira rolagem
   Status gameStatus; // pode conter CONTINUE, WON ou LOST

   // forna aleatório o gerador de número aleatório utilizando a hora atual
   srand(time(0));

   int sumOfDice = rollDice(); // primeira rolagem dos dados

   // determina status e pontuação do jogo (se necessário) com base no primeiro lançamento de dados
   switch (sumOfDice)
   {
      case 7: // ganha com 7 no primeiro lançamento
      case 11: // ganha com 11 no primeiro lançamento
         gameStatus = WON;
         break;
      case 2: // perde com 2 no primeiro lançamento
      case 3: // perde com 3 no primeiro lançamento
      case 12: // perde com 12 no primeiro lançamento
         gameStatus = LOST;
         break;
      default: // não ganhou nem perdeu, portanto registra a pontuação
         gameStatus = CONTINUE; // jogo não terminou
         myPoint = sumOfDice; // informa a pontuação
         cout << "Point is " << myPoint << endl;
         break; // opcional no final do switch
   } // fim de switch

   // enquant o jogo não estiver completo
   while (gameStatus == CONTINUE) // nem WON nem LOST
   {
      dialogs = 1 + rand() % 3;

      switch (dialogs)
      {
      case 1:
         cout << "Oh, you're going for broke, huh?\n";
         break;
      case 2:
         cout << "Aw c’mon, take a chance!\n";
         break;
      case 3:
         cout << "“You’re up big. Now’s the time to cash in your chips!\n";
         break;
      default:
         break;
      }

      sumOfDice = rollDice(); // lança os dados novamente

      // determina o status do jogo
      if (sumOfDice == myPoint) // vitória por pontuação
         gameStatus = WON;
      else
         if (sumOfDice == 7) // perde obtendo 7 antes de atingir a pontuação
            gameStatus = LOST;
   } // fim do while

   // exibe uma mensagem ganhou ou perdeu
   if (gameStatus == WON)
   {
      cout << "Player wins" << endl;
      return WON;
   }
   else
   {
      cout << "Player loses" << endl;
      return LOST;
   } 
}