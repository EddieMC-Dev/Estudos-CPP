// Figura 5.18: fig05_18.cpp
// Operadores lógicos
#include <iostream>
using std::cout;
using std::endl;
using std::boolalpha; // faz com que valores bool sejam impressos como "true" e "false"

int main()
{
   // cria a tabela-verdade para o operador && (E lógico)
   cout << boolalpha << "Logical AND (&&)"
      << "\nfalse && false: " << (false && false)
      << "\nfalse && true: " << (false && true)
      << "\ntrue && false: " << (true && false)
      << "\ntrue && true: " << (true && true) << "\n\n";

   // cria a tabela-verdade para o operador || (OU lógico)
   cout << "Logical OR (||)"
      << "\nfalse || false: " << (false || false)
      << "\nfalse || true: " << (false || true)
      << "\ntrue || false: " << (true || false)
      << "\ntrue || true: " << (true || true) << "\n\n";

   // cria a tabela-verdade para o operador ! (negação lógica)
   cout << "Logical NOT (!)"
      << "\n!false: " << (!false)
      << "\n!true: " << (!true) << endl;
   return 0; // indica terminação bem-sucedida
} // fim de main