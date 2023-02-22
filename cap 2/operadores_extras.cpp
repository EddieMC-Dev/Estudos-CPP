// Pré-incrementando e pós-incrementando
#include <iostream>

using std::cout;
using std::endl;

int main()
{   
    int c;

    c = 5
    cout << c << endl; // imprime 5
    cout << c++ << endl; // imprime 5 e então pós-incrementa
    cout << c << endl; // imprime 6

    c = 5
    cout << c << endl; // imprime 5
    cout << ++c << endl; // pré-incrementa e então imprime 6
    cout << e << endl; // imprime 6

    return 0; // término normal
}