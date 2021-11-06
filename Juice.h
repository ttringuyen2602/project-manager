#include <iostream>
#include "Drink.h"
#pragma once

class Juice : public Drink
{
private:
    const static int CHANH = 20000, CAM = 23000, DUA_HAU = 25000,
        CHANH_DAY = 20000, CA_ROT = 20000, DUA = 20000;

public:
    Juice();
    ~Juice();
    void Chanh(int numberOf);
    void Cam(int numberOf);
    void DuaHau(int numbeOf);
    void ChanhDay(int numbeOf);
    void CaRot(int numbeOf);
    void Dua(int numerOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Juice::Juice() {}

Juice::~Juice() {}

void Juice::Chanh(int numberOf) {

    name = "Nuoc Ep Chanh";
    quantity = numberOf;
    unitPrice = CHANH;
    amount = unitPrice * quantity;
}

void Juice::Cam(int numberOf) {

    name = "Nuoc Ep Cam";
    quantity = numberOf;
    unitPrice = CAM;
    amount = unitPrice * quantity;
}

void Juice::DuaHau(int numberOf) {

    name = "Nuoc Ep Dua Hau";
    quantity = numberOf;
    unitPrice = DUA_HAU;
    amount = unitPrice * quantity;
}

void Juice::ChanhDay(int numberOf) {

    name = "Nuoc Ep Chanh Day";
    quantity = numberOf;
    unitPrice = CHANH_DAY;
    amount = unitPrice * quantity;
}

void Juice::CaRot(int numberOf) {

    name = "Nuoc Ep Ca Rot";
    quantity = numberOf;
    unitPrice = CA_ROT;
    amount = unitPrice * quantity;
}

void Juice::Dua(int numberOf) {

    name = "Nuoc Ep Dua";
    quantity = numberOf;
    unitPrice = DUA;
    amount = unitPrice * quantity;
}
void Juice::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        Chanh(numberOf);
        break;
    case 2:
        Cam(numberOf);
        break;
    case 3:
        DuaHau(numberOf);
        break;
    case 4:
        ChanhDay(numberOf);
        break;
    case 5:
        CaRot(numberOf);
        break;
    case 6:
        Dua(numberOf);
        break;
    }
}


void Juice::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}