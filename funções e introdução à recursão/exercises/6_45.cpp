// Exercise 6.45: 6_45.cpp
// Aplicando recursão a função main
// Autor: Edgard Mac Fadden
// Data: 28/03/2023
#include <iostream>
using std::cout;
using std::endl;

int main()
{
    static int count = 1;

    cout << "Count " << count++ << endl;
    
    if (count != 10)
        return main();
    else
        return 0;
}