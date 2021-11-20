#include <iostream>
#include "Drink.h"
#pragma once
#include <iomanip>
using namespace std;

class Soda : public Drink
{
private:
public:
    Soda();
    ~Soda();
    void setLemon_Soda(int numberOf);
    void setPeach_Soda(int numberOf);
    void setMint_Soda(int numberOf);
    void setPassion_Soda(int numberOf);
    void setKiwi_Soda(int numberOf);
    void setRaspberry_Soda(int numberOf);

    void addDrink(int choose, int numberOf);
    void print();
};

Soda::Soda() {}

Soda::~Soda() {}

void Soda::setLemon_Soda(int numberOf)
{

    name = "Soda Chanh";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setPeach_Soda(int numberOf)
{
    name = "Soda Dao";
    quantity = numberOf;
    unitPrice = 18000;
    amount = unitPrice * quantity;
}

void Soda::setMint_Soda(int numberOf)
{
    name = "Soda Bac Ha";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Soda::setPassion_Soda(int numberOf)
{
    name = "Soda Chanh Day";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Soda::setKiwi_Soda(int numberOf)
{
    name = "Soda Kiwi";
    quantity = numberOf;
    unitPrice = 20000;
    amount = unitPrice * quantity;
}

void Soda::setRaspberry_Soda(int numberOf)
{
    name = "Soda Phuc Bon Tu";
    quantity = numberOf;
    unitPrice = 25000;
    amount = unitPrice * quantity;
}

void Soda::addDrink(int choose, int numberOf)
{
    switch (choose)
    {
    case 1:
        setLemon_Soda(numberOf);
        break;
    case 2:
        setPeach_Soda(numberOf);
        break;
    case 3:
        setMint_Soda(numberOf);
        break;
    case 4:
        setPassion_Soda(numberOf);
        break;
    case 5:
        setKiwi_Soda(numberOf);
        break;
    case 6:
        setRaspberry_Soda(numberOf);
        break;
    }
}

void Soda::print()
{
   cout <<setw(20)<<name <<setw(20)<< quantity <<setw(20)<< unitPrice <<setw(20)<<amount<<endl;
    cout << endl;
}
