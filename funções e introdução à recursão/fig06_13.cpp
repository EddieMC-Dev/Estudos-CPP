// Figura 6.13: fig06_13.cpp
// Função square utilizada para demonstrar a pilha
// de chamadas de função e os registros de ativação.
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int square(int); // protótipo para a função square

int main()
{
   int a = 10; // valor para square (variável automática local em main)

   cout << a << " squared: " << square(a) << endl; // exibe o quadrado de um int
   return 0; // indica terminação bem-sucedida
} // fim de main

// retorna o quadrado de um inteiro
int square(int x) // x é uma variável local
{
   return x * x; // calcula square e retorna o resultado
} // fim da função square