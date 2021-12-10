#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
using namespace std;

class Smoothie : public Drink
{
private:
public:
    Smoothie();
    ~Smoothie();
    void setAvocado_Smoothie(int numberOf);
    void setDurian_Smoothie(int numberOf);
    void setBlueberry_Smoothie(int numberOf);
    void setStrawberry_Smoothie(int numberOf);
    void setSugarApple_Smoothie(int numberOf);
    void setMango_Smoothie(int numberOf);

    void addDrink(int choose, int numberOf);
    void print();
};

Smoothie::Smoothie() {}

Smoothie::~Smoothie() {}

void Smoothie::setAvocado_Smoothie(int numberOf)
{

    name = "Sinh To Bo";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void Smoothie::setDurian_Smoothie(int numberOf)
{
    name = "Sinh To Sau Rieng";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::setBlueberry_Smoothie(int numberOf)
{
    name = "Sinh To Viet Quat";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::setStrawberry_Smoothie(int numberOf)
{
    name = "Sinh To Dau";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::setSugarApple_Smoothie(int numberOf)
{
    name = "Sinh To Mang Cau";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::setMango_Smoothie(int numberOf)
{
    name = "Sinh To Xoai";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Smoothie::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setAvocado_Smoothie(numberOf);
        break;
    case 2:
        setDurian_Smoothie(numberOf);
        break;
    case 3:
        setBlueberry_Smoothie(numberOf);
        break;
    case 4:
        setStrawberry_Smoothie(numberOf);
        break;
    case 5:
        setSugarApple_Smoothie(numberOf);
        break;
    case 6:
        setMango_Smoothie(numberOf);
        break;
    }
}

void Smoothie::print()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << setw(30) << name << setw(20) << quantity << setw(20) << unitPrice << setw(20) << amount << endl;
    cout << endl;
}
