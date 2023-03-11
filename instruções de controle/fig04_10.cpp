// Figura 4.10: fig04_10.cpp
// Cria o objeto da classe GradeBook e invoca sua função determineClassAverage
#include "GradeBook.h" // inclui a definição de classe GradeBook

int main()
{
   // cria o objeto myGradeBook da classe GradeBook e
   // passa o nome do curso para o construtor
   GradeBook myGradeBook("CS101 C++ Programming");

   myGradeBook.displayMessage(); // exibe a mensagem de boas-vindas
   myGradeBook.determineClassAverage(); // calcula a média das 10 notas
   return 0; // indica terminação bem-sucedida
} // fim de main