///////////////////////////////
// Exercise 7.32: 7_32.cpp   //
// Identificando Palíndromo  //
// Autor: Edgard Mac Fadden  //  
// Data: 07/06/2023          //
///////////////////////////////

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

bool testPalindrome(char [], int);

int main()
{
    const int sizeOfString = 50;
    char word[sizeOfString];

    cout << "Word: ";
    cin >> word;

    cout << "\n" << word << " is ";

    if (testPalindrome(word, sizeOfString))
        cout << "Palindrome\n";
    else
        cout << "not Palindrome\n";

    return 0;
}

bool testPalindrome(char string[], int sizeOfString)
{
    static const int arraySize = 100;
    static int limit = 0, idx0 = 0, idx1 = 0, idx2 = -2;
    static char array[arraySize];

    if (idx1 == (sizeOfString - 1) || idx2 == -1)
            return true;
    else if (string[idx0] != '\0')
    {
        if (string[idx0] != '.' || string[idx0] != ' ')
        {
            array[limit] = string[idx0];
            limit++;
            idx0++;
        }
        else 
        {
            idx0++;
        }

        if (string[idx0] == '\0')
            idx2 = (limit - 1);

        return testPalindrome(string, sizeOfString);
    }
    else if (array[idx1] == array[idx2])
    {
        idx1++;
        idx2--; 
        return testPalindrome(string, sizeOfString);         
    }   
    else  
        return false;
}