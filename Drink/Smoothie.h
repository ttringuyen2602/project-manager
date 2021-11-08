#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Smoothie : public Drink
{
private:
public:
    Smoothie();
    ~Smoothie();
    void setAvocadoSmoothie(int numberOf);
    void setDurianSmoothie(int numberOf);
    void setBlueberrySmoothie(int numberOf);
    void setStrawberySmoothie(int numberOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Smoothie::Smoothie() {}

Smoothie::~Smoothie() {}

void Smoothie::setAvocadoSmoothie(int numberOf)
{
    name = "Sinh to bo";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void Smoothie::setDurianSmoothie(int numberOf)
{
    name = "Sinh to sau rieng";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::setBlueberrySmoothie(int numberOf)
{
    name = "Sinh to viet quat";
    quantity = numberOf;
    unitPrice = 29500;
    amount = unitPrice * quantity;
}

void Smoothie::setStrawberySmoothie(int numberOf)
{
    name = "Sinh to dau";
    quantity = numberOf;
    unitPrice = 35000;
    amount = unitPrice * quantity;
}

void Smoothie::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setAvocadoSmoothie(numberOf);
        break;
    case 2:
        setDurianSmoothie(numberOf);
        break;
    case 3:
        setBlueberrySmoothie(numberOf);
        break;
    case 4:
        setStrawberySmoothie(numberOf);
        break;
    }
}

void Smoothie::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}
