#include <iostream>
#include <conio.h>
#include "Table.h"

using namespace std;

//In ra danh sách các thao tác
void PrintMenu()
{
    cout << "\t1. Goi Do Uong" << endl;
    cout << "\t2. Xoa Do Uong" << endl;
    cout << "\t3. Xem Bill" << endl;
    cout << "\t4. Tinh Tien" << endl;
    cout << "\t5. Thoat" << endl;
}

void TeaMenu()
{
    cout << "\t1. Milk Tea" << endl;
    cout << "\t2. Ginger Tea" << endl;
    cout << "\t3. Kumquat Tea" << endl;
    cout << "\t4. Lemon Tea" << endl;
    cout << "\t5. Lipton Tea" << endl;
    cout << "\t6. Lychee Tea" << endl;
    cout << "\t7. Peach Tea" << endl;
}

void CoffeeMenu()
{
    cout << "\t1. Black Coffee" << endl;
    cout << "\t2. Milk Coffee" << endl;
    cout << "\t3. White Coffee" << endl;
    cout << "\t4. Hot Cocoa" << endl;
    cout << "\t5. Espresso" << endl;
    cout << "\t6. Latte" << endl;
    cout << "\t7. Cappuccino" << endl;
    cout << "\t8. Hot Chocolate" << endl;
}

void JuiceMenu()
{
    cout << "\t1. Lemonade" << endl;
    cout << "\t2. Orangeade" << endl;
    cout << "\t3. Watermelon Juice" << endl;
    cout << "\t4. Passion Fruit Juice" << endl;
    cout << "\t5. Carrot Juice" << endl;
    cout << "\t6. Coconut Water" << endl;
}

void SmoothieMenu()
{
    cout << "\t1. Avocado Smoothie" << endl;
    cout << "\t2. Durian Smoothie" << endl;
    cout << "\t3. Blueberry Smoothie" << endl;
    cout << "\t4. Strawberry Smoothie" << endl;
    cout << "\t5. Sugar Apple Smoothie" << endl;
    cout << "\t6. Mango Smoothie" << endl;
}

void YogurtMenu()
{
    cout << "\t1. Chesse Yogurt" << endl;
    cout << "\t2. Avocado Yogurt" << endl;
    cout << "\t3. Lychee Yogurt" << endl;
    cout << "\t4. Mango Yogurt" << endl;
    cout << "\t5. Matcha Yogurt" << endl;
    cout << "\t6. Blueberry Yogurt" << endl;
}

void IceBlendedMenu()
{
    cout << "\t1. Lemon Ice Blended" << endl;
    cout << "\t2. Blueberry Ice Blended" << endl;
    cout << "\t3. Chocolate Ice Blended" << endl;
    cout << "\t4. Mint Ice Blended" << endl;
    cout << "\t5. Sapoche Coffee Ice Blended" << endl;
    cout << "\t6. Matcha Ice Blended" << endl;
    cout << "\t7. Strawberry Ice Blended" << endl;
}

void SodaMenu()
{
    cout << "\t1. Lemon Soda" << endl;
    cout << "\t2. Peach Soda" << endl;
    cout << "\t3. Mint Soda" << endl;
    cout << "\t4. Passion Soda" << endl;
    cout << "\t5. Kiwi Soda" << endl;
    cout << "\t6. Raspberry Soda" << endl;
}

void SoftDrinkMenu()
{
    cout << "\t1. Seven Up" << endl;
    cout << "\t2. Coca-Cola" << endl;
    cout << "\t3. Redbull" << endl;
    cout << "\t4. Revive" << endl;
    cout << "\t5. Sting" << endl;
    cout << "\t6. C2" << endl;
}

void DrinkMenu(int &typeOfDrink, int &thatDrink)
{
    cout << "\t1. TEA" << endl;
    cout << "\t2. COFFEE" << endl;
    cout << "\t3. JUICE" << endl;
    cout << "\t4. SMOOTHIE" << endl;
    cout << "\t5. YOGURT" << endl;
    cout << "\t6. ICE BLENDED" << endl;
    cout << "\t7. SODA" << endl;
    cout << "\t8. SOFT DRINK" << endl;

    cout << "Chon: ";
    cin >> typeOfDrink;
    if (typeOfDrink < 0 || typeOfDrink > 8)
    {
        cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
        cout << endl;
        getch();
        typeOfDrink = -1;
        return;
    }

    switch (typeOfDrink)
    {
    case 1:
        system("cls");
        TeaMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 7)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 2:
        system("cls");
        CoffeeMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 8)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 3:
        system("cls");
        JuiceMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 6)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 4:
        system("cls");
        SmoothieMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 6)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 5:
        system("cls");
        YogurtMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 6)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 6:
        system("cls");
        IceBlendedMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 7)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 7:
        system("cls");
        SodaMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 6)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 8:
        system("cls");
        SoftDrinkMenu();
        cout << "Chon: ";
        cin >> thatDrink;
        if (thatDrink < 1 || thatDrink > 6)
        {
            cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
            goto wrong_choose;
        }
        break;
    case 0:
        return;
    default:
    wrong_choose:
        thatDrink = -1;
        break;
    }
}

void Choose(Table table[])
{
    int n;
    int tableNumber;
    int typeOfDrink, thatDrink, numberOf;

    do
    {
        system("cls");
        PrintMenu();

        cout << "Nhap lua chon tren Menu: ";
        cin >> n;
        switch (n)
        {
        case 1:
            cout << "Ban so? ";
            cin >> tableNumber;
            while (true)
            {
                system("cls");
                DrinkMenu(typeOfDrink, thatDrink);
                if (typeOfDrink == 0)
                    break;
                if (typeOfDrink == -1 || thatDrink == -1)
                    continue;

                cout << "So luong: ";
                cin >> numberOf;
                table[tableNumber].customer.callDrink(typeOfDrink, thatDrink, numberOf);
            }
            break;
        case 2:
            cout << "Ban so? ";
            cin >> tableNumber;
            system("cls");
            table[tableNumber].customer.removeDrink(typeOfDrink, thatDrink);
            break;
        case 3:
            cout << "Ban so? ";
            cin >> tableNumber;
            table[tableNumber].customer.printIfExist();
            getch();
            break;
        case 4:
            cout << "Ban so? ";
            cin >> tableNumber;
            table[tableNumber].customer.printIfExist();
            if (table[tableNumber].customer.getTotalPrice() != 0)
            {
                cout << "Tong thanh toan: " << table[tableNumber].customer.getTotalPrice() << endl;
                table[tableNumber].customer.removeAllDrink();
            }
            else
                cout << "Ban nay chua goi gi ca!!" << endl;
            getch();
            break;
        }
    } while (n != 5);
}

int main()
{
    Table table[100];
    cout << "********** MENU **********" << endl;
    Choose(table);

    system("pause");
}
