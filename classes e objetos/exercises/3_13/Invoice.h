// Classe Invoice para o exercício 3.13
#include <string>
using std::string;

class Invoice // Fatura
{
public:
    Invoice(string, string, int, int); // Inicializa os atributos da Fatura
    void setIdentifierNumber(string); // alterando o número identificador
    void setDescription(string); // alterando a descrição
    void setAmount(int); // alterando a quantidade
    void setPrice(int); // alterando o preço
    string getIdentifierNumber(); // obtendo o número identificador
    string getDescription(); // obtendo a descrição
    int getAmount(); // obtendo a quantidade
    int getPrice(); // obtendo o preço
    int getInvoiceAmount(); // obtendo o valor da fatura
private:
    string identifierNumber; // múmero identificador
    string productDescription; // descrição
    int productAmount; // quantidade de item comprada
    int productPrice; // preço por item
};