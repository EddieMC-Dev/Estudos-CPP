// Figura 3.11: GradeBook.h
// Definição da classe GradeBook. Esse arquivo aprsenta a interface pública
// de GradeBook sem revelar as implementações de funções-membro de GradeBook
// que são defindidas em GradeBook.cpp.
#include <string> // a classe GradeBook utiliza a classe de string padrão C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    GradeBook(string, string); // construtor que inicializa courseName
    void setCourseName(string); // função que configura o nome do curso
    void setInstructorName(string); // função que configura o nome do instrutor
    string getCourseName(); // função que obtém o nome do curso
    string getInstructorName(); // função que obtém o nome do instrutor
    void displayMessage(); // função que exibe uma mensagem de boas-vindas
private:
    string courseName; // nome do curso para esse GradeBook
    string courseInstructor; // nome do instrutor do curso
}; // fim da classe GradeBook