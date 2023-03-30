// Figura 6.12: fig06_12.cpp
// Um exemplo de escopo.
#include <iostream>
using std::cout;
using std::endl;

void useLocal(void); // protótipo de função
void useStaticLocal(void); // protótipo de função
void useGlobal(void); // protótipo de função

int x = 1; // variável global

int main()
{
   int x = 5; // variável local para main

   cout << "local x in main's outer scope is " << x << endl;

   { // inicia novo escopo
      int x = 7; // oculta x no escopo externo

      cout << "local x in main's inner scope is " << x << endl;
   } // fim do novo escopo

   cout << "local x in main's outer scope is " << x << endl;

   useLocal(); // useLocal tem uma variável local x
   useStaticLocal(); // useStaticLocal tem x estático local;
   useGlobal(); // useGlobal utiliza x global
   useLocal(); // useLocal reinicializa seu x local
   useStaticLocal(); // x estático local retém seu valor anterior
   useGlobal(); // x global também retém seu valor

   cout << "\nLocal x in main is " << x << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main

// useLocal reinicializa a variável local x durante cada chamada
void useLocal(void)
{
   int x = 25; // inicializada toda vez que useLocal é chamada

   cout << "\nlocal x is " << x << " on entering useLocal" << endl;
   x++;
   cout << "local x is " << x << " on exiting useLocal" << endl;
} // fim da função useLocal

// useStaticLocal inicializa a variável estática local x somente
// na primeira vez em que a função é chamada; o valor de x é salvo
// entre as chamadas a essa função
void useStaticLocal(void)
{
   static int x = 50; // inicializada na primeira vez em que useStaticLocal é chamada

   cout << "\nlocal static x is " << x << " on entering useStaticLocal"
      << endl;
   x++;
   cout << "local static x is " << x << " on exiting useStaticLocal"
      << endl;
} // fim da função useStaticLocal

// useGlobal modifica a variável global x durante cada chamada
void useGlobal(void)
{
   cout << "\nglobal x is " << x << " on entering useGlobal" << endl;
   x *= 10;
   cout << "global x is " << x << " on exiting useGlobal" << endl;
} // fim da função useGlobal