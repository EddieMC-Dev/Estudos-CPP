// Figura 5.11: fig05_11.cpp
// Cria o objeto GradeBook, insere notas e exibe relatório de notas.

#include "GradeBook.h" // inclui a definição de classe GradeBook

int main()
{
   // cria objeto GradeBook
   GradeBook myGradeBook("CS101 C++ Programming");

   myGradeBook.displayMessage(); // exibe a mensagem de boas-vindas
   myGradeBook.inputGrades(); // lê as notas fornecidas pelo usuário
   myGradeBook.displayGradeReport(); // exibe relatório baseado em notas
   return 0; // indica terminação bem-sucedida
}