#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Coffee : public Drink
{
private:
public:
    Coffee();
    ~Coffee();
    void blackCoffee(int numberOf);
    void milkCoffee(int numberOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Coffee::Coffee() {}

Coffee::~Coffee() {}

void Coffee::blackCoffee(int numberOf)
{
    name = "Ca Phe Den";
    quantity = numberOf;
    unitPrice = 16000;
    amount = unitPrice * quantity;
}

void Coffee::milkCoffee(int numberOf)
{
    name = "Ca Phe Sua";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Coffee::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        blackCoffee(numberOf);
        break;
    case 2:
        milkCoffee(numberOf);
        break;
    }
}

void Coffee::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
