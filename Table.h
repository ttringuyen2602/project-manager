#include <iostream>
#include "Customer.h"

using namespace std;

class Table
{
private:
    /* data */
public:
    Table(/* args */);
    ~Table();
    void pay();
    void bill();
    Customer customer[100];
};

Table::Table(/* args */)
{
}

Table::~Table()
{
}

void Table::bill()
{
    customer->tea.getMilkTea();
}
