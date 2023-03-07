// Exercise 2.23: 2_23.cpp
// Comparando 5 números e encontrando o maior e número valor entre eles
// Autor: Edgard Mac Fadden
// Data: 02/03/2023 --> 16:25
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n1, n2, n3, n4, n5, max_num, min_num;

    cout << "Insira 5 valores inteiros: ";
    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    max_num = min_num = n1;
    
    // Encontrar o maior valor
    if (n2 > max_num) 
        max_num = n2;
    if (n3 > max_num)
        max_num = n3;
    if (n4 > max_num)
        max_num = n4;
    if (n5 > max_num)
        max_num = n5;

    // Encontrando o menor valor
    if (n2 < min_num)
        min_num = n2;
    if (n3 < min_num)
        min_num = n3;
    if (n4 < min_num)
        min_num = n4;
    if (n5 < min_num)
        min_num = n5;

    cout << "Maior: " << max_num << endl;
    cout << "Menor: " << min_num << endl;

    return 0;

}