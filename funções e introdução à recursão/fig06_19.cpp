// Figura 6.19: fig06_19.cpp
// Comparando a passagem por valor e a passagem por referência com as referências.
#include <iostream>
using std::cout;
using std::endl;

int squareByValue(int); // protótipo de função (passagem por valor)
void squareByReference(int &); // protótipo de função (passagem por referência)

int main()
{
   int x = 2; // valor para square utilizando squareByValue
   int z = 4; // valor para square utilizando squareByReference

   // demonstra squareByValue
   cout << "x = " << x << " before squareByValue\n";
   cout << "Value return by squareByValue: "
      << squareByValue(x) << endl;
   cout << "x = " << x << " after squareByValue\n" << endl;

   // demonstra squareByReference
   cout << "z = " << z << " before squareByReference" << endl;
   squareByReference(z);
   cout << "z = " << z << " after squareByReference" << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main

// squareByValue multiplica um número por ele próprio, armazena o
// resultado em number e retorna o novo valor de number
int squareByValue(int number)
{
   return number *= number; // argumento do chamador não modificado
} // fim da função squareByValue

// squareByReference multiplica numberRef por si mesmo e armazena o resultado
// na variável à qual numberRef se refere na função main
void squareByReference(int &numberRef)
{
   numberRef *= numberRef; // argumento do chamador modificou
} // fim da função squareByReference