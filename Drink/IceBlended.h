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
    void setLemon_IceBlended(int numberOf);
    void setBlueberry_IceBlended(int numberOf);
    void setChocolate_IceBlended(int numbeOf);
    void setChocomint_IceBlended(int numbeOf);
    void setSapocheCoffee_IceBlended(int numbeOf);
    void setMatcha_IceBlended(int numerOf);
    void setStrawberry_IceBlended(int numerOf);

    void addDrink(int choose, int numberOf);
    void print();
};

IceBlended::IceBlended() {}

IceBlended::~IceBlended() {}

void IceBlended::setLemon_IceBlended(int numberOf)
{

    name = "Chanh Tuyet";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setBlueberry_IceBlended(int numberOf)
{

    name = "Blueberry Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setChocolate_IceBlended(int numberOf)
{

    name = "Chocolate Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setChocomint_IceBlended(int numberOf)
{

    name = "Chocomint Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setSapocheCoffee_IceBlended(int numberOf)
{

    name = "Coffee Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setMatcha_IceBlended(int numberOf)
{

    name = "Matcha Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setStrawberry_IceBlended(int numberOf)
{

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
        setLemon_IceBlended(numberOf);
        break;
    case 2:
        setBlueberry_IceBlended(numberOf);
        break;
    case 3:
        setChocolate_IceBlended(numberOf);
        break;
    case 4:
        setChocomint_IceBlended(numberOf);
        break;
    case 5:
        setSapocheCoffee_IceBlended(numberOf);
        break;
    case 6:
        setMatcha_IceBlended(numberOf);
        break;
    case 7:
        setStrawberry_IceBlended(numberOf);
        break;
    }
}

void IceBlended::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
