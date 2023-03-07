// Figura 3.17: fig03_17.cpp
// Cria e manipula um objeto GradeBook; ilustra a validação.
#include <iostream>
using std::cout;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// a função main inicia a execução do programa
int main()
{
    // cria dois objetos GradeBook;
    // nome inicial de curso de gradeBook1 é muito longo
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    // exibe courseName de cada GradeBook
    cout << "gradeBook1's initial course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's initial course name is: "
        << gradeBook2.getCourseName() << endl;

    // modifica courseName do myGradeBook (com uma string de comprimento válido)
    gradeBook1.setCourseName("CS101 C++ Programming");

    // exibe courseName de cada GradeBook
    cout << "\ngradeBook1's course name is: "
        << gradeBook1.getCourseName()
        << "\ngradeBook2's course name is: "
        << gradeBook2.getCourseName() << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main