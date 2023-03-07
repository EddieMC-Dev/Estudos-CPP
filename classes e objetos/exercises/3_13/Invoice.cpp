#include "Invoice.h"

Invoice::Invoice(string identifier, string description, int amount, int price)
{
    identifierNumber = identifier;
    productDescription = description;

    if (productAmount < 0)
        productAmount = 0;
    if (productAmount >= 0)
        productAmount = amount;
    
    if (productPrice < 0)
        productPrice = 0;
    if (productPrice >= 0)
        productPrice = price;
}

void Invoice::setIdentifierNumber(string identifier)
{
    identifierNumber = identifier;
}

void Invoice::setDescription(string description)
{
    productDescription = description;
}

void Invoice::setAmount(int amount)
{
    productAmount = amount;
}

void Invoice::setPrice(int price)
{
    productPrice = price;
}

string Invoice::getIdentifierNumber()
{
    return identifierNumber;
}

string Invoice::getDescription()
{
    return productDescription;
}

int Invoice::getAmount()
{
    return productAmount;
}

int Invoice::getPrice()
{
    return productPrice;
}

int Invoice::getInvoiceAmount()
{
    return productPrice * productAmount;
}