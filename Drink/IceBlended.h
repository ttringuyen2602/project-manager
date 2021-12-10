#include <iostream>
#pragma once
#include "Drink.h"
#include <iomanip>
using namespace std;

class IceBlended : public Drink
{
private:
public:
    IceBlended();
    ~IceBlended();
    void setLemon_IceBlended(int numberOf);
    void setBlueberry_IceBlended(int numberOf);
    void setChocolate_IceBlended(int numbeOf);
    void setMint_IceBlended(int numbeOf);
    void setSapocheCoffee_IceBlended(int numbeOf);
    void setMatcha_IceBlended(int numerOf);
    void setStrawberry_IceBlended(int numerOf);

    void addDrink(int choose, int numberOf);
    void print();
};

IceBlended::IceBlended() {}

IceBlended::~IceBlended() {}

void IceBlended::setLemon_IceBlended(int numberOf)
{

    name = "Chanh Tuyet";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setBlueberry_IceBlended(int numberOf)
{

    name = "Blueberry Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setChocolate_IceBlended(int numberOf)
{

    name = "Chocolate Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setMint_IceBlended(int numberOf)
{

    name = "Mint Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setSapocheCoffee_IceBlended(int numberOf)
{

    name = "Coffee Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setMatcha_IceBlended(int numberOf)
{

    name = "Matcha Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::setStrawberry_IceBlended(int numberOf)
{

    name = "Strawberry Ice Blended";
    quantity = numberOf;
    unitPrice = 30000;
    amount = unitPrice * quantity;
}

void IceBlended::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setLemon_IceBlended(numberOf);
        break;
    case 2:
        setBlueberry_IceBlended(numberOf);
        break;
    case 3:
        setChocolate_IceBlended(numberOf);
        break;
    case 4:
        setMint_IceBlended(numberOf);
        break;
    case 5:
        setSapocheCoffee_IceBlended(numberOf);
        break;
    case 6:
        setMatcha_IceBlended(numberOf);
        break;
    case 7:
        setStrawberry_IceBlended(numberOf);
        break;
    }
}

void IceBlended::print()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(0);
    cout << setw(30) << name << " (da / duong " << rateOfIce << " / " << rateOfSugar << ")" << setw(20) << quantity << setw(20) << unitPrice << setw(20) << amount << endl;
    cout << endl;
}
