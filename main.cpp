#include <iostream>
#include "Table.h"

using namespace std;

//In ra danh sách Menu
void PrintMenu()
{
    cout << "\t1. Goi Do Uong" << endl;
    cout << "\t2. Xoa Do Uong" << endl;
    cout << "\t3. Tinh Tien" << endl;
    cout << "\t4. Thoat" << endl;
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
}

void DrinkMenu(int typeOfDrink)
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

    switch (typeOfDrink)
    {
    case 1:
        system("cls");
        TeaMenu();
        break;
    case 2:
        system("cls");
        //CoffeeMenu(); thêm hàm vào
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
            system("cls");
            while (true)
            {
                DrinkMenu(typeOfDrink);
                cout << "Chon: ";
                cin >> thatDrink;
                cout << "So luong: ";
                cin >> numberOf;
                table[tableNumber].customer.callDrink(typeOfDrink, thatDrink, numberOf);
            }
            break;
        case 2:
            cout << "Ban so? ";
            cin >> tableNumber;
            system("cls");
            //table[tableNumber].customer
            break;
        }
    } while (n != 4);
}

int main()
{
    Table table[100];
    cout << "********** MENU **********" << endl;
    //Choose(table);
    table[0].seeBill();

    system("pause");
}