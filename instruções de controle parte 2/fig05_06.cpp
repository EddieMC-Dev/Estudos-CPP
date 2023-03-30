// Figura 5.6: fig05_06.cpp
// Cálculos de juros compostos com for.
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setw; // permite que o programa configure a largura de um campo
using std::setprecision;

#include <cmath> // biblioteca de matemática C++ padrão
using std::pow; // permite ao programa utilizar a função pow

int main()
{
   int amount; // quantia em depósito ao fim de cada ano
   int dollar; // o dolar de amount
   int cent1; // centavo da primeira casa decimal
   int cent2; // centavo da segunda casa decimal
   int principal = 100000; // quantia inicial antes dos juros
   int rate = 5; // taxa de juros

   // exibe cabeçalhos
   cout << "Year" << setw(21) << "Amount on deposit" << endl;

   // configura o formato de número de ponto flutuante
   cout << fixed << setprecision(2);

   for (rate; rate <= 10; rate += 1)
   {
      // calcula quantia de depósito para cada um dos dez anos
      for (int year = 1; year <= 10; year++)
      {
         // calcula nova quantia durante ano especificado
         amount = principal * pow((100 + rate) / 100.0, year);

         dollar = amount / 100; // obtém a parte dolar de amount
         cent1 = ((((amount % 100000) % 10000) % 1000) % 100) / 10;
         cent2 = ((((amount % 100000) % 10000) % 1000) % 100) % 10;

         // exibe o ano e a quantia
         cout << setw(4) << year << setw(18) << dollar << '.' << cent1 
            << cent2 << endl;

      } // fim do for

      cout << endl;
   }

   return 0; // indica terminação bem-sucedida
} // fim de main