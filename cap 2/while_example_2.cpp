// Programa de média da turma com repetição controlada por contador
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int total, // soma das notas
    gradeCounter, // número de notas digitadas
    grade, // uma nota
    average; // média das notas

    // fase de inicialização
    total = 0; // limpa total
    gradeCounter = 1; // prepara para executar o laço 

    // fase de procesamento
    while (gradeCounter <= 10) { // repete 10 vezes
        cout << "Forneça nota: "; // solicita entrada de dados
        cin >> grade; // lê nota digitada
        total = total + grade; // soma nota ao total
        gradeCounter = gradeCounter + 1; // incrementa contador
    }

    // fase de término
    average = total / 10; // divisão inteira
    cout << "A média da turma é " << average << endl;

    return 0;
}