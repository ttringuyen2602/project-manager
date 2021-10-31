#include "Drink.h"

class Tea : public Drink
{
private:
    const static int MILK_TEA = 20000, KUMQUAT_TEA = 12000, PEACH_TEA = 20000, GINGER_TEA = 20000, LEMON_TEA = 20000, LIPTON_TEA = 20000;

public:
    Tea();
    ~Tea();
    Tea milkTea(int n);
    Tea kumquatTea(int n);
    friend ostream &operator<<(ostream &output, const Tea &tea);
    void addDrink(int choose, int n);
};

Tea::Tea()
{
}

Tea::~Tea() {}

Tea Tea::milkTea(int n)
{
    this->name = "Tra Sua";
    this->quantity = n;
    this->unitPrice = MILK_TEA;
    this->amount = unitPrice * quantity;
    totalPay = totalPay + amount;
    return *this;
}

Tea Tea::kumquatTea(int n)
{
    this->name = "Tra Tac";
    this->quantity = n;
    this->unitPrice = KUMQUAT_TEA;
    this->amount = unitPrice * quantity;
    totalPay = totalPay + amount;
    return *this;
}

void Tea::addDrink(int choose, int n)
{
    switch (choose)
    {
    case 1:
        milkTea(n);
        break;
    case 2:
        kumquatTea(n);
        break;
    }
}

ostream &operator<<(ostream &output, const Tea &tea)
{
    output << "Ten do uong: " << tea.name << endl;
    output << "So luong: " << tea.quantity << endl;
    output << "Gia: " << tea.unitPrice << endl;
    output << "Thanh tien: " << tea.amount << endl;
    return output;
}