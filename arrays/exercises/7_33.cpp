///////////////////////////////
// Exercise 7.33: 7_33.cpp   //
// Pesquisa Linear recursiva //
// Autor: Edgard Mac Fadden  //  
// Data: 20/06/2023          //
///////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int linearSearch(const int [], int, int);

int main()
{
    const int arraySize = 100;
    int a[arraySize]; 
    int searchKey; 

    for (int i = 0; i < arraySize; i++)
        a[i] = 2 * i; 
    
    cout << "Enter integer search key: ";
    cin >> searchKey;

    int element = linearSearch(a, searchKey, arraySize);

    if (element != -1)
        cout << "Fount value in element " << element << endl;
    else 
        cout << "Value not found" << endl;

    return 0;
}

int linearSearch(const int array[], int key, int sizeOfArray)
{
    static int j = 0;

    if (j >= sizeOfArray)
        return -1;
    else if (array[j] == key) 
        return j; 

    j++;
    return linearSearch(array, key, sizeOfArray); 
} 