#include <iostream>
#include "Drink.h"
#pragma once

class SoftDrink : public Drink
{
private:
    const static int SEVENUP = 18000, PEPSI = 18000, COCA = 18000, RED_BULL = 20000,
        REVIVE = 18000, STING = 18000, STING_THAI = 18000, C2 = 15000;

public:
    SoftDrink();
    ~SoftDrink();
    void SevenUp(int numberOf);
    void Pepsi(int numberOf);
    void Coca(int numbeOf);
    void Redbull(int numbeOf);
    void Revive(int numbeOf);
    void Sting(int numerOf);
    void StingThai(int numerOf);
    void c2(int numerOf);
    void addDrink(int choose, int numberOf);
    void output();
};

SoftDrink::SoftDrink() {}

SoftDrink::~SoftDrink() {}

void SoftDrink::SevenUp(int numberOf) {

    name = "7UP";
    quantity = numberOf;
    unitPrice = SEVENUP;
    amount = unitPrice * quantity;
}

void SoftDrink::Pepsi(int numberOf)
{
    name = "Pepsi";
    quantity = numberOf;
    unitPrice = PEPSI;
    amount = unitPrice * quantity;
}

void SoftDrink::Coca(int numberOf) {
    name = "Coca-Cola";
    quantity = numberOf;
    unitPrice = COCA;
    amount = unitPrice * quantity;
}

void SoftDrink::Redbull(int numberOf) {
    name = "Redbull";
    quantity = numberOf;
    unitPrice = RED_BULL;
    amount = unitPrice * quantity;
}

void SoftDrink::Revive(int numberOf) {
    name = "Revive";
    quantity = numberOf;
    unitPrice = REVIVE;
    amount = unitPrice * quantity;
}

void SoftDrink::Sting(int numberOf) {
    name = "Sting";
    quantity = numberOf;
    unitPrice = STING;
    amount = unitPrice * quantity;
}

void SoftDrink::StingThai(int numberOf) {
    name = "Sting Thai";
    quantity = numberOf;
    unitPrice = STING_THAI;
    amount = unitPrice * quantity;
}

void SoftDrink::c2(int numberOf) {
    name = "C2";
    quantity = numberOf;
    unitPrice = C2;
    amount = unitPrice * quantity;
}

void SoftDrink::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        SevenUp(numberOf);
        break;
    case 2:
        Pepsi(numberOf);
        break;
    case 3:
        Coca(numberOf);
        break;
    case 4:
        Redbull(numberOf);
        break;
    case 5:
        Revive(numberOf);
        break;
    case 6:
        Sting(numberOf);
        break;
    case 7:
        StingThai(numberOf);
        break;
    case 8:
        c2(numberOf);
        break;
    }
}


void SoftDrink::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}