// Figura 7.23: GradeBook.h
// Definição da classe GradeBook que utiliza um
// array bidimensional para armazenar notas de teste.
// As funções-membro são definidas em GradeBook.cpp
#include <string> // o programa utiliza a classe string da C++ Standard Library
using std::string;

// definição da classe GradeBook
class GradeBook
{
public:
    // constantes
    const static int students = 10; // número de alunos
    const static int tests = 3; // número de testes

    // o construtor inicializa o nome do curso e o array de notas
    GradeBook(string, const int [][tests]);

    void setCourseName(string); // função para configurar o nome do curso
    string getCourseName(); // função para recuperar o nome do curso
    void displayMessage(); // exibe uma mensagem de boas-vindas
    void processGrades(); // realiza várias operações nos dados
    int getMinimum(); // localiza a nota mínima no livro de notas
    int getMaximum(); // localiza a nota máxima no livro de notas
    double getAverage(const int [], const int); // encontra a média das notas
    void outputBarChart(); // gera saída do gráfico de barras de distribuição de notas
    void outputGrades(); // gera a saída do conteúdo do array de notas
private:
    string courseName; // nome do curso para esse livro de notas
    int grades[students][tests]; // array bidimensional de notas    
}; // fim da classe GradeBook