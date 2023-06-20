// Figura 7.25: fig07_25.cpp
// Cria objeto GradeBook utilizando um array bidimensional de notas.

#include "GradeBook.h" // Definição da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // array bidimensional de notas de alunos
    int gradesArray[GradeBook::students][GradeBook::tests] =
        {{87, 96, 70},
         {68, 87, 90},
         {94, 100, 90},
         {100, 81, 82},
         {83, 65, 85},
         {78, 87, 65},
         {85, 75, 83},
         {91, 94, 100},
         {76, 72, 84},
         {87, 93, 73}};

    GradeBook myGradeBook(
        "CS101 Introduction to C++ Programming", gradesArray);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    return 0; // indica terminação bem-sucedida
} // fim de main