// Figura 3.12: GradeBook.cpp
// Definições de função-membro de GradeBook. Esse arquivo contém
// implementações das funções-membro prototipadas em GradeBook.h.
#include <iostream>
using std::cout;
using std::endl;
 
#include "GradeBook.h" // inclui a definição de classe GradeBook
 
 // o construtor inicializa courseName com a string fornecida como argumento
GradeBook::GradeBook(string name, string instructor)
{
    setCourseName(name); // chama a função set para inicializar courseName
    setInstructorName(instructor); // chama a função set que inicia courseInstrutor
} // fim do construtor GradeBook
 
 // função para configurar o nome do curso
void GradeBook::setCourseName(string name)
{
    courseName = name; // armazena o nome do curso no objeto
} // fim da função setCourseName

// função pora configura o nome do instrutor do curso
void GradeBook::setInstructorName(string instructor)
{
    courseInstructor = instructor; // armazena o nome do instrutor no objeto
} // fim da função setInstructorName

 // função para obter o nome do curso
string GradeBook::getCourseName()
{
    return courseName; // retorna courseName do objeto
} // fim da função getCourseName

// função para obter o nome do instrutor do curso
string GradeBook::getInstructorName()
{
    return courseInstructor; // retorna courseInstructor do objeto
} // fim da função getInstructorName

// exibe uma mensagem de boas-vindas para o usuário GradeBook
void GradeBook::displayMessage()
{
    // chama getCourseName para obter o courseName
    cout << "Welcome to the grade book for\n" << getCourseName()
    << "!" << endl << "This course is presented by: " << getInstructorName()
    << endl;
} // fim da função displayMessage