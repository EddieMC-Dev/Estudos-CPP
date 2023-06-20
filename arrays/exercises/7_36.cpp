//////////////////////////////////////////////
// Exercise 7.36: 7_36.cpp                  //
// Imprimindo uma string de trás pra frente //
// Autor: Edgard Mac Fadden                 //  
// Data: 20/06/2023                         //
//////////////////////////////////////////////

#include <iostream>
using std::cout;
using std::endl;

void stringReverse(const char [], int);

int main()
{
    char myString[] = "Hello world!"; 

    stringReverse(myString, 0);

    return 0;
}

void stringReverse(const char string[], int initialIndex)
{
    if (string[initialIndex] != '\0')
    {
        stringReverse(string, (initialIndex + 1));
        cout << string[initialIndex];
    }
    else 
        cout << endl;
}