// Figura 7.17: GradeBook.cpp
// Definição de função-membro para a classe GradeBook que
// utiliza um array para armazenar notas de teste.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;
using std::setw;

#include "GradeBook.h" // definição da classe GradeBook

// o construtor inicializa courseName e o array grades
GradeBook::GradeBook(string name, const int gradesArray[])
{
    setCourseName(name); // inicializa courseName

    // copia notas de gradeArray para membro de dados grades
    for (int grade = 0; grade < students; grade++)
        grades[grade] = gradesArray[grade];
} // fim do construtor GradeBook

// função para configurar o nome do curso
void GradeBook::setCourseName(string name)
{
    courseName = name; // armazena o nome do curso
} // fim da função setCourseName

// função para recuperar o nome do curso
string GradeBook::getCourseName()
{
    return courseName;
} // fim da função getCourseName

// exube uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
    // essa instrução chama getCourseName para obter o
    // nome do curso que esse GradeBook representa
    cout << "Welcome to the grade book for\n" << getCourseName() << "!"
        << endl;
} // fim da função displayMessage

// realiza várias operações nos dados
void GradeBook::processGrades()
{
    // gera saída de array de notas
    outputGrades();

    // chama função getAverage para calcular a nota média
    cout << "\nClass average is " << setprecision(2) << fixed <<
        getAverage() << endl;

    // chama funções getMinimum e getMaximum 
    cout << "Lowest grade is " << getMinimum() << "\nHighest grade is "
        << getMaximum() << endl;

    // chama outputBarChart para imprimir gráfico de distribuição de notas
    outputBarChart();    
} // fim da função processGrades

// localiza nota mínima
int GradeBook::getMinimum()
{
    int lowGrade = 100; // supõe que a nota mais baixa é 100

    // faz um loop pelo array de notas
    for (int grade = 0; grade < students; grade++)
    {
        // se nota for mais baixa que lowGrade, ela é atribuída a lowGrade
        if (grades[grade] < lowGrade)
            lowGrade = grades[grade]; // nova nota mais baixa
    } // fim do for

    return lowGrade; // retorna nota mais baixa
} // fim da função getMinimum

// localiza nota máxima
int GradeBook::getMaximum()
{
    int highGrade = 0; // supõe que a nota mais alta é 0

    // faz um loop pelo array de notas
    for (int grade = 0; grade < students; grade++)
    {
        // se a nota atual for mais alta que highGrade, ela é atribuída a highGrade
        if (grades[grade] > highGrade)
            highGrade = grades[grade]; // nova nota mais alta
    } // fim do for

    return highGrade; // retorna nota mais alta
} // fim da função getMaximum

// determina média para o teste
double GradeBook::getAverage()
{
    int total = 0; // inicializa o total

    // soma notas no array
    for (int grade = 0; grade < students; grade++)
        total += grades[grade];

    // retorna média de notas
    return static_cast<double>(total) / students;
} // fim da função getAverage

// gera a saída do gráfico de barras exibindo distribuição de notas
void GradeBook::outputBarChart()
{
    cout << "\nGrade distribution:" << endl;

    // armazena frequência de notas em cada intervalo de 10 notas
    const int frequencySize = 11;
    int frequency[frequencySize] = {0};

    // para cada nota, incrementa a frequência apropriada
    for (int grade = 0; grade < students; grade++)
        frequency[grades[grade] / 10]++;

    // para cada frequência de nota, imprime barra no gráfico
    for (int count = 0; count < frequencySize; count++)
    {
        // gera a saída do rótulo das barras ("0-9:", ..., "90-99:". "100:")
        if (count == 0)
            cout << "  0-9: ";
        else if (count == 10)
            cout << "  100: ";
        else    
            cout << count * 10 << "-" << (count * 10) + 9 << ": ";

        // imprime a barra de asteriscos
        for (int stars = 0; stars < frequency[count]; stars++)
            cout << '*';

        cout << endl; // inicia uma nova linha de saída
    } // fim do for externo
} // fim da função outputBarChart

// gera a saída do conteúdo do array de notas
void GradeBook::outputGrades()
{
    cout << "\nThe grade are:\n\n";

    // gera a saída da nota de cada aluno
    for (int student = 0; student < students; student++)
        cout << "Student " << setw(2) << student + 1 << ": " << setw(3)
            << grades[student] << endl;
} // fim da função outputGrades

