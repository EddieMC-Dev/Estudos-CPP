// Figura 4.8: GradeBook.h
// A definição da classe GradeBook que determina a média de uma classe
// As funções-membro são definidas no GradeBook.cpp
#include <string> // o programa utiliza a classe de string padrão do C++
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
   GradeBook(string); // o construtor inicializa o nome do curso
   void setCourseName(string); // função para configurar o nome do curso
   string getCourseName(); // função para recuperar o nome do curso
   void displayMessage(); // exibe uma mensagem de boas-vidas
   void determineClassAverage(); // calcula a média das notas inseridas pelo usuário
private:
   string courseName; // nome do curso para esse GradeBook
}; // fim da classe GradeBook