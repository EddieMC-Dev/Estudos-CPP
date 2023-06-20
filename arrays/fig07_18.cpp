// Figura 7.18: fig07_18.cpp
// Cria um objeto GradeBook utilizando um array de notas.

#include "GradeBook.h" // definição da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // array de notas de aluno
    int gradesArray[GradeBook::students] =
        {87, 68, 94, 100, 83, 78, 85, 91, 76, 87};

    GradeBook myGradeBook(
        "CS101 Introduction to C++ Programming", gradesArray);
    myGradeBook.displayMessage();
    myGradeBook.processGrades();
    return 0; 
} // fim de main