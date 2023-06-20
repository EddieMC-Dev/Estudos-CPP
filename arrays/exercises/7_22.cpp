// Exercise 7.22: 7_22.cpp
// Analisando as vendas do último mês
// Autor: Edgard Mac Fadden
// Data: 05/04/2023

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;

int main()
{ 
    // Considero que um mês igual a 30 dias e que há 4 vendedores
    // emitindo 5 notas de vendas de 5 produtos diferentes. 
    // Em um dia, 20 notas de vendas são emitidas. Em um mês,
    // 600 notas de vendas e isso justifica o tamanho do Array
    const int totalSales = 601;
    int sales[totalSales][3];
    int seller = 1;  
    int product; 
    int totalProducts;
    int total;

    srand(time(0)); 

    for (int sale = 1; sale < totalSales; sale++)
    {
        if (seller == 5)
            seller = 1;

        product = 1 + rand() % 5;
        sales[sale][0] = seller;
        sales[sale][1] = product;

        if (product == 1)
            sales[sale][2] = 110;
        else if (product == 2)
                sales[sale][2] = 130;
        else if (product == 3)
                sales[sale][2] = 95;
        else if (product == 4)
                sales[sale][2] = 100;
        else if (product == 5)
            sales[sale][2] = 80;
        
        seller++;
    }

    cout << "         ";

    for (int seller = 1; seller <= 4; seller++)
        cout << setw(10) << "Seller " << seller;

    cout << setw(9) << "Total\n";

    for (int product = 1; product <= 5; product++)
    {
        cout << "Product " << product << setw(8); 
        totalProducts = 0;

        for (int seller = 1; seller <= 4; seller++)
        {
            total = 0;
            
            for (int sale = 1; sale < totalSales; sale++)
                if (sales[sale][0] == seller && sales[sale][1] == product)
                    total += sales[sale][2];

            cout << total << setw(11); 
            totalProducts += total;
        } 

        cout << totalProducts << endl;
    }

    cout << "Total" << setw(12);
    totalProducts = 0;

    for (int seller = 1; seller <= 4; seller++)
    {
        total = 0;

        for (int sale = 1; sale < totalSales; sale++)
        {
            if (sales[sale][0] == seller)
                total += sales[sale][2];
        }

        cout << total << setw(11); 
        totalProducts += total;
    }

    cout << totalProducts << endl;
    return 0;
}
