#include <iostream>
#include "Customer.h"
#pragma once

using namespace std;

class Table
{
private:
    Customer customer[100];

public:
    Table();
    ~Table();
    void pay();
    void seeBill();
    void output();
};

Table::Table()
{
}

Table::~Table()
{
}

void Table::output()
{
    customer[0].callDrink(1, 1, 2);
    customer[0].output(1);
    customer[0].callDrink(1, 2, 3);
    customer[0].output(1);
    customer[0].callDrink(2, 1, 5);
    customer[0].output(2);
    cout << "Tong thanh toan: " << customer[0].getTotalPrice() << endl;
}

// void Table::bill()
// {
//     customer->tea.getMilkTea();
// }
