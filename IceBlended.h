#include <iostream>
#pragma once
#include "Drink.h"
using namespace std;

class IceBlended : public Drink
{
private:
    const static int IB_Lemon = 30000, IB_BlueBerry = 30000, IB_Chocolate = 30000, IB_Chocomint = 30000,
        IB_Coffee = 30000, IB_Matcha = 30000, IB_Strawberry = 30000;

public:
    IceBlended();
    ~IceBlended();
    void Lemon(int numberOf);
    void Blueberry(int numberOf);
    void Chocolate(int numbeOf);
    void Chocomint(int numbeOf);
    void Coffee(int numbeOf);
    void Matcha(int numerOf);
    void Strawberry(int numerOf);
    void addDrink(int choose, int numberOf);
    void output();
};

IceBlended::IceBlended() {}

IceBlended::~IceBlended() {}

void IceBlended::Lemon(int numberOf) {

    name = "Lemon Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Lemon;
    amount = unitPrice * quantity;
}

void IceBlended::Blueberry(int numberOf) {

    name = "Blueberry Ice Blended";
    quantity = numberOf;
    unitPrice = IB_BlueBerry;
    amount = unitPrice * quantity;
}

void IceBlended::Chocolate(int numberOf) {

    name = "Chocolate Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Chocolate;
    amount = unitPrice * quantity;
}

void IceBlended::Chocomint(int numberOf) {

    name = "Chocomint Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Chocomint;
    amount = unitPrice * quantity;
}

void IceBlended::Coffee(int numberOf) {

    name = "Coffee Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Coffee;
    amount = unitPrice * quantity;
}

void IceBlended::Matcha(int numberOf) {

    name = "Matcha Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Matcha;
    amount = unitPrice * quantity;
}

void IceBlended::Strawberry(int numberOf) {

    name = "Strawberry Ice Blended";
    quantity = numberOf;
    unitPrice = IB_Strawberry;
    amount = unitPrice * quantity;
}

void IceBlended::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        Lemon(numberOf);
        break;
    case 2:
        Blueberry(numberOf);
        break;
    case 3:
        Chocolate(numberOf);
        break;
    case 4:
        Chocomint(numberOf);
        break;
    case 5:
        Coffee(numberOf);
        break;
    case 6:
        Matcha(numberOf);
        break;
    case 7:
        Strawberry(numberOf);
        break;
    }
}


void IceBlended::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}
