// Exercise 3.15: 3_15.cpp
// Testando a classe Date
// Autor: Edgard Mac Fadden
// Data: 06/03/2023 --> 22:04
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

int main()
{
    // Dia das crianças
    Date date(12, 10, 1997); 

    cout << "Day: " << date.getDay() << endl
        << "Month: " << date.getMonth() << endl
        << "Year: " << date.getYear() << endl << endl;

    // Alterando a data pro Natal
    date.setDay(25);
    date.setMonth(12);
    date.setYear(2022);

    cout << "Day: " << date.getDay() << endl
        << "Month: " << date.getMonth() << endl
        << "Year: " << date.getYear() << endl << endl;

    date.displayDate(); // exibindo a data formatada

    return 0;
}