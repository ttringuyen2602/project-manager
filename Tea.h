#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
#include <fstream>
using namespace std;
fstream tea;
class Tea : public Drink
{
private:
public:
    Tea();
    ~Tea();
    void setMilkTea(int numberOf);
    void setGingerTea(int numberOf);
    void setKumquatTea(int numberOf);
    void setLemonTea(int numberOf);
    void setLiptonTea(int numberOf);
    void setLycheeTea(int numberOf);
    void setPeachTea(int numberOf);
    void addDrink(int choose, int numberOf);
    void print();
};

Tea::Tea() {}

Tea::~Tea() {}

void Tea::setMilkTea(int numberOf)
{
    name = "Tra Sua";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Tea::setGingerTea(int numberOf)
{
    name = "Tra Gung";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Tea::setKumquatTea(int numberOf)
{
    name = "Tra Tac";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Tea::setLemonTea(int numberOf)
{
    name = "Tra Chanh";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Tea::setLiptonTea(int numberOf)
{
    name = "Tra Lipton";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}
void Tea::setLycheeTea(int numberOf)
{
    name = "Tra Vai";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}
void Tea::setPeachTea(int numberOf)
{
    name = "Tra Dao";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Tea::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setMilkTea(numberOf);
        break;
    case 2:
        setGingerTea(numberOf);
        break;
    case 3:
        setKumquatTea(numberOf);
        break;
    case 4:
        setLemonTea(numberOf);
        break;
    case 5:
        setLiptonTea(numberOf);
        break;
    case 6:
        setLycheeTea(numberOf);
        break;
    case 7:
        setPeachTea(numberOf);
        break;
    }
}

void Tea::print()
{	
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    cout << setw(30) << name << setw(20) << quantity << setw(20) << unitPrice << setw(20) << amount << endl;
    cout << endl;
    tea.open("report.txt",ios::app);
    tea<<name<<setw(10)<<quantity<<setw(10)<<unitPrice<<setw(10)<<amount<<endl;
    tea.close();
}
