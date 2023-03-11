// Figura 4.17: Analysis.cpp
// Definições de função-membro para a classe Analysis que
// analisa os resultados do teste.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// inclui a definição de classe Analysis a patir de Analysis.h
#include "Analysis.h"

// processa os resultados do teste de 10 alunos
void Analysis::processExamResults()
{
   // inicializando variáveis nas declarações
   int passes = 0; // número de aprovações
   int failures = 0; // número de reprovações
   int studentCounter = 1; // contador de alunso
   int result; // resultado de um teste (1 = aprovado, 2 = reprovado)

   // processa 10 alunos utilizando o loop controlado por contador
   while (studentCounter <= 10)
   {
      // solicita ao usuário uma entrada e obtém valor fornecido pelo usuário 
      cout << "Enter result (1 = pass, 2 = fail): ";
      cin >> result; // lê o resultado

      if (result == 1 || result == 2)
      {
         // if...else aninhado em while
         if (result == 1)            // se resultado for 1,
            passes = passes + 1;      // incrementa aprovações;
         else                        // senão resultado não for 1, então
            failures = failures + 1;  // incrementa reprovações

         // incrementa studentCounter até o loop terminar
         studentCounter = studentCounter + 1;  
      } 
   } // fim do while

   // fase de terminação; exibe número de aprovados e reprovados
   cout << "Passed " << passes << "\nFailed " << failures << endl;

   // determina se mais de oito alunos passaram
   if (passes > 8)
      cout << "Raise tuition " << endl;
} // fim da função processExamResults