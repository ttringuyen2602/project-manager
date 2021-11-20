#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
class SoftDrink : public Drink
{
private:
public:
    SoftDrink();
    ~SoftDrink();
    void setSevenUp(int numberOf);
    void setCocaCola(int numberOf);
    void setRedbull(int numberOf);
    void setRevive(int numberOf);
    void setSting(int numberOf);
    void setC2(int numberOf);

    void addDrink(int choose, int numberOf);
    void print();
};

SoftDrink::SoftDrink() {}

SoftDrink::~SoftDrink() {}

void SoftDrink::setSevenUp(int numberOf)
{
    name = "7UP";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setCocaCola(int numberOf)
{
    name = "Coca-Cola";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setRedbull(int numberOf)
{
    name = "Redbull";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void SoftDrink::setRevive(int numberOf)
{
    name = "Revive";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setSting(int numberOf)
{
    name = "Sting";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setC2(int numberOf)
{
    name = "C2";
    quantity = numberOf;
    unitPrice = 15000;
    amount = unitPrice * quantity;
}

void SoftDrink::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setSevenUp(numberOf);
        break;
    case 2:
        setCocaCola(numberOf);
        break;
    case 3:
        setRedbull(numberOf);
        break;
    case 4:
        setRevive(numberOf);
        break;
    case 5:
        setSting(numberOf);
        break;
    case 6:
        setC2(numberOf);
        break;
    }
}

void SoftDrink::print()
{
    cout <<setw(20)<<name <<setw(20)<< quantity <<setw(20)<< unitPrice <<setw(20)<<amount<<endl;
    cout << endl;
}
