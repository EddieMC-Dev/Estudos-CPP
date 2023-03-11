// Figura 4.14: fig04_14.cpp
// Cria o objeto da classe GradeBook e invoca sua função-membro determineClassAverage

//inclui a definição da classe GradeBook de GradeBook.h
#include "GradeBook.h"

int main()
{
   // cria o objeto myGradeBook da classe GradeBook e
   // passa o nome do cursor para o consrutor
   GradeBook myGradeBook("CS101 C++ Programming");

   myGradeBook.displayMessage(); // exibe a mensagem de boas-vindas
   myGradeBook.determineClassAverage(); // calcula a média das 10 notas
   return 0; // indica terminação bem-sucedida
} // fim de main