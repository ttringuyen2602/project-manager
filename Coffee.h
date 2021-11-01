#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Coffee : public Drink
{
private:
    const static int BLACK_COFFEE = 16000, MILK_COFFEE = 18000;

public:
    Coffee();
    ~Coffee();
    void blackCoffee(int numberOf);
    void milkCoffee(int numberOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Coffee::Coffee() {}

Coffee::~Coffee() {}

void Coffee::blackCoffee(int numberOf)
{
    name = "Ca Phe Den";
    quantity = numberOf;
    unitPrice = BLACK_COFFEE;
    amount = unitPrice * quantity;
}

void Coffee::milkCoffee(int numberOf)
{
    name = "Ca Phe Sua";
    quantity = numberOf;
    unitPrice = MILK_COFFEE;
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

void Coffee::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}
