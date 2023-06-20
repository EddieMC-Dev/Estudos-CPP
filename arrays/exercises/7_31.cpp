///////////////////////////////
// Exercise 7.31: 7_31.cpp   //
// Classificação por seleção //
// Autor: Edgard Mac Fadden  //  
// Data: 07/06/2023          //
///////////////////////////////

#include <iostream>
using std::cout;
using std::endl;

void selectionSort(int [], int);

int main()
{
    const int arraySize = 10;
    int numbers[arraySize] = {12, 2, 14, 10, 13, 4, 3, 5, 7, 6};

    cout << "Desordered numbers: ";

    for (int number = 0; number < arraySize; number++)
    {
        cout << numbers[number] << " ";
    }

    selectionSort(numbers, arraySize);

    cout << "\n\nOrdered numbers: ";

    for (int number = 0; number < arraySize; number++)
    {
        cout << numbers[number] << " ";
    }

    return 0;
}

void selectionSort(int array[], int sizeOfArray)
{   
    static int minValue, index, idx = 0, indexPrimary = 0;

    if (indexPrimary < sizeOfArray)
    {
        if (idx < sizeOfArray)
        {
            if (minValue > array[idx])
            {
                minValue = array[idx];
                index = idx;
            }
            else if (idx == indexPrimary)
            {
                minValue = array[indexPrimary];
            }

            idx++;
            selectionSort(array, sizeOfArray);
        }
        else
        {
            array[index] = array[indexPrimary];
            array[indexPrimary] = minValue;
            indexPrimary++;
            idx = indexPrimary;

            selectionSort(array, sizeOfArray);    
        }
    }
}
