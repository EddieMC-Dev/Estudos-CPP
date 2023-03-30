// Figura 6.4: GradeBook.cpp
// Definições de função-membro para a classe GradeBook que
// determina a máxima de três notas.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// construtor inicializa courseName com string fornecida como argumento;
// inicializa studentMaximum como 0
GradeBook::GradeBook(string name)
{
   setCourseName(name); // valida e armazena courseName
   studentMaximum = 0; // esse valor será substituído pela nota máxima
} // fim do construtor GradeBook

// função para configurar o nome do curso; limita o nome a 25 ou menos caracteres
void GradeBook::setCourseName(string name)
{
   if (name.length() <= 25) // se o nome tiver 25 ou menos caracteres
      courseName = name; // armazena o nome do curso no objeto
   else // se o nome tiver mais que 25 caracteres
   { // configura courseName como os primeriso 25 caracteres do nome de parâmetro
      courseName = name.substr(0, 25); // seleciona os primeiros 25 caracteres
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limiting courseName to first 25 characters.\n" << endl;
   } // fim do if...else
} // fim da função setCourseName

// função para recuperar o nome do curso
string GradeBook::getCourseName()
{
   return courseName;
} // fim da função getCourseName

// exibe uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
   // essa instrução chama getCourseName para obter o
   // nome do curso que esse GradeBook representa
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
      << endl;
} // fim da função displayMessage

// insere três notas a partir do usuário; determina a máxima
void GradeBook::inputGrades()
{
   int grade1; // primeira nota inserida pelo usuário
   int grade2; // segunda nota inserida pelo usuário
   int grade3; // terceira nota inserida pelo usuário

   cout << "Enter three integer grades: ";
   cin >> grade1 >> grade2 >> grade3;

   // armazena máxima no membro studentMaximum
   studentMaximum = maximum(grade1, grade2, grade3);
} // fim da função inputGrades

// retorna o máximo dos seus três parâmetros inteiros
int GradeBook::maximum(int x, int y, int z)
{
   int maximumValue = x; // supõe que x é o maior valor inicial

   // determina se y é maior que maximumValue
   if (y > maximumValue)
      maximumValue = y; // torna o y o novo maximumValue

   // determina se z é maior que maximumValue
   if (z > maximumValue)
      maximumValue = z; // torna z o novo maximumValue

   return maximumValue;
} // fim da função maximum

// exibe um relatório baseado nas notas inseridas pelo usuário
void GradeBook::displayGradeReport()
{
   // gera a saída da nota máxima entre as notas inseridas
   cout << "Maximum of grades entered: " << studentMaximum << endl;
} // fim da função displayGradeReport