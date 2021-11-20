#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
using namespace std;

class Yogurt : public Drink
{
private:
public:
    Yogurt();
    ~Yogurt();
    void setCheese_Yogurt(int numberOf);
    void setAvocado_Yogurt(int numberOf);
    void setLychee_Yogurt(int numberOf);
    void setMango_Yogurt(int numberOf);
    void setMatcha_Yogurt(int numberOf);
    void setBlueberry_Yogurt(int numberOf);

    void addDrink(int choose, int numberOf);
    void print();
};

Yogurt::Yogurt() {}

Yogurt::~Yogurt() {}

void Yogurt::setCheese_Yogurt(int numberOf)
{

    name = "Sua Chua Kem Pho Mai";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Yogurt::setAvocado_Yogurt(int numberOf)
{
    name = "Sua Chua Kem Bo";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::setLychee_Yogurt(int numberOf)
{
    name = "Sua Chua Vai";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::setMango_Yogurt(int numberOf)
{
    name = "Sua Chua Kem Xoai Tuoi";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Yogurt::setMatcha_Yogurt(int numberOf)
{
    name = "Sua Chua Kem Tra Xanh";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::setBlueberry_Yogurt(int numberOf)
{
    name = "Sua Chua Viet Quat";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Yogurt::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setCheese_Yogurt(numberOf);
        break;
    case 2:
        setAvocado_Yogurt(numberOf);
        break;
    case 3:
        setLychee_Yogurt(numberOf);
        break;
    case 4:
        setMango_Yogurt(numberOf);
        break;
    case 5:
        setMatcha_Yogurt(numberOf);
        break;
    case 6:
        setBlueberry_Yogurt(numberOf);
        break;
    }
}

void Yogurt::print()
{
    cout <<setw(30)<<name <<setw(20)<< quantity <<setw(20)<< unitPrice <<setw(20)<<amount<<endl;
    cout << endl;
}
