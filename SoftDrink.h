#include <iostream>
#include "Drink.h"
#pragma once

class SoftDrink : public Drink
{
private:
public:
    SoftDrink();
    ~SoftDrink();
    void setSevenUp(int numberOf);
    void setPepsi(int numberOf);
    void setCoca(int numbeOf);
    void setRedbull(int numbeOf);
    void setRevive(int numbeOf);
    void setSting(int numerOf);
    void setStingThai(int numerOf);
    void setC2(int numerOf);
    void addDrink(int choose, int numberOf);
    void print();
};

SoftDrink::SoftDrink() {}

SoftDrink::~SoftDrink() {}

void SoftDrink::setSevenUp(int numberOf) {

    name = "7UP";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setPepsi(int numberOf)
{
    name = "Pepsi";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setCoca(int numberOf) {
    name = "Coca-Cola";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setRedbull(int numberOf) {
    name = "Redbull";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void SoftDrink::setRevive(int numberOf) {
    name = "Revive";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setSting(int numberOf) {
    name = "Sting";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setStingThai(int numberOf) {
    name = "Sting Thai";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void SoftDrink::setC2(int numberOf) {
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
        setPepsi(numberOf);
        break;
    case 3:
        setCoca(numberOf);
        break;
    case 4:
        setRedbull(numberOf);
        break;
    case 5:
        setRevive(numberOf);
        break;
    case 6:
        setSting(numberOf);
        break;
    case 7:
        setStingThai(numberOf);
        break;
    case 8:
        setC2(numberOf);
        break;
    }
}


void SoftDrink::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}