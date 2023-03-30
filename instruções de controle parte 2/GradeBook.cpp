// Figura 5.10: GradeBook.cpp
// Definições de função-membro para a classe GradeBook que
// utiliza uma instrução switch para contar as notas A, B, C, D e F
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "GradeBook.h" // inclui a definição de classe GradeBook

// construtor inicializa courseName com string fornecido como argumento;
// inicializa memebros de dados de contador como 0
GradeBook::GradeBook(string name)
{
   setCourseName(name); // valida e armazena courseName
   aPoints = 0; // inicializa a contagem de notas A como 0
   bPoints = 0; // inicializa a contagem de notas B como 0
   cPoints = 0; // inicializa a contagem de notas C como 0
   dPoints = 0; // inicializa a contagem de notas D como 0
   fPoints = 0; // inicializa a contagem de notas F como 0
} // fim do construtor GradeBook

// função para configurar o nome do curso; limita o nome a 25 ou menos caracteres
void GradeBook::setCourseName(string name)
{
   if (name.length() <= 25) // se o nome tiver 25 ou menos caracteres
      courseName = name; // armazena o nome do curso no objeto
   else // se o nome tiver mais que 25 caracteres 
   { // configura courseName como os primeiros 25 caracteres do nome de parâmetro
      courseName = name.substr(0, 25); // seleciona os primeiros 25 caracteres
      cout << "Name \"" << name << "\" exceeds maximum length (25).\n"
         << "Limitindo courseName to first 25 characters.\n" << endl;
   } // fim do if...else
} // fim da função setCourseName

// função para recuperar o nome do curso
string GradeBook::getCourseName()
{
   return courseName;
}

// exibe uma mensagem de boas-vindas para o usuário de GradeBook
void GradeBook::displayMessage()
{
   // essa instrução chama getCourseName para obter o 
   // nome do curso que esse GradeBook representa
   cout << "Welcome to the grade book for\n" << getCourseName() << "!\n"
      << endl;
} // fim da função displayMessage

// insere número arbitrário de notas fornecidas pelo usuário; atualiza o contador de notas
void GradeBook::inputGrades()
{
   int grade; // nota inserida pelo usuário

   cout << "Enter the letter grades." << endl
      << "Enter the EOF character to end input." << endl;
   
   // faz loop até usuario digitar a sequência de telcas de fim do arquivo
   while ((grade = cin.get()) != EOF)
   {
      // determina que nota foi inserida
      switch (grade) // instrução switch aninhada em while
      {
         case 'A': // a nota era letra A maiúscula
         case 'a': // ou a minúscula
            aPoints += 5; // incrementa aCount
            break; // necessário para fechar switch

         case 'B': // a nota era letra B maiúscula
         case 'b': // ou b minúscula
            bPoints += 4; // incrementa bCount
            break; // necessário para fechar switch

         case 'C': // a nota era letra C maiúscula
         case 'c': // ou c minúscula
            cPoints += 3; // incrementa cCount
            break; // necessário para fechar switch

         case 'D': // a nota era letra D maiúscula
         case 'd': // ou d minúscula
            dPoints += 2; // incrementa dCount
            break; // necessário para fechar switch
         
         case 'F': // a nota era letra F maiúscula
         case 'f': // ou f minúscula
            fPoints += 1; // incrementa fCount
            break; // necessário para fechar switch

         case '\n': // ignora nova linha,
         case '\t': // tabulações
         case ' ': // e espaços em entrada
            break; // fecha o switch

         default: // captura todos os outros caracteres
            cout << "Incorrect letter grade entered."
               << " Enter a new grade." << endl;
            break; // opcional; sairá de switch de qualquer jeito
      } // fim de switch
   } //fim de while
} // fim da função inputGrades

void GradeBook::displayGradeReport()
{
   // gera a saída de resumo de resultados
   cout << "\n\nTotal grades obtained by letter classification:";
      << "\nA: " << aPoints // exibe número de notas A
      << "\nB: " << bPoints // exibe número de notas B
      << "\nC: " << cPoints // exibe número de notas C
      << "\nD: " << dPoints // exibe número de notas D
      << "\nF: " << fPoints // exibe número de notas F
      << endl;
} // fim da função displayGradeReport