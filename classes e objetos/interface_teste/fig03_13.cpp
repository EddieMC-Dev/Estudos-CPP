// Figura 3.13 : fig03_13.cpp
// Demonstração de classe GradeBook depois de separar
// sua interface de sua implementação
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Deitel");
    GradeBook gradeBook2("CS102 Data Structures in C++", "Deitel");

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    gradeBook1.displayMessage();
    gradeBook2.displayMessage();
    return 0; // indica terminações bem-sucedida
} // fim de main