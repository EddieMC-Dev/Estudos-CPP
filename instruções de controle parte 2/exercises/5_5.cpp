// Exercise 5.5: 5_5.cpp
// Calculando a soma total de um número específico de valores inteiros
// Autor: Edgard Mac Fadden
// Data: 12/02/2023 --> 14:58

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
   int size; // quantidade de valores para serem digitados
   int number; // número a ser digitado
   int sum = 0; // soma de todos os números digitados

   cout << "Digite a quantidade de valores inteiros que serão somados: ";
   cin >> size;

   for (int counter = 1; counter <= size; counter++)
   {
      cout << "Insira um valor inteiro: ";
      cin >> number;
      sum += number;
   }

   cout << "Total da soma: " << sum << endl;
   return 0;
}