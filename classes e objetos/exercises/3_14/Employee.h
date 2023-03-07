// A classe Employee para o exercício 3.14
#include <string>
using std::string;

class Employee // funcionário
{
public:
    Employee(string, string, int); // inicializa o nome, sobrenome e o salário
    void setName(string); // altera o primeiro nome
    void setSurname(string); // altera o sobrenome
    void setSalary(int); // altera o salário
    string getName(); // obtém o nome
    string getSurname(); // obtém o sobrenome
    int getSalary(); // obtém o salário
private:
    string firstName; // nome
    string lastName; // sobrenome
    int salary; // salário
};