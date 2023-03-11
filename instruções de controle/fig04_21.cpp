// Figura 4.21: fig04_21.cpp
// Pré-incrementando e pós-incrementando.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int c;

   // demonstra pós-incremento
   c = 5; // atribui 5 à variável c
   cout << c << endl; // imprime 5
   cout << c++ << endl; // imprime 5 então pós-incrementa
   cout << c << endl; // imprime 6

   cout << endl; // pula uma linha

   // demonstra pré-incremento
   c = 5; // atribui 5 à variável c
   cout << c << endl; // imprime 5
   cout << ++c << endl; // pré-incrementa e então imprime 6
   cout << c << endl; // imprime 6
   return 0; // indica terminação bem-sucedida
} // fim de main