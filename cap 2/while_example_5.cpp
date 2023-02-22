// Repetição controlada por contador
#include <iostream>

using std::cout;
using std::endl;

int main() 
{
    int counter = 1; // inicialização

    while (counter <= 10) { // condição de repetição
        cout << counter << endl; 
        ++counter; // incremento
    }

    // Uma versão mais econômica
    counter = 0;
    
    while (++counter <= 10)
        cout << counter << endl;

    return 0;
}