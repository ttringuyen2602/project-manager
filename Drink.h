#include <iostream>

using namespace std;

class Drink
{
protected:
    string name;   //tên sản phẩm
    int quantity;  //số lương
    int unitPrice; //đơn giá
    int amount;    //thành tiền
    static int totalPay;

public:
    Drink();
    ~Drink();
    virtual void addDrink(int choose, int n) = 0;
    int getTotalPay() { return totalPay; };
};
int Drink::totalPay = 0;

Drink::Drink()
{
    quantity = 0;
    unitPrice = 0;
    amount = 0;
    name = "";
}

Drink::~Drink() {}
