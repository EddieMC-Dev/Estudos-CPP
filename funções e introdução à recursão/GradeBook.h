// Figura 6.3: GradeBook.h
// Definição de classe GradeBook que localiza a máxima de três notas.
// As funções-membro são definidas no GradeBook.cpp
#include <string> // o programa utiliza classe de string padrão C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
   GradeBook(string); // o construtor inicializa o nome do curso
   void setCourseName(string); // função para configurar o nome do curso
   string getCourseName(); // função para recuperar o nome do curso
   void displayMessage(); // exibe uma mensagem de boas-vindas
   void inputGrades(); // insere três notas fornecidas pelo usuário
   void displayGradeReport(); // exibe um relatório baseado nas notas
   int maximum(int, int, int); // determina o máximo de 3 valores
private:
   string courseName; // nome do curso para esse GradeBook
   int studentMaximum; // máxima de três notas
}; // fim da classe GradeBook