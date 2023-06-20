// Exercise 7.30: 7_30.cpp
// Bucket sort
// Autor: Edgard Mac Fadden
// Data: 05/06/2023

#include <iostream>
using std::cout;
using std::endl;

void bucketSort(int [], int);

int main()
{
    const int arraySize = 4;
    int numbers[arraySize] = {97, 3, 120, 100};

    cout << "Disordered numbers: ";

    for (int i = 0; i < arraySize; i++)
    {
        cout << numbers[i] << " ";
    }

    bucketSort(numbers, arraySize);

    cout << "\n\nOrdered numbers: ";

    for (int i = 0; i < arraySize; i++)
    {
        cout << numbers[i] << " ";
    }

    cout << endl;
    return 0;
}

void bucketSort(int array[], int sizeOfArray)
{
    // Inicializa variáveis necessárias
    const int rows = 10; 
    const int columns = 4;
    int digit, minValue = 0, maxValue = 0, limitDivider = 1;

    int buckets[rows][columns];

    // Coleta o maior e o menor valor do array
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (array[i] < minValue)
            minValue = array[i];

        if (array[i] > maxValue)
            maxValue = array[i];
    }

    // Marca todos os valores do buckets como um valor menor que o menor valor do array
    for (int r = 0; r < rows; r++)
    {
        for (int c = 0; c < columns; c++)
        {
            buckets[r][c] = (minValue - 1);
        }
    }
    
    // Calcula o valor máximo do divisor que serve de base para separar dígitos
    while (true)
    {
        if (maxValue > limitDivider)
            limitDivider *= 10;
        else 
        {
            if (limitDivider != maxValue)
                limitDivider /= 10;

            break;
        }
    }

    // Ordena os números no array
    for (int divider = 1; limitDivider >= divider; divider *= 10)
    {
        for (int i = 0; i < sizeOfArray; i++)
        {
            digit = (array[i] / divider) % 10;
            
            for (int c = 0; c < columns; c++)
            {
                if (buckets[digit][c] == (minValue - 1))
                {
                    buckets[digit][c] = array[i];
                    break;
                }
            }
            
        }

        int index = 0;

        // Passa os números do buckets pro array
        for (int i = 0; i < rows; i++)
        {   
            for (int j = 0; j < columns; j++)
            {
                if (buckets[i][j] >= minValue)
                {
                    array[index] = buckets[i][j];
                    buckets[i][j] = (minValue - 1);
                    index++;
                }
            }
        }
    }

    
}