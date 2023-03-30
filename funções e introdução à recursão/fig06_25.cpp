// Figura 6.25: fig06_25.cpp
// Desfiguração de nomes.

// função square para valores int
int square(int x)
{
   return x * x;
} // fim da função square

// função square para valores double
double square(double y)
{
   return y * y;
} // fim da função square

// função que recebe argumentos dos tipos
// int, float, char e int &
void nothing1(int a, float b, char c, int &d)
{
   // esvazia o corpo da função
} // fim da função nothing1

// função que recebe argumentos dos tipos
// char, int, float & e double &
int nothing2(char a, int b, float &c, double &d)
{
   return 0;
} // fim da função nothing2

int main()
{
   return 0; // indica terminação bem-sucedida
} // fim de main

/*
Resultado do compilador Borland C++:
@square$qi
@square$qd
@nothing1$qifcri
@nothing2$qcirfrd
_main
*/