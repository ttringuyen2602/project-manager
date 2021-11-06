#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Coffee : public Drink
{
private:
    const static int BLACK_COFFEE = 16000, MILK_COFFEE = 18000, BAC_XIU = 20000, CA_CAO = 20000, BLACK_ESPRESSO = 13000;
    LATTE = 25000; CAPPUCCINO = 25000;

public:
    Coffee();
    ~Coffee();
    void blackCoffee(int numberOf);
    void milkCoffee(int numberOf);
    void BacXiu(int numbeOf);
    void CaCao(int numbeOf);
    void blackEspresso(int numbeOf);
    void Latte(int numbeOf);
    void Cappuccino(int numbeOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Coffee::Coffee() {}

Coffee::~Coffee() {}

void Coffee::blackCoffee(int numberOf){

    name = "Ca Phe Den";
    quantity = numberOf;
    unitPrice = BLACK_COFFEE;
    amount = unitPrice * quantity;
}

void Coffee::milkCoffee(int numberOf)
{
    name = "Ca Phe Sua";
    quantity = numberOf;
    unitPrice = MILK_COFFEE;
    amount = unitPrice * quantity;
}

void Coffee::BacXiu(int numberOf) {
    name = "Bac Xiu";
    quantity = numberOf;
    unitPrice = BAC_XIU;
    amount = unitPrice * quantity;
}

void Coffee::CaCao(int numberOf) {
    name = "Ca Cao";
    quantity = numberOf;
    unitPrice = CA_CAO;
    amount = unitPrice * quantity;
}

void Coffee::blackEspresso(int numberOf) {
    name = "Espresso Den";
    quantity = numberOf;
    unitPrice = BLACK_ESPRESSO;
    amount = unitPrice * quantity;
}

void Coffee::Latte(int numberOf) {
    name = "Ca Phe Tao Hinh";
    quantity = numberOf;
    unitPrice = LATTE;
    amount = unitPrice * quantity;
}

void Coffee::Cappuccino(int numberOf) {
    name = "Ca Phe Y";
    quantity = numberOf;
    unitPrice = CAPPUCCINO;
    amount = unitPrice * quantity;
}

void Coffee::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        blackCoffee(numberOf);
        break;
    case 2:
        milkCoffee(numberOf);
        break;
    case 3:
        BacXiu(numberOf);
        break;
    case 4:
        CaCao(numberOf);
        break;
    case 5:
        blackEspresso(numberOf);
        break;
    case 7:
        Latte(numberOf);
        break;
    case 8:
        Cappuccino(numberOf);
        break;
    }
}


void Coffee::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}
