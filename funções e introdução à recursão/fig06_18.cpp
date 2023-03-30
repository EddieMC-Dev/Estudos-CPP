// Figura 6.18: fig06_18.cpp
// Utilizando uma função inline para calcular o volume de um cubo.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// Definição da função inline cube. A definição de função aparece antes 
// de a função ser chamada, então um protótipo de função não é necessário.
// A primeira linha da definição de função atua como protótipo.
inline double cube(const double side)
{
   return side * side * side; // calcula o cubo
} // fim da função cube

int main()
{
   double sideValue; // armazena o valor inserido pelo usuário
   cout << "Enter the side length of your cube: ";
   cin >> sideValue; // lê o valor fornecido pelo usuário

   // calcula o cubo de sideValue e exibe o resultado
   cout << "Volume of cube with side "
      << sideValue << " is " << cube(sideValue) << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main