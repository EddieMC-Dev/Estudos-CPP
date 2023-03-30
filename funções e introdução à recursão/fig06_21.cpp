// Figura 6.21: fig06_21.cpp
// As referências devem ser inicializadas.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int x = 3;
   int &y; // Erro: y deve ser inicializado

   cout << "x = " << x << endl << "y = " << y << endl;
   y = 7;
   cout << "x = " << x << endl << "y = " << y << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main