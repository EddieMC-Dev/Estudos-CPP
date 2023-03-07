// Figura 3.1: fig03_01.cpp
// Define a classe GradeBook com uma função-membro displayMessage;
// Cria um objeto GradeBook e chama sua função displayMessage.
#include <iostream>
using std::cout;
using std::endl;

// Definição da classe GradeBook
class GradeBook
{
public: 
    // função que exibe uma mensagem de boas-vindas ao usuário de GradeBook
    void displayMessage()
    {
        cout << "Welcome to the Grade Book!" << endl;
    } // fim da função displayMessage
};  // fim da classe GradeBook

// a função main inicia a execução do programa
int main()
{
    GradeBook myGradeBook; // cria um objeto GradeBook chamado myGradeBook
    myGradeBook.displayMessage(); // chama a função displayMessage do objeto
    return 0; // indica terminação bem-sucedida
} // fim de main