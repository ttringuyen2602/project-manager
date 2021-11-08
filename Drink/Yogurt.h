#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Yogurt : public Drink
{
private:
public:
    Yogurt();
    ~Yogurt();
    void setCheeseYogurt(int numberOf);
    void setAvocadoYogurt(int numberOf);
    void setPeachYogurt(int numberOf);
    void setMangoYogurt(int numberOf);
    void setMatchaYogurt(int numberOf);
    void setBlueberryYogurt(int numberOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Yogurt::Yogurt() {}

Yogurt::~Yogurt() {}

void Yogurt::setCheeseYogurt(int numberOf)
{
    name = "Sua chua kem pho mai";
    quantity = numberOf;
    unitPrice = 10000;
    amount = unitPrice * quantity;
}

void Yogurt::setAvocadoYogurt(int numberOf)
{
    name = "Sua chua kem bo";
    quantity = numberOf;
    unitPrice = 35000;
    amount = unitPrice * quantity;
}

void Yogurt::setPeachYogurt(int numberOf)
{
    name = "Sua chua kem dao";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::setMangoYogurt(int numberOf)
{
    name = "Sua chua kem xoai tuoi";
    quantity = numberOf;
    unitPrice = 35000;
    amount = unitPrice * quantity;
}

void Yogurt::setMatchaYogurt(int numberOf)
{
    name = "Sua chua kem tra xanh";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Yogurt::setBlueberryYogurt(int numberOf)
{
    name = "Sua chua kem viet quat";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setCheeseYogurt(numberOf);
        break;
    case 2:
        setAvocadoYogurt(numberOf);
        break;
    case 3:
        setPeachYogurt(numberOf);
        break;
    case 4:
        setMangoYogurt(numberOf);
        break;
    case 5:
        setMatchaYogurt(numberOf);
        break;
    case 6:
        setBlueberryYogurt(numberOf);
        break;
    }
}

void Yogurt::print(){
    cout << name << " x" << quantity << "\t" << unitPrice << endl;
    cout << "Thanh tien: " << amount << endl;
    cout << endl;
}