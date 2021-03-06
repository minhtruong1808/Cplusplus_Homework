// Invoice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "pch.h"
#include <iostream>
#include "Invoice.h"
using namespace std;

Invoice::Invoice(string number, string description, int count, int price)
{
	setPartnumber(number);
	setPartDescription(description);
	setQuantity(count);
	setPricePerItem(price);
}
void Invoice::setPartnumber(string number)
{
	partNumber = number;
}
string Invoice::getPartnumber()
{
	return partNumber;
}
void Invoice::setPartDescription(string description)
{
	partDescription = description;
}
string Invoice::getPartDescription()
{
	return partDescription;
}
void Invoice::setQuantity(int count)
{
	if (count > 0)
		quantity = count;
	if (count <= 0)
	{
		quantity = 0;
	}

}
int Invoice::getQuantity()
{
	return quantity;
}
void Invoice::setPricePerItem(int price)
{
	if (price > 0)
		pricePerItem = price;
	if (price <= 0)
	{
		pricePerItem = 0;
	}
}
int Invoice::getPricePerItem()
{
	return pricePerItem;
}
int Invoice::getInvoiceAmount()
{
	return getQuantity()*getPricePerItem();
}

int main()
{
	Invoice Invoice1("01", "Hooded cardigan", 2, 34);

	cout << "Invoice ammount for " << Invoice1.getQuantity() << " " << Invoice1.getPartDescription() << " is " << Invoice1.getInvoiceAmount() << " $ in total" << endl;
	system("pause");
	return 0;
}
