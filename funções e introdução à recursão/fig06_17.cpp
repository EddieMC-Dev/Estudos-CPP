// Figura 6.17: fig06_17.cpp
// Funções que não aceitam argumentos.
#include <iostream>
using std::cout;
using std::endl;

void function1(); // função que não aceita argumentos
void function2(void); // função que não aceita argumentos

int main()
{
   function1(); // chama function1 sem argumentos
   function2(); // chama function2 sem argumentos
   return 0; // indica terminação bem-sucedida
} // fim de main

// function1 utiliza uma lista de parâmetros vazia para especificar que
// a função não recebe argumentos
void function1()
{
   cout << "function1 takes no arguments" << endl;
} // fim de function1

// function2 utiliza uma lista de parâmetros void para especificar que
// a função não recebe argumentos
void function2(void)
{
   cout << "function2 also takes no arguments" << endl;
} // fim de function2