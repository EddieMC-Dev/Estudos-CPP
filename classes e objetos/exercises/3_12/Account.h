// Classe Account para o exercício 3.12
class Account
{
public:
    Account(int); // construtor da classe que recebe o saldo inicial da conta
    void credit(int); // aumenta o saldo na conta
    void debit(int); // diminui o saldo na conta
    int getBalance(); // retorna o saldo atual da conta
private:
    int accountBalance; // define o saldo da conta
}; 