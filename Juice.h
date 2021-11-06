#include <iostream>
#include "Drink.h"
#pragma once

class Juice : public Drink
{
private:
public:
    Juice();
    ~Juice();
    void setChanh(int numberOf);
    void setCam(int numberOf);
    void setDuaHau(int numbeOf);
    void setChanhDay(int numbeOf);
    void setCaRot(int numbeOf);
    void setDua(int numerOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Juice::Juice() {}

Juice::~Juice() {}

void Juice::setChanh(int numberOf) {

    name = "Nuoc Ep Chanh";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setCam(int numberOf) {

    name = "Nuoc Ep Cam";
    quantity = numberOf;
    unitPrice = 23000;
    amount = unitPrice * quantity;
}

void Juice::setDuaHau(int numberOf) {

    name = "Nuoc Ep Dua Hau";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Juice::setChanhDay(int numberOf) {

    name = "Nuoc Ep Chanh Day";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setCaRot(int numberOf) {

    name = "Nuoc Ep Ca Rot";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setDua(int numberOf) {

    name = "Nuoc Ep Dua";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Juice::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setChanh(numberOf);
        break;
    case 2:
        setCam(numberOf);
        break;
    case 3:
        setDuaHau(numberOf);
        break;
    case 4:
        setChanhDay(numberOf);
        break;
    case 5:
        setCaRot(numberOf);
        break;
    case 6:
        setDua(numberOf);
        break;
    }
}


void Juice::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}