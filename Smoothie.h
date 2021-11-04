#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Smoothie : public Drink
{
private:
    const static int AVOCADO_SMOOTHIE = 30000, DURIAN_SMOOTHIE = 25000, BLUEBERRY_SMOOTHIE = 29500, STRAWBERY_SMOOTHIE = 35000;

public:
    Smoothie();
    ~Smoothie();
    void avocadoSmoothie(int numberOf);
    void durianSmoothie(int numberOf);
    void blueberrySmoothie(int numberOf);
    void strawberySmoothie(int numberOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Smoothie::Smoothie() {}

Smoothie::~Smoothie() {}

void Smoothie::avocadoSmoothie(int numberOf)
{
    name = "Sinh to bo";
    quantity = numberOf;
    unitPrice = AVOCADO_SMOOTHIE;
    amount = unitPrice * quantity;
}

void Smoothie::durianSmoothie(int numberOf)
{
    name = "Sinh to sau rieng";
    quantity = numberOf;
    unitPrice = DURIAN_SMOOTHIE;
    amount = unitPrice * quantity;
}

void Smoothie::blueberrySmoothie(int numberOf)
{
    name = "Sinh to viet quat";
    quantity = numberOf;
    unitPrice = BLUEBERRY_SMOOTHIE;
    amount = unitPrice * quantity;
}

void Smoothie::strawberySmoothie(int numberOf)
{
    name = "Sinh to dau";
    quantity = numberOf;
    unitPrice = STRAWBERY_SMOOTHIE;
    amount = unitPrice * quantity;
}

void Smoothie::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        avocadoSmoothie(numberOf);
        break;
    case 2:
        durianSmoothie(numberOf);
        break;
    case 3:
        blueberrySmoothie(numberOf);
        break;
    case 4:
        strawberySmoothie(numberOf);
    }
}

void Smoothie::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
}
