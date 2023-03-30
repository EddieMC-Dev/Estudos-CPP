// Figura 5.9: GradeBook.h
// Definição da classe GradeBook que conta as notas A, B, C, D e F
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
   void inputGrades(); // insere número arbitrário de notas do usuário
   void displayGradeReport(); // exibe um relatório baseado nas notas
private:
   string courseName; // nome do curso para esse GradeBook
   int aPoints; // contagem de notas A
   int bPoints; // contagem de notas B
   int cPoints; // contagem de notas C
   int dPoints; // contagem de notas D
   int fPoints; // contagem de notas F   
}; // fim da classe GradeBook