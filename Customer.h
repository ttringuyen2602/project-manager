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

    Drink *milkTea, *gingerTea, *kumquatTea, *lemonTea, *liptonTea, *lycheeTea, *peachTea;                                                                               //Tea
    Drink *blackCoffee, *milkCoffee, *whiteCoffee, *hotCocoa, *espresso, *latte, *cappuccino, *hotChocolate;                                                             //Coffee
    Drink *lemonade, *orangeade, *watermelon_Juice, *passionFruit_Juice, *carrot_Juice, *coconutWater;                                                                   //Juice
                                                                                                                                                                         //    Drink smoothie;
                                                                                                                                                                         //    Drink yogurt;
    Drink *lemon_IceBlended, *blueberry_IceBlended, *chocolate_IceBlended, *chocomint_IceBlended, *sapocheCoffee_IceBlended, *matcha_IceBlended, *strawberry_IceBlended; //Ice Blended
                                                                                                                                                                         //    Drink soda;
    Drink *sevenUp, *cocaCola, *redbull, *revive, *sting, *c2;

    void chooseTea(int thisDrink, int numberOf);
    void chooseCoffee(int thisDrink, int numberOf);
    void chooseJuice(int thisDrink, int numberOf);
    //void chooseSmoothie(int thisDrink, int numberOf);
    //void chooseYogurt(int thisDrink, int numberOf);
    void chooseIceBlended(int thisDrink, int numberOf);
    //void chooseSoda(int thisDrink, int numberOf);
    void chooseSoftDrink(int thisDrink, int numberOf);

    void checkTea();
    void checkCoffee();
    void checkJuice();
    void checkSmoothie();
    void checkYogurt();
    void checkIceBlended();
    void checkSoda();
    void checkSoftDrink();

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
    whiteCoffee = new Coffee;
    hotCocoa = new Coffee;
    espresso = new Coffee;
    latte = new Coffee;
    cappuccino = new Coffee;
    hotChocolate = new Coffee;

    lemonade = new Juice;
    orangeade = new Juice;
    watermelon_Juice = new Juice;
    passionFruit_Juice = new Juice;
    carrot_Juice = new Juice;
    coconutWater = new Juice;

    //smoothie

    //yogurt

    lemon_IceBlended = new IceBlended;
    blueberry_IceBlended = new IceBlended;
    chocolate_IceBlended = new IceBlended;
    chocomint_IceBlended = new IceBlended;
    sapocheCoffee_IceBlended = new IceBlended;
    matcha_IceBlended = new IceBlended;
    strawberry_IceBlended = new IceBlended;

    //soda

    sevenUp = new SoftDrink;
    cocaCola = new SoftDrink;
    redbull = new SoftDrink;
    revive = new SoftDrink;
    sting = new SoftDrink;
    c2 = new SoftDrink;
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
    delete whiteCoffee;
    delete hotCocoa;
    delete espresso;
    delete latte;
    delete cappuccino;
    delete hotChocolate;

    delete lemonade;
    delete orangeade;
    delete watermelon_Juice;
    delete passionFruit_Juice;
    delete carrot_Juice;
    delete coconutWater;

    //smoothie

    //yogurt

    delete lemon_IceBlended;
    delete blueberry_IceBlended;
    delete chocolate_IceBlended;
    delete chocomint_IceBlended;
    delete sapocheCoffee_IceBlended;
    delete matcha_IceBlended;
    delete strawberry_IceBlended;

    // soda

    delete sevenUp;
    delete cocaCola;
    delete redbull;
    delete revive;
    delete sting;
    delete c2;
}

void Customer::output(int outputDrink)
{
    switch (outputDrink)
    {
    case 1:
        checkTea();
        break;
    case 2:
        checkCoffee();
        break;
    case 3:
        checkJuice();
        break;
    case 4:
        checkSmoothie();
        break;
    case 5:
        checkYogurt();
        break;
    case 6:
        checkIceBlended();
        break;
    case 7:
        checkSoda();
        break;
    case 8:
        checkSoftDrink();
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
        // case 3: //Juice
        //     chooseJuice(thisDrink, numberOf);
        //     break;
        // case 4: //Smoothie
        //     chooseSmoothie(thisDrink, numberOf);
        //     break;
        // case 5: //Yogurt
        //     chooseYogurt(thisDrink, numberOf);
        //     break;
        // case 6: //Ice Blended
        //     chooseIceBlended(thisDrink, numberOf);
        //     break;
        // case 7: //Soda
        //     chooseSoda(thisDrink, numberOf);
        //     break;
        // case 8: //Soft Drink
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
    case 3:
        whiteCoffee->addDrink(3, numberOf);
        totalPrice += whiteCoffee->getAmount();
        break;
    case 4:
        hotCocoa->addDrink(4, numberOf);
        totalPrice += hotCocoa->getAmount();
        break;
    case 5:
        espresso->addDrink(5, numberOf);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        latte->addDrink(6, numberOf);
        totalPrice += latte->getAmount();
        break;
    case 7:
        cappuccino->addDrink(7, numberOf);
        totalPrice += cappuccino->getAmount();
        break;
    case 8:
        hotChocolate->addDrink(8, numberOf);
        totalPrice += hotChocolate->getAmount();
        break;
    }
}

