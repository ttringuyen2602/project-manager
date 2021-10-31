#include "Tea.h"

class Customer
{
private:
    /* data */
public:
    Customer(/* args */);
    ~Customer();
    Tea tea;
    void output();
};

Customer::Customer(/* args */)
{
}

Customer::~Customer()
{
}

void Customer::output()
{
    tea.addDrink(1, 2);
    cout << tea;
    tea.addDrink(2, 3);
    cout << tea;
    cout << "Tong thanh toan: " << tea.getTotalPay() << endl;
}

int main()
{
    Customer ctm;
    ctm.output();

    system("pause");
}
