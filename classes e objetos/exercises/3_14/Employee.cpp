// Funções-membro da classe Employee
#include "Employee.h"

Employee::Employee(string name, string surname, int salaryInitial)
{
    setName(name);
    setSurname(surname);
    setSalary(salaryInitial);
}

void Employee::setName(string newName)
{
    firstName = newName;
}

void Employee::setSurname(string newSurname)
{
    lastName = newSurname;
}

void Employee::setSalary(int newSalary)
{
    salary = newSalary;

    if (salary < 0)
        salary = 0;
}

string Employee::getName()
{
    return firstName;
}

string Employee::getSurname()
{
    return lastName;
}

int Employee::getSalary()
{
    return salary;
}