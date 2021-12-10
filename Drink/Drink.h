#include <iostream>
#pragma once

using namespace std;

class Drink
{
protected:
    string name;      // tên sản phẩm
    int quantity;     // số lương
    double unitPrice; //đơn giá
    double amount;    // thành tiền
    int rateOfIce;
    int rateOfSugar;

public:
    Drink();
    Drink(string name, int quantity, int unitPrice, int amount);
    Drink(const Drink &drink);
    ~Drink();
    virtual void addDrink(int choose, int n) = 0;
    virtual void print() = 0;
    double getAmount() { return amount; }
    int getQuantity() { return quantity; }
    string getName() { return name; }
    Drink &operator+=(const Drink &drink);
    int getRateOfIce() { return rateOfIce; }
    int getRateOfSugar() { return rateOfSugar; }
    void setRate(int rateOfIce, int rateOfSugar)
    {
        this->rateOfIce = rateOfIce;
        this->rateOfSugar = rateOfSugar;
    }
};

Drink::Drink()
{
    quantity = 0;
    unitPrice = 0;
    amount = 0;
    name = "";
    rateOfIce = 0;
    rateOfSugar = 0;
}

Drink::Drink(string name, int quantity, int unitPrice, int amount)
{
    this->name = name;
    this->quantity = quantity;
    this->unitPrice = unitPrice;
    this->amount = amount;
}

Drink::Drink(const Drink &drink)
{
    this->name = drink.name;
    this->quantity = drink.quantity;
    this->unitPrice = drink.unitPrice;
    this->amount = drink.amount;
}

Drink::~Drink()
{
    quantity = 0;
    unitPrice = 0;
    amount = 0;
    name = "";
}

Drink &Drink::operator+=(const Drink &drink)
{
    this->name = drink.name;
    this->quantity += drink.quantity;
    this->unitPrice = drink.unitPrice;
    this->amount += drink.amount;
    return *this;
}
