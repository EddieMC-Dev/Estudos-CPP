///////////////////////////////
// Exercise 7.35: 7_35.cpp   //
// Imprimindo um array       //
// Autor: Edgard Mac Fadden  //  
// Data: 20/06/2023          //
///////////////////////////////

#include <iostream>
using std::cout;
using std::endl;

void printArray(const int [], int, int initialIndex = 0);

int main()
{
    const int sizeOfArray = 10;
    int array[sizeOfArray] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    printArray(array, sizeOfArray);
    
    return 0;
}

void printArray(const int array[], int finalIndex, int initialIndex)
{
    if (finalIndex > initialIndex)
    {
        cout << array[initialIndex];

        if ((initialIndex + 1) != finalIndex)
            cout << ", ";

        printArray(array, finalIndex, (initialIndex + 1));
    }
    else 
        cout << endl;
}
