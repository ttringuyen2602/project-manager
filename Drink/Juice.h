#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
#include<fstream>
fstream juice;
class Juice : public Drink
{
private:
public:
    Juice();
    ~Juice();
    void setLemonade(int numberOf);
    void setOrangeade(int numberOf);
    void setWatermelon_Juice(int numbeOf);
    void setPassionFruit_Juice(int numbeOf);
    void setCarrot_Juice(int numbeOf);
    void setCoconutWater(int numerOf);

    void addDrink(int choose, int numberOf);
    void print();
};

Juice::Juice() {}

Juice::~Juice() {}

void Juice::setLemonade(int numberOf)
{

    name = "Nuoc Chanh";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setOrangeade(int numberOf)
{

    name = "Nuoc Cam";
    quantity = numberOf;
    unitPrice = 23000;
    amount = unitPrice * quantity;
}

void Juice::setWatermelon_Juice(int numberOf)
{

    name = "Nuoc Ep Dua Hau";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Juice::setPassionFruit_Juice(int numberOf)
{

    name = "Nuoc Ep Lemon Day";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setCarrot_Juice(int numberOf)
{

    name = "Nuoc Ep Ca Rot";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Juice::setCoconutWater(int numberOf)
{

    name = "Dua Tuoi";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Juice::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setLemonade(numberOf);
        break;
    case 2:
        setOrangeade(numberOf);
        break;
    case 3:
        setWatermelon_Juice(numberOf);
        break;
    case 4:
        setPassionFruit_Juice(numberOf);
        break;
    case 5:
        setCarrot_Juice(numberOf);
        break;
    case 6:
        setCoconutWater(numberOf);
        break;
    }
}

void Juice::print()
{
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << setw(30) << name << setw(20) << quantity << setw(20) << unitPrice << setw(20) << amount << endl;
    cout << endl;
    juice.open("report.txt",ios::app); //ghi thông tin ra file
    juice<<name<<setw(10)<<quantity<<setw(10)<<unitPrice<<setw(10)<<amount<<endl;
    juice.close();
}
