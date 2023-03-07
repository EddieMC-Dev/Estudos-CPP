// Exercise 3.13: 3_13.cpp
// Simulando a fatura de um produto com a classe Invoice
// Autor: Edgard Mac Fadden
// Data: 06/03/2023 --> 15:18
#include <iostream>
using std::cout;
using std::endl;

#include "Invoice.h"

int main()
{
    // Criando a fatura de 4 pentes de RAM
    Invoice ramStick("12F213S12K", "Random Access Memory", 4, 200);

    // Exibindo as informações básicas da fatura
    cout << "Identifier: " << ramStick.getIdentifierNumber() << endl
        << "Description: " << ramStick.getDescription() << endl
        << "Amount: " << ramStick.getAmount() << endl
        << "Price: " << ramStick.getPrice() << endl
        << "Invoice Amount: " << ramStick.getInvoiceAmount() << endl << endl;

    // Alterando as informações básicas
    ramStick.setIdentifierNumber("134H231J123L");
    ramStick.setDescription("Random Acess Memory 2.0");
    ramStick.setAmount(2);
    ramStick.setPrice(250);

    // Confirmando alteração
    cout << "Identifier: " << ramStick.getIdentifierNumber() << endl
        << "Description: " << ramStick.getDescription() << endl
        << "Amount: " << ramStick.getAmount() << endl
        << "Price: " << ramStick.getPrice() << endl
        << "Invoice Amount: " << ramStick.getInvoiceAmount() << endl << endl;

    return 0;
}