#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Soda : public Drink
{
    private:
        const static int LEMON_SODA = 18000, PEACH_SODA = 18000, MINT_SODA = 18000, PASSION_SODA = 18000, KIWI_SODA = 18000, RASPBERRY_SODA = 18000;
    public:
        Soda();
        ~Soda();
        void lemonSoda(int numberof);
        void peachSoda(int numberOf);
        void mintSoa(int numberOf);
        void passionSoda(int numberOf);
        void kiwiSoda(int numberOf);
        void raspberrySoda(int numberOf);
        void addDrink(int choose, int numberOf);
        void output();
};

Soda::Soda() {}

Soda::~Soda() {}

void Soda::lemonSoda(int numberOf)
{
    name = "Soda chanh";
    quantity = numberOf;
    unitPrice = LEMON_SODA;
    amount = unitPrice * quantity;
}

void Soda::peachSoda(int numberOf)
{
    name = "Soda dao";
    quantity = numberOf;
    unitPrice = PEACH_SODA;
    amount = unitPrice * quantity;
}

void Soda::mintSoa(int numberOf)
{
    name = "Soda bac ha";
    quantity = numberOf;
    unitPrice = MINT_SODA;
    amount = unitPrice * quantity;
}

void Soda::passionSoda(int numberOf)
{
    name = "Soda chanh day";
    quantity = numberOf;
    unitPrice = PASSION_SODA;
    amount = unitPrice * quantity;
}

void Soda::kiwiSoda(int numberOf)
{
    name = "Soda kiwi";
    quantity = numberOf;
    unitPrice = KIWI_SODA;
    amount = unitPrice * quantity;
}

void Soda::passionSoda(int numberOf)
{
    name = "Soda phuc bon tu";
    quantity = numberOf;
    unitPrice = RASPBERRY_SODA;
    amount = unitPrice * quantity;
}

void Soda::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        lemonSoda(numberOf);
        break;
    case 2:
        peachSoda(numberOf);
        break;
    case 3:
        mintSoa(numberOf);
        break;
    case 4:
        passionSoda(numberOf);
    case 5:
        kiwiSoda(numberOf);
    case 6:
        raspberrySoda(numberOf);
    }
}

void Soda::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}