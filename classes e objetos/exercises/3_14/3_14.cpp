// Exercise 3.14: 3_14.cpp
// Gerenciando informações de funcionários com a classe Employee
// Autor: Edgard Mac Fadden
// Data: 06/03/2023 --> 20:42
#include <iostream>
using std::cout;
using std::endl;

#include "Employee.h"

int main()
{   
    // adicionando novos funcionários
    Employee employee1("Luiz", "Burguês", 10000);
    Employee employee2("Dark", "Engineer", 100);
    
    // coletando os salários de cada funcionário
    int salary_1 = employee1.getSalary();
    int salary_2 = employee2.getSalary();

    // Ficha do primeiro funcionário
    cout << "Employee 1" << endl
        << "Name: " << employee1.getName() << endl
        << "Surname: " << employee1.getSurname() << endl
        << "Salary: " << employee1.getSalary() << endl << endl;

    // Ficha do segundo funcionário
    cout << "Employee 2" << endl
        << "Name: " << employee2.getName() << endl
        << "Surname: " << employee2.getSurname() << endl
        << "Salary: " << employee2.getSalary() << endl << endl;

    // Aumentando 10% do salário de cada funcionário
    employee1.setSalary(salary_1 * 110 / 100);
    employee2.setSalary(salary_2 * 110 / 100);

    // Confirmando o aumento de salário
    cout << "Employee " << employee1.getName() << endl
        << "Salary: " << employee1.getSalary() << endl << endl
        << "Employee " << employee2.getName() << endl
        << "Salary: " << employee2.getSalary() << endl << endl;

    return 0;
}