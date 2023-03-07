// Exercise 2.19: 2_19.cpp
// Calculando a soma, a média, o produto, o menor e o maior de 3 números
// Autor: Edgard Mac Fadden
// Data: 01/03/2023 -> 21:40
#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    int n1, n2, n3, sum, average, product, min_num, max_num;

    cout << "Insira 3 valores inteiros: ";
    cin >> n1 >> n2 >> n3;

    sum = n1 + n2 + n3;
    average = (n1 + n2 + n3) / 3;
    product = n1 * n2 * n3;

    max_num = n1;
    min_num = n1;

    // Coletando o maior número
    if (n2 > max_num)
        max_num = n2;
    if (n3 > max_num)
        max_num = n3;

    // Coletando o menor número
    if (n2 < min_num)
        min_num = n2;
    if (n3 < min_num)
        min_num = n3;

    cout << "Soma: " << sum << endl;
    cout << "Média: " << average << endl;
    cout << "Produto: " << product << endl;
    cout << "O menor: " << min_num << endl;
    cout << "O maior: " << max_num << endl;

    return 0;

}