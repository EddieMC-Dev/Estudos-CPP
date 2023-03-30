// Exercise 6.3: 6_3.cpp
// Mostrando os exemplos de uso das funções matemáticas de cmath
// Autor: Edgard Mac Fadden
// Data: 20/03/2023
#include <iostream>
using std::cout;
using std::endl;
using std::fixed;

#include <cmath>
using std::ceil;  // arredonda x para o menor inteiro não menor que x
using std::cos;   // co-seno trigonométrico de x (x em radianos)
using std::exp;   // função exponencial e^x
using std::fabs;  // valor absoluto de x
using std::floor; // arrendonda x para o maior inteiro não maior que x
using std::fmod;  // resto de x/y como um número de ponto flutuante
using std::log;   // logaritmo natural de x (base e)
using std::log10; // logaritmo de x (base 10)
using std::pow;   // x elevado à potência y (x^y)
using std::sin;   // seno trigonométrico de x (x em radianos)
using std::sqrt;  // raiz quadrada de x (onde x é um valor não negativo)
using std::tan;   // tangente trigonométrica de x (x em radianos)

#include <iomanip>
using std::setprecision;

int main()
{
    cout << fixed << setprecision(2)
        << "ceil(x) --> ceil(9.2) = " << ceil(9.2) << endl
        << "ceil(x) --> ceil(-9.8) = " << ceil(-9.8) << endl 
        << "\ncos(x) --> cos(0.0) = " << cos(0.0) << endl
        << "\nexp(x) --> exp(1.0) = " << exp(1.0) << endl
        << "exp(x) --> exp(2.0) = " << exp(2.0) << endl
        << "\nfabs(x) --> fabs(5.1) = " << fabs(5.1) << endl
        << "fabs(x) --> fabs(0.0) = " << fabs(0.0) << endl
        << "fabs(x) --> fabs(-8.76) = " << floor(-8.76) << endl
        << "\nfloor(x) --> floor(9.2) = " << floor(9.2) << endl
        << "\nfmod(x, y) = fmod(2.6, 1.2) = " << fmod(2.6, 1.2) << endl
        << "\nlog(x) --> log(2.718282) = " << log(2.718282) << endl
        << "\nlog10(x) --> log10(10.0) = " << log10(10.0) << endl
        << "log10(x) --> log10(100.0) = " << log10(100.0) << endl
        << "\npow(x, y) --> pow(2, 7) = " << pow(2, 7) << endl
        << "pow(x, y) --> pow(9, .5) = " << pow(9, .5) << endl
        << "sin(x) --> sin(0.0) = " << sin(0.0) << endl
        << "sqrt(x) --> sqrt(9.0) = " << sqrt(9.0) << endl
        << "tan(x) --> tan(0.0) = " << tan(0.0) << endl;

    return 0;
}