#include <iostream>
#include "Drink.h"
#include "Tea.h"
#include "Coffee.h"
#pragma once

using namespace std;

class Customer
{
private:
    static int totalPrice;
    Drink *coffee;
    Drink *tea;

public:
    Customer();
    ~Customer();
    int getTotalPrice() { return totalPrice; }
    void output(int outputDrink);
    void callDrink(int typeOfDrink, int thisDrink, int numberOf);
    void chooseCoffee(int thisDrink, int numberOf);
    void chooseTea(int thisDrink, int numberOf);
};

int Customer::totalPrice = 0;

Customer::Customer()
{
    //totalPrice = 0;
    coffee = new Coffee;
    tea = new Tea;
}

Customer::~Customer()
{
    delete coffee;
    delete tea;
}

void Customer::output(int outputDrink)
{
    switch (outputDrink)
    {
    case 1:
        tea->output();
        break;

    case 2:
        coffee->output();
        break;
    }
}

void Customer::callDrink(int typeOfDrink, int thisDrink, int numberOf)
{
    switch (typeOfDrink)
    {
    case 1: //Tea
        chooseTea(thisDrink, numberOf);
        totalPrice += tea->getAmount();
        break;
    case 2: //Coffee
        chooseCoffee(thisDrink, numberOf);
        totalPrice += coffee->getAmount();
        break;
    case 3:
        //chooseUnknown(thisDrink, numberOf);
        break;
    case 4:
        //chooseunknown(thisDrink, numberOf);
        break;
    }
}

void Customer::chooseTea(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        tea->addDrink(1, numberOf);
        break;
    case 2:
        tea->addDrink(2, numberOf);
        break;
    case 3:
        tea->addDrink(3, numberOf);
        break;
    case 4:
        tea->addDrink(4, numberOf);
        break;
    case 5:
        tea->addDrink(5, numberOf);
        break;
    case 6:
        tea->addDrink(6, numberOf);
        break;
    }
}

void Customer::chooseCoffee(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        coffee->addDrink(1, numberOf);
        break;
    case 2:
        coffee->addDrink(2, numberOf);
        break;
        // case 3:
        //     coffee->addDrink(3, numberOf);
        //     break;
        // case 4:
        //     coffee->addDrink(4, numberOf);
        //     break;
        // case 5:
        //     coffee->addDrink(5, numberOf);
        //     break;
        // case 6:
        //     coffee->addDrink(6, numberOf);
        //     break;
    }
}