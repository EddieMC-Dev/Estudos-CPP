// Exercise 6.56: 6_56.cpp
// Triplicando número por valor e por referência
// Autor: Edgard Mac Fadden
// Data: 29/03/2023
#include <iostream>
using std::cout;
using std::endl;

int tripleByValue(int);
int tripleByReference(int &);

int main()
{
    int count = 4;

    cout << "count = " << count << endl
        << "tripleByValue(count) => " << tripleByValue(count) << endl;
    cout << "count = " << count << endl;
    
    cout << "tripleByReference(count) => " << tripleByReference(count) << endl;
    cout << "count = " << count << endl;
    
    return 0;
}

int tripleByValue(int value)
{
    return value * 3;
}

int tripleByReference(int &value)
{
    value *= 3;
    return value;
}