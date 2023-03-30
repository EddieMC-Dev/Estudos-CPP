// Figura 6.24: fig06_24.cpp
// Funções sobrecarregadas.
#include <iostream>
using std::cout;
using std::endl;

// função square para valores int
int square(int x)
{
   cout << "square of integer " << x << " is ";
   return x * x;
} // fim da função square com argumento int

// função square para valores double
double square(double y)
{
   cout << "square of double " << y << " is ";
   return y * y;
}

int main()
{
   cout << square(7); // chama versão int
   cout << endl;
   cout << square(7.5); // chama versão double
   cout << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main