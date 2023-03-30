// Exercise 5.21: 5_21.cpp
// Computando o pagamento semanal de cada empregado
// Autor: Edgard Mac Fadden
// Data: 14/03/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

int main()
{
   int code; // 1 = gerente, 2 = horista, 3 = comissionado e 4 = trabalhador
   int hours; // horas trabalhadas pelo horista
   int items; // quantidade de itens produzidos pelo trabalhador
   
   double salary; // salário semanal
   double sales; // valor das vendas do comissionado
   double addition; // acrésimo por horas extras do horista

   do 
   {
      cout << "------------------------------" << endl
         << " 1 - gerente                 " << endl
         << " 2 - horista                 " << endl
         << " 3 - comissionado            " << endl
         << " 4 - trabalhador por produção" << endl
         << "------------------------------" << endl
         << "Código do empregado (-1 para sair): ";
      cin >> code;

      switch (code)
      {
         case -1:
            break;

         case 1:
            cout << "Salário fixo: $";
            cin >> salary;
            break;

         case 2:
            cout << "Salário por hora: $";
            cin >> salary;

            cout << "Horas trabalhadas por semana: ";
            cin >> hours;

            if (hours > 40)
            {
               addition = (hours - 40) * (salary * 1.50); 
               salary *= 40;
               salary += addition;
            }  
            else
               salary *= hours;

            break;

         case 3:
            cout << "Salário fixo: $";
            cin >> salary;

            cout << "Lucro das vendas: $";
            cin >> sales;
            salary += sales * (5.7 / 100);

            break;

         case 4:
            cout << "Salário fixo: ";
            cin >> salary;

            cout << "Quantidade de itens produzidos: ";
            cin >> items;
            salary *= items;

            break;

         default:
            cout << "\nErro! Por favor, insira um código válido!" << endl;
            break;
      }

      if (code >= 1 && code < 5)
      {
         cout << "-----------------------" << endl
            << " Código: " << code << endl
            << " Salário: $" << setprecision(2) << fixed << salary << endl
            << "-----------------------" << endl << endl;
      }
   } while (code != -1);

   return 0;
}