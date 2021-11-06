#include <iostream>
#include "Customer.h"
#pragma once

using namespace std;

class Table
{
private:
public:
    Table();
    ~Table();
    void pay();
    void seeBill();
    void output();
    Customer customer;
};

Table::Table()
{
}

Table::~Table()
{
}

void Table::seeBill()
{
    customer.callDrink(1, 1, 2);
    customer.callDrink(1, 2, 3);
    customer.callDrink(2, 1, 5);
    customer.output(1);
    customer.output(2);
    cout << "Tong thanh toan: " << customer.getTotalPrice() << endl;
}