#include <iostream>
#include "Drink\Drink.h"
#include "Drink\Tea.h"
#include "Drink\Coffee.h"
#include "Drink\Juice.h"
#include "Drink\Smoothie.h"
#include "Drink\Yogurt.h"
#include "Drink\IceBlended.h"
#include "Drink\Soda.h"
#include "Drink\SoftDrink.h"
#pragma once

using namespace std;

class Customer
{
private:
    static int totalPrice;

    Drink *milkTea, *gingerTea, *kumquatTea, *lemonTea, *liptonTea, *lycheeTea, *peachTea;

    Drink *blackCoffee, *milkCoffee;

    void chooseTea(int thisDrink, int numberOf);
    void chooseCoffee(int thisDrink, int numberOf);

public:
    Customer();
    ~Customer();
    int getTotalPrice() { return totalPrice; }
    void callDrink(int typeOfDrink, int thisDrink, int numberOf);
    void output(int outputDrink);
    void mergeBill();
};

int Customer::totalPrice = 0;

Customer::Customer()
{
    milkTea = new Tea;
    gingerTea = new Tea;
    kumquatTea = new Tea;
    lemonTea = new Tea;
    liptonTea = new Tea;
    lycheeTea = new Tea;
    peachTea = new Tea;

    blackCoffee = new Coffee;
    milkCoffee = new Coffee;
}

Customer::~Customer()
{
    delete milkTea;
    delete gingerTea;
    delete kumquatTea;
    delete lemonTea;
    delete liptonTea;
    delete lycheeTea;
    delete peachTea;

    delete blackCoffee;
    delete milkCoffee;
}

void Customer::output(int outputDrink)
{
    switch (outputDrink)
    {
    case 1:
        if (milkTea->getQuantity() != 0)
            milkTea->print();
        if (gingerTea->getQuantity() != 0)
            gingerTea->print();
        if (kumquatTea->getQuantity() != 0)
            kumquatTea->print();
        if (lemonTea->getQuantity() != 0)
            lemonTea->print();
        if (liptonTea->getQuantity() != 0)
            liptonTea->print();
        if (lycheeTea->getQuantity() != 0)
            lycheeTea->print();
        if (peachTea->getQuantity() != 0)
            peachTea->print();
        break;

    case 2:
        if (blackCoffee->getQuantity() != 0)
            blackCoffee->print();
        if (milkCoffee->getQuantity() != 0)
            milkCoffee->print();
        break;
    }
}

void Customer::callDrink(int typeOfDrink, int thisDrink, int numberOf)
{
    switch (typeOfDrink)
    {
    case 1: //Tea
        chooseTea(thisDrink, numberOf);
        break;
    case 2: //Coffee
        chooseCoffee(thisDrink, numberOf);
        break;
        // case 3:
        //     chooseJuice(thisDrink, numberOf);
        //     break;
        // case 4:
        //     chooseSmoothie(thisDrink, numberOf);
        //     break;
        // case 5:
        //     chooseYogurt(thisDrink, numberOf);
        //     break;
        // case 6:
        //     chooseIceBlended(thisDrink, numberOf);
        //     break;
        // case 7:
        //     chooseSoda(thisDrink, numberOf);
        //     break;
        // case 8:
        //     chooseSoftDrink(thisDrink, numberOf);
        //     break;
    }
}

void Customer::chooseTea(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        milkTea->addDrink(1, numberOf);
        totalPrice += milkTea->getAmount();
        break;
    case 2:
        gingerTea->addDrink(2, numberOf);
        totalPrice += gingerTea->getAmount();
        break;
    case 3:
        kumquatTea->addDrink(3, numberOf);
        totalPrice += kumquatTea->getAmount();
        break;
    case 4:
        lemonTea->addDrink(4, numberOf);
        totalPrice += lemonTea->getAmount();
        break;
    case 5:
        liptonTea->addDrink(5, numberOf);
        totalPrice += liptonTea->getAmount();
        break;
    case 6:
        lycheeTea->addDrink(6, numberOf);
        totalPrice += lycheeTea->getAmount();
        break;
    case 7:
        peachTea->addDrink(6, numberOf);
        totalPrice += peachTea->getAmount();
        break;
    }
}

void Customer::chooseCoffee(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        blackCoffee->addDrink(1, numberOf);
        totalPrice += blackCoffee->getAmount();
        break;
    case 2:
        milkCoffee->addDrink(2, numberOf);
        totalPrice += milkCoffee->getAmount();
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
