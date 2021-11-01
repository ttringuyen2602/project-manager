#include <iostream>
#pragma once

using namespace std;

class Drink
{
protected:
    string name;   //tên sản phẩm
    int quantity;  //số lương
    int unitPrice; //đơn giá
    int amount;    //thành tiền

public:
    Drink();
    ~Drink();
    virtual void addDrink(int choose, int n) = 0;
    virtual void output();
    int getAmount() { return amount; }
};

Drink::Drink()
{
    quantity = 0;
    unitPrice = 0;
    amount = 0;
    name = "";
}

Drink::~Drink() {}

void Drink::output()
{
    cout << "Ten do uong: " << name << endl;
    cout << "Gia: " << unitPrice << endl;
    cout << "So luong: " << quantity << endl;
    cout << "Thanh tien: " << amount << endl;
}
