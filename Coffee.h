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
    void setblackCoffee(int numberOf);
    void setmilkCoffee(int numberOf);
    void setBacXiu(int numbeOf);
    void setCaCao(int numbeOf);
    void setblackEspresso(int numbeOf);
    void setLatte(int numbeOf);
    void setCappuccino(int numbeOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Coffee::Coffee() {}

Coffee::~Coffee() {}

void Coffee::setblackCoffee(int numberOf){

    name = "Ca Phe Den";
    quantity = numberOf;
    unitPrice = 16000;
    amount = unitPrice * quantity;
}

void Coffee::setmilkCoffee(int numberOf)
{
    name = "Ca Phe Sua";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Coffee::setBacXiu(int numberOf) {
    name = "Bac Xiu";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Coffee::setCaCao(int numberOf) {
    name = "Ca Cao";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Coffee::setblackEspresso(int numberOf) {
    name = "Espresso Den";
    quantity = numberOf;
    unitPrice = 13000;
    amount = unitPrice * quantity;
}

void Coffee::setLatte(int numberOf) {
    name = "Ca Phe Tao Hinh(Latte)";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Coffee::setCappuccino(int numberOf) {
    name = "Ca Phe Y(Cappuccino)";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Coffee::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setblackCoffee(numberOf);
        break;
    case 2:
        setmilkCoffee(numberOf);
        break;
    case 3:
        setBacXiu(numberOf);
        break;
    case 4:
        setCaCao(numberOf);
        break;
    case 5:
        setblackEspresso(numberOf);
        break;
    case 7:
        setLatte(numberOf);
        break;
    case 8:
        setCappuccino(numberOf);
        break;
    }
}


void Coffee::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
