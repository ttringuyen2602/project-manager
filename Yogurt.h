#include <iostream>
#include "Drink.h"
#pragma once

using namespace std;

class Yogurt : public Drink
{
private:
    const static int CHEESE_YOGURT = 10000, AVOCADO_YOGURT = 35000, PEACH_YOGURT = 25000, MANGO_YOGURT = 35000, MATCHA_YOGURT = 18000, BLUEBERRY_YOGURT = 25000;

public:
    Yogurt();
    ~Yogurt();
    void cheeseYogurt(int numberOf);
    void avocadoYogurt(int numberOf);
    void peachYogurt(int numberOf);
    void mangoYogurt(int numberOf);
    void matchaYogurt(int numberOf);
    void blueberryYogurt(int numberOf);
    void addDrink(int choose, int numberOf);
    void output();
};

Yogurt::Yogurt() {}

Yogurt::~Yogurt() {}

void Yogurt::cheeseYogurt(int numberOf)
{
    name = "Sua chua kem pho mai";
    quantity = numberOf;
    unitPrice = CHEESE_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::avocadoYogurt(int numberOf)
{
    name = "Sua chua kem bo";
    quantity = numberOf;
    unitPrice = AVOCADO_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::peachYogurt(int numberOf)
{
    name = "Sua chua kem dao";
    quantity = numberOf;
    unitPrice = PEACH_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::mangoYogurt(int numberOf)
{
    name = "Sua chua kem xoai tuoi";
    quantity = numberOf;
    unitPrice = MANGO_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::matchaYogurt(int numberOf)
{
    name = "Sua chua kem tra xanh";
    quantity = numberOf;
    unitPrice = MATCHA_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::blueberryYogurt(int numberOf)
{
    name = "Sua chua kem viet quat";
    quantity = numberOf;
    unitPrice = BLUEBERRY_YOGURT;
    amount = unitPrice * quantity;
}

void Yogurt::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        cheeseYogurt(numberOf);
        break;
    case 2:
        avocadoYogurt(numberOf);
        break;
    case 3:
        peachYogurt(numberOf);
        break;
    case 4:
        mangoYogurt(numberOf);
    case 5:
        matchaYogurt(numberOf);
    case 6:
        blueberryYogurt(numberOf);
    }
}