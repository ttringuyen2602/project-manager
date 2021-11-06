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
    void setBlackCoffee(int numberOf);
    void setMilkCoffee(int numberOf);
    void setWhiteCoffee(int numberOf);
    void setHotCocoa(int numberOf);
    void setEspresso(int numberOf);
    void setLatte(int numberOf);
    void setCappuccino(int numberOf);
    void setHotChocolate(int numberOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Coffee::Coffee() {}

Coffee::~Coffee() {}

void Coffee::setBlackCoffee(int numberOf)
{

    name = "Ca Phe Den";
    quantity = numberOf;
    unitPrice = 16000;
    amount = unitPrice * quantity;
}

void Coffee::setMilkCoffee(int numberOf)
{
    name = "Ca Phe Sua";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Coffee::setWhiteCoffee(int numberOf)
{
    name = "Bac Xiu";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Coffee::setHotCocoa(int numberOf)
{
    name = "Ca Cao Nong";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Coffee::setEspresso(int numberOf)
{
    name = "Espresso";
    quantity = numberOf;
    unitPrice = 13000;
    amount = unitPrice * quantity;
}

void Coffee::setLatte(int numberOf)
{
    name = "Ca Phe Tao Hinh(Latte)";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Coffee::setCappuccino(int numberOf)
{
    name = "Ca Phe Y(Cappuccino)";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Coffee::setHotChocolate(int numberOf)
{
    name = "Socola Nong";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Coffee::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setBlackCoffee(numberOf);
        break;
    case 2:
        setMilkCoffee(numberOf);
        break;
    case 3:
        setWhiteCoffee(numberOf);
        break;
    case 4:
        setHotCocoa(numberOf);
        break;
    case 5:
        setEspresso(numberOf);
        break;
    case 6:
        setLatte(numberOf);
        break;
    case 7:
        setCappuccino(numberOf);
        break;
    case 8:
        setHotChocolate(numberOf);
        break;
    }
}

void Coffee::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
