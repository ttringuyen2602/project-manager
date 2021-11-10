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
    void output();
    Customer customer;
};

Table::Table()
{
}

Table::~Table()
{
}