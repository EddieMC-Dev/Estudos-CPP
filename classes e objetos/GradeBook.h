// Figura 3.9? GradeBook.h
// Definição de classe GradeBook em um arquivo main separado.
#include <iostream>
using std::cout;
using std::endl;

#include <string> // a classe GradeBook utiliza a classe de string padrão C++
using std::string;

// definição da classe GradeBook
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
    string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook