// Figura 7.13: fig07_13.cpp
// Arrays estáticos são inicializados como zero.
#include <iostream>
using std::cout;
using std::endl;

void staticArrayInit(void); // protótipo de função
void automaticArrayInit(void); // protótipo de função

int main()
{
    cout << "First call to each function:\n";
    staticArrayInit();
    automaticArrayInit();

    cout << "\n\nSecond call to each function:\n";
    staticArrayInit();
    automaticArrayInit();
    cout << endl;

    return 0; // indica terminação bem-sucedida
} // fim de main

// função para demonstrar um array local estático
void staticArrayInit(void)
{
    // inicializa elementos como 0 na primeira vez que a função é chamada
    static int array1[3]; // array local estático

    cout << "\nValues on entering staticArrayInit:\n";

    // gera saída do conteúdo de array1
    for (int i = 0; i < 3; i++)
        cout << "array1[" << i << "] = " << array1[i] << " ";

    cout << "\nValues on exiting staticArrayInit:\n";

    // modifica e gera saída do conteúdo de array1
    for (int j = 0; j < 3; j++)
        cout << "array1[" << j << "] = " << (array1[j] += 5) << " ";
} // fim da função staticArrayInit

// função para demonstrar um array local automático
void automaticArrayInit(void)
{
    // inicializa elementos toda vez que a função é chamada
    int array2[3] = {1, 2, 3}; // array local automático

    cout << "\n\nValues on entering automaticArrayInit:\n";

    // gera saída do conteúdo de array2
    for (int i = 0; i < 3; i++)
        cout << "array2[" << i << "] = " << array2[i] << " ";

    cout << "\nValues on exiting automaticArrayInit:\n";

    // modifica e gera saída do controle de array2
    for (int j = 0; j < 3; j++)
        cout << "array2[" << j << "] = " << (array2[j] += 5) << " "; 
} // fim da função automaticArrayInit