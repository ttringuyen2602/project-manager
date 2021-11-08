#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Soda : public Drink
{
    private:
    public:
        Soda();
        ~Soda();
        void setLemonSoda(int numberof);
        void setPeachSoda(int numberOf);
        void setMintSoa(int numberOf);
        void setPassionSoda(int numberOf);
        void setKiwiSoda(int numberOf);
        void setRaspberrySoda(int numberOf);
        void addDrink(int choose, int numberOf);
        void print();
};

Soda::Soda() {}

Soda::~Soda() {}

void Soda::setLemonSoda(int numberOf)
{
    name = "Soda chanh";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setPeachSoda(int numberOf)
{
    name = "Soda dao";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setMintSoa(int numberOf)
{
    name = "Soda bac ha";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setPassionSoda(int numberOf)
{
    name = "Soda chanh day";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setKiwiSoda(int numberOf)
{
    name = "Soda kiwi";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setRaspberrySoda(int numberOf)
{
    name = "Soda phuc bon tu";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setLemonSoda(numberOf);
        break;
    case 2:
        setPeachSoda(numberOf);
        break;
    case 3:
        setMintSoa(numberOf);
        break;
    case 4:
        setPassionSoda(numberOf);
        break;
    case 5:
        setKiwiSoda(numberOf);
        break;
    case 6:
        setRaspberrySoda(numberOf);
        break;
    }
}

void Soda::print()
{
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;