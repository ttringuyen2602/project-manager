#include "Drink.h"
#include "Tea.h"

class Customer
{
private:
public:
    Customer();
    ~Customer();
    Drink *tea;
    void output();
};

Customer::Customer()
{
    tea = new Tea;
}

Customer::~Customer()
{
    delete tea;
}

void Customer::output()
{
    tea->addDrink(1, 2);
    tea->output();
    tea->addDrink(2, 3);
    tea->output();
    cout << "Tong thanh toan: " << tea->getTotalPay() << endl;
}

int main()
{
    Customer ctm;
    ctm.output();

    system("pause");
}
