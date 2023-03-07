// Figura 3.7: fig03_07.cpp
// Instanciando múltiplos objetos da classe GradeBook e utilizando
// o construtor GradeBook para especificar o nome do curso
// quando cada objeto GradeBook é criado
#include <iostream>
using std::cout;
using std::endl;

#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// Definição da classe GradeBook
class GradeBook
{
public: 
    // o construtor inicializa courseName com a string fornecida como argumento
    GradeBook(string name)
    {
        setCourseName(name); // chama a função set para inicializar courseName
    } // fim do construtor GradeBook

    // função para configurar o nome do curso
    void setCourseName(string name)
    {
        courseName = name; // armazena o nome do curso no objeto
    } // fim da função setCourseName

    // função para obter o nome do curso
    string getCourseName()
    {
        return courseName; // retorna courseName do objeto
    } // fim da função getCourseName

    // exibe uma mensagem de boas-vindas para o usuário GradeBook
    void displayMessage()
    {
        // chama getCourseName para obter o courseName
        cout << "Welcome to the grade book for\n" << getCourseName()
            << "!" << endl;
    } // fim da função displayMessage
private:
    string courseName; //  para esse GradeBook
}; // fim da classe GradeBook

int main()
{
    // cria dois objetos GradeBook
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS101 Data Structures in C++");

    // exibe valor inicial de courseName para cada GradeBook
    cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
        << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
        << endl;
    return 0; // indica terminação bem-sucedida
} // fim de main