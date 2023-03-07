// Contém as funções-membro da classe Date
#include <iostream>
using std::cout;
using std::endl;

#include "Date.h"

Date::Date(int newMonth, int newDay, int newYear)
{
    setMonth(newMonth);
    setDay(newDay);
    setYear(newYear);

    if (newMonth > 12 || newMonth < 1)
        setMonth(1);
}

void Date::setMonth(int newMount)
{
    month = newMount;
}

void Date::setDay(int newDay)
{
    day = newDay;
}

void Date::setYear(int newYear)
{
    year = newYear;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}

int Date::getYear()
{
    return year;
}

void Date::displayDate()
{
    cout << day << "/" << month << "/" << year << endl;
}