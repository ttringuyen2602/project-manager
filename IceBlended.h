#include <iostream>
#pragma once
#include "Drink.h"
using namespace std;

class IceBlended : public Drink
{
private:
public:
    IceBlended();
    ~IceBlended();
    void setLemon(int numberOf);
    void setBlueberry(int numberOf);
    void setChocolate(int numbeOf);
    void setChocomint(int numbeOf);
    void setCoffee(int numbeOf);
    void setMatcha(int numerOf);
    void setStrawberry(int numerOf);
    void addDrink(int choose, int numberOf);
    void print();
};

IceBlended::IceBlended() {}

IceBlended::~IceBlended() {}

void IceBlended::setLemon(int numberOf) {

    name = "Lemon Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setBlueberry(int numberOf) {

    name = "Blueberry Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setChocolate(int numberOf) {

    name = "Chocolate Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setChocomint(int numberOf) {

    name = "Chocomint Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setCoffee(int numberOf) {

    name = "Coffee Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setMatcha(int numberOf) {

    name = "Matcha Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setStrawberry(int numberOf) {

    name = "Strawberry Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setLemon(numberOf);
        break;
    case 2:
        setBlueberry(numberOf);
        break;
    case 3:
        setChocolate(numberOf);
        break;
    case 4:
        setChocomint(numberOf);
        break;
    case 5:
        setCoffee(numberOf);
        break;
    case 6:
        setMatcha(numberOf);
        break;
    case 7:
        setStrawberry(numberOf);
        break;
    }
}


void IceBlended::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