void Customer::chooseJuice(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        lemonade->addDrink(1, numberOf);
        totalPrice += lemonade->getAmount();
        break;
    case 2:
        orangeade->addDrink(2, numberOf);
        totalPrice += orangeade->getAmount();
        break;
    case 3:
        watermelon_Juice->addDrink(3, numberOf);
        totalPrice += watermelon_Juice->getAmount();
        break;
    case 4:
        passionFruit_Juice->addDrink(4, numberOf);
        totalPrice += passionFruit_Juice->getAmount();
        break;
    case 5:
        carrot_Juice->addDrink(5, numberOf);
        totalPrice += carrot_Juice->getAmount();
        break;
    case 6:
        coconutWater->addDrink(6, numberOf);
        totalPrice += coconutWater->getAmount();
        break;
    }
}

//void Customer::chooseSmoothie(int thisDrink, int numberOf){}

//void Customer::chooseYogurt(int thisDrink, int numberOf){}

void Customer::chooseIceBlended(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        lemon_IceBlended->addDrink(1, numberOf);
        totalPrice += lemon_IceBlended->getAmount();
        break;
    case 2:
        blueberry_IceBlended->addDrink(2, numberOf);
        totalPrice += blueberry_IceBlended->getAmount();
        break;
    case 3:
        chocolate_IceBlended->addDrink(3, numberOf);
        totalPrice += chocolate_IceBlended->getAmount();
        break;
    case 4:
        chocomint_IceBlended->addDrink(4, numberOf);
        totalPrice += chocomint_IceBlended->getAmount();
        break;
    case 5:
        sapocheCoffee_IceBlended->addDrink(5, numberOf);
        totalPrice += sapocheCoffee_IceBlended->getAmount();
        break;
    case 6:
        matcha_IceBlended->addDrink(6, numberOf);
        totalPrice += matcha_IceBlended->getAmount();
        break;
    case 7:
        strawberry_IceBlended->addDrink(7, numberOf);
        totalPrice += strawberry_IceBlended->getAmount();
        break;
    }
}

//void Customer::chooseSoda(int thisDrink, int numberOf){}

void Customer::chooseSoftDrink(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        sevenUp->addDrink(1, numberOf);
        totalPrice += sevenUp->getAmount();
        break;
    case 2:
        cocaCola->addDrink(2, numberOf);
        totalPrice += cocaCola->getAmount();
        break;
    case 3:
        redbull->addDrink(3, numberOf);
        totalPrice += redbull->getAmount();
        break;
    case 4:
        revive->addDrink(4, numberOf);
        totalPrice += revive->getAmount();
        break;
    case 5:
        sting->addDrink(5, numberOf);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        c2->addDrink(6, numberOf);
        totalPrice += c2->getAmount();
        break;
    }
}

void Customer::checkTea()
{
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
}

void Customer::checkCoffee()
{
    if (blackCoffee->getQuantity() != 0)
        blackCoffee->print();
    if (milkCoffee->getQuantity() != 0)
        milkCoffee->print();
    if (whiteCoffee->getQuantity() != 0)
        whiteCoffee->print();
    if (hotCocoa->getQuantity() != 0)
        hotCocoa->print();
    if (espresso->getQuantity() != 0)
        espresso->print();
    if (latte->getQuantity() != 0)
        latte->print();
    if (cappuccino->getQuantity() != 0)
        cappuccino->print();
    if (hotChocolate->getQuantity() != 0)
        hotChocolate->print();
}

void Customer::checkJuice()
{
    if (lemonade->getQuantity() != 0)
        lemonade->print();
    if (orangeade->getQuantity() != 0)
        orangeade->print();
    if (watermelon_Juice->getQuantity() != 0)
        watermelon_Juice->print();
    if (passionFruit_Juice->getQuantity() != 0)
        passionFruit_Juice->print();
    if (carrot_Juice->getQuantity() != 0)
        carrot_Juice->print();
    if (coconutWater->getQuantity() != 0)
        coconutWater->print();
}

void Customer::checkSmoothie() {}
void Customer::checkYogurt() {}

void Customer::checkIceBlended()
{
    if (lemon_IceBlended->getQuantity() != 0)
        lemon_IceBlended->print();
    if (blueberry_IceBlended->getQuantity() != 0)
        blueberry_IceBlended->print();
    if (chocolate_IceBlended->getQuantity() != 0)
        chocolate_IceBlended->print();
    if (chocomint_IceBlended->getQuantity() != 0)
        chocomint_IceBlended->print();
    if (sapocheCoffee_IceBlended->getQuantity() != 0)
        sapocheCoffee_IceBlended->print();
    if (matcha_IceBlended->getQuantity() != 0)
        matcha_IceBlended->print();
    if (strawberry_IceBlended->getQuantity() != 0)
        strawberry_IceBlended->print();
}

void Customer::checkSoda() {}

void Customer::checkSoftDrink()
{
    if (sevenUp->getQuantity() != 0)
        sevenUp->print();
    if (cocaCola->getQuantity() != 0)
        cocaCola->print();
    if (redbull->getQuantity() != 0)
        redbull->print();
    if (revive->getQuantity() != 0)
        revive->print();
    if (sting->getQuantity() != 0)
        sting->print();
    if (c2->getQuantity() != 0)
        c2->print();
}
