#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
#include <time.h>  // thư viện dùng để get thời gian trên máy
#include "mylib.h" // các hàm trong window.h
#include "Table.h"
#include "Storage.h"
#include <Windows.h>
using namespace std;

Storage storage;

int x = 45;
int y = 5; // toạ độ con trỏ trên console
int a = 25;
int b = 2;
time_t my_time = time(NULL);
const int GREEN = 10;
const int RED = 12;

bool is_number(const std::string &s)
{
	std::string::const_iterator it = s.begin();
	while (it != s.end() && std::isdigit(*it))
		++it;
	return !s.empty() && it == s.end();
}

BOOL WINAPI CtrlHandler(DWORD fdwCtrlType)
{
	switch (fdwCtrlType)
	{
		// CTRL-CLOSE: confirm that the user wants to exit.
	case CTRL_CLOSE_EVENT:
		storage.closeStorage();
		return TRUE;
	default:
		return FALSE;
	}
}

void TeaMenu()
{
	SetColor(GREEN); // tô màu
	gotoXY(x - 10, y - 2);
	cout << "********* TeaMenu ***********";
	const char *arr[] = {
		"1. Milk Tea(20000)", "2. Ginger Tea(20000)",
		"3. Kumquat Tea(20000)", "4. Lemon Tea(20000)",
		"5. Lipton Tea(20000)", "6. Lychee Tea(25000)",
		"7. Peach Tea(25000)", "0. Thoat"};
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 7)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*****************************" << endl;
		}
	}
}

void CoffeeMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* CoffeeMenu ********";
	const char *arr[] = {
		"1. Black Coffee(16000)", "2. Milk Coffee(18000)",
		"3. White Coffee(20000)", "4. Hot Cocoa(20000)",
		"5. Espresso(13000)", "6. Latte(25000)",
		"7. Cappuccino(25000)", "8. Hot Chocolate(25000)",
		"0. Thoat"};
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 8)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*****************************" << endl;
		}
	}
}

void JuiceMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "*********** JuiceMenu ***********";
	const char *arr[] = {
		"1. Lemonade(20000)", "2. Orangeade(23000)",
		"3. Watermelon Juice(25000)", "4. Passion Fruit Juice(20000)",
		"5. Carrot Juice(20000)", "6. Coconut Water(20000)", "0. Thoat"};
	for (int i = 0; i <= 6; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 6)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*********************************" << endl;
		}
	}
}

void SmoothieMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* SmoothieMenu **********";
	const char *arr[] = {
		"1. Avocado Smoothie(30000)", "2. Durian Smoothie(25000)",
		"3. Blueberry Smoothie(25000)", "4. Strawberry Smoothie(25000)",
		"5. Sugar Apple Smoothie(25000)", "6. Mango Smoothie(25000)",
		"0. Thoat"};
	for (int i = 0; i <= 6; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 6)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*********************************" << endl;
		}
	}
}

void YogurtMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* YogurtMenu *********";
	const char *arr[] = {
		"1. Chesse Yogurt(20000)", "2. Avocado Yogurt(25000)",
		"3. Lychee Yogurt(25000)", "4. Mango Yogurt(20000)",
		"5. Matcha Yogurt(25000)", "6. Blueberry Yogurt(25000)",
		"0. Thoat"};
	for (int i = 0; i <= 6; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 6)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "******************************" << endl;
		}
	}
}

void IceBlendedMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "************ IceBlendedMenu ***********";
	const char *arr[] = {
		"1. Lemon Ice Blended(30000)", "2. Blueberry Ice Blended(30000)",
		"3. Chocolate Ice Blended(30000)", "4. Mint Ice Blended(30000)",
		"5. Sapoche Coffee Ice Blended(30000)", "6. Matcha Ice Blended(30000)",
		"7. Strawberry Ice Blended(30000)", "0. Thoat"};
	for (int i = 0; i <= 7; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 7)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "***************************************" << endl;
		}
	}
}

void SodaMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* SodaMenu **********";
	const char *arr[] = {
		"1. Lemon Soda(18000)", "2. Peach Soda(18000)",
		"3. Mint Soda(20000)", "4. Passion Soda(20000)",
		"5. Kiwi Soda(20000)", "6. Raspberry Soda(25000)",
		"0. Thoat"};
	for (int i = 0; i <= 6; i++)
	{
		gotoXY(x - 6, y + i);
		cout << arr[i];
		if (i == 6)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*****************************" << endl;
		}
	}
}

void SoftDrinkMenu()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* SoftDrinkMenu *********";
	const char *arr[] = {
		"1. Seven Up(18000)", "2. Coca-Cola(18000)",
		"3. Redbull(20000)", "4. Revive(18000)",
		"5. Sting(18000)", "6. C2(15000)",
		"0. Thoat"};
	for (int i = 0; i <= 6; i++)
	{
		gotoXY(x - 2, y + i);
		cout << arr[i];
		if (i == 6)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*********************************" << endl;
		}
	}
}

void DrinkMenu(int &typeOfDrink, int &thatDrink)
{
	SetColor(RED);
	gotoXY(x - 10, y - 2);
	cout << "********* DrinkMenu *********";
	const char *a[] = {
		"1. TEA", "2. COFFEE",
		"3. JUICE", "4. SMOOTHIE",
		"5. YOGURT", "6. ICE BLENDED",
		"7. SODA", "8. SOFT DRINK",
		"0. THOAT"};
	for (int i = 0; i <= 8; i++)
	{
		gotoXY(x, y + i);
		cout << a[i];
		if (i == 8)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "*****************************" << endl;
		}
	}
	cout << endl;
	cout << "Chon: ";
	cin >> typeOfDrink;
	if (typeOfDrink < 1 || typeOfDrink > 8)
	{
		if (typeOfDrink == 0)
		{
			return;
		}
		else
		{
			cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
			cout << endl;
			cout << "Nhan phim bat ky de chon lai" << endl;
			_getch();
			typeOfDrink = -1;
			return;
		}
	}

	switch (typeOfDrink)
	{
	case 1:
		system("cls");
		TeaMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 7)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 2:
		system("cls");
		CoffeeMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 8)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 3:
		system("cls");
		JuiceMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 6)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 4:
		system("cls");
		SmoothieMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 6)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 5:
		system("cls");
		YogurtMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 6)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 6:
		system("cls");
		IceBlendedMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 7)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 7:
		system("cls");
		SodaMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 6)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
		}
		break;
	case 8:
		system("cls");
		SoftDrinkMenu();
		cout << endl;
		cout << "Chon: ";
		cin >> thatDrink;
		if (thatDrink < 1 || thatDrink > 6)
		{
			if (thatDrink == 0)
			{
				goto wrong_choose;
			}
			else
			{
				cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
				cout << "Nhan phim bat ky de chon lai" << endl;
				_getch();
				goto wrong_choose;
			}
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

void box(int x, int y, int w, int h, string nd)
{
	textcolor(7);
	for (int iy = y + 1; iy <= y + h - 1; iy++)
	{
		for (int ix = x + 1; ix <= x + w - 1; ix++)
		{
			gotoXY(ix, iy);
			cout << " ";
		}
	}
	gotoXY(x + 1, y + 1);
	cout << nd;
	//===ve vien===
	SetColor(6);
	if (h <= 1 || w <= 1)
		return;
	for (int ix = x; ix <= x + w; ix++)
	{

		gotoXY(ix, y);
		cout << char(196);
		gotoXY(ix, y + h);
		cout << char(196);
	}
	for (int iy = y; iy <= y + h; iy++)
	{
		gotoXY(x, iy);
		cout << char(179);
		gotoXY(x + w, iy);
		cout << char(179);
	}
	gotoXY(x, y);
	cout << char(218);
	gotoXY(x + w, y);
	cout << char(191);
	gotoXY(x, y + h);
	cout << char(192);
	gotoXY(x + w, y + h);
	cout << char(217);
}
void thanh_sang(int x, int y, int w, int h, int b_color, string nd)
{
	textcolor(b_color);
	for (int iy = y + 1; iy <= y + h - 1; iy++)
	{
		for (int ix = x + 1; ix <= x + w - 1; ix++)
		{
			gotoXY(ix, iy);
			cout << " ";
		}
	}
	SetColor(7);
	gotoXY(x + 1, y + 1);
	cout << nd;
}

void vien_menu()
{
	gotoXY(x - 13, y - 3);
	SetColor(6);
	cout << "+-----------CHUONG TRINH QUAN LY QUAN CAFE----------+";
	gotoXY(x - 13, y + 16);
	cout << "+---------------------------------------------------+";
	for (int i = y - 7; i < y + 11; i++)
	{
		gotoXY(x - 13, y + i);
		cout << "|";
	}
	for (int i = y - 7; i < y + 11; i++)
	{
		gotoXY(x + 39, y + i);
		cout << "|";
	}
}

void ds_ban(Table table[])
{
	int b_color_1 = 1;
	int b_color_sang_1 = 46;
	int w1 = 10;
	int h1 = 2;
	int dem = 0;
	for (int ix = a; ix <= a + 60; ix = ix + 20)
	{ // In ra danh sach ban
		for (int iy = b; iy <= b + 12; iy = iy + 3)
		{
			dem++;
			box(ix, iy, w1, h1, "  Ban ");
			gotoXY(ix + 7, iy + 1);
			SetColor(7);
			cout << dem;

			if (table[dem].getTotalPrice() != 0)
			{ // Neu ban co nguoi thi to sang
				thanh_sang(ix, iy, w1, h1, b_color_sang_1, "  Ban ");
				gotoXY(ix + 7, iy + 1);
				cout << dem;
			}
		}
	}
	gotoXY(a, b);
	box(a - 14, b + 12, w1, h1, "0. Thoat");
}
void PrintMenu()
{
	int w = 27;
	int h = 2;
	ShowCur(0);
	vien_menu();
	box(x, y, w, h, "1. Goi Do Uong");
	box(x, y + 2, w, h, "2. Xoa Do Uong");
	box(x, y + 4, w, h, "3. Xem Bill");
	box(x, y + 6, w, h, "4. Tinh Tien");
	//	box(x, y + 8, w, h, "5. Danh sach ban co nguoi");
	box(x, y + 8, w, h, "5. Khac");
	box(x, y + 10, w, h, "6. Thoat");
	for (int i = 1; i < 6; i++)
	{
		gotoXY(x, y + (i * 2));
		cout << char(195);
		gotoXY(x + w, y + (i * 2));
		cout << char(180);
	}
}

void cn_khac()
{
	SetColor(GREEN);
	gotoXY(x - 10, y - 2);
	cout << "********* Storage ********";
	const char *arr[] = {
		"1. Rut tien",
		"2. Tong quy", "0. Thoat"};
	for (int i = 0; i <= 2; i++)
	{
		gotoXY(x - 2, y + i);
		cout << arr[i];
		if (i == 3)
		{
			gotoXY(x - 10, y + i + 2);
			cout << "**************************" << endl;
		}
	}
}

void _khac(Storage &storage)
{
	double money;
	int chon;
	do
	{
		system("cls");
		cn_khac();
		cout << "\nChoose: ";
		cin >> chon;
		switch (chon)
		{
		case 0:
			chon = 0;
			break;
		case 1:
			cout << "Nhap so tien muon rut: ";
			cin >> money;
			storage.withdraw(money);
			cout << "Nhan phim bat ky de tiep tuc!!" << endl;
			_getch();
			break;
		case 2:
			cout << "Tong quy hien tai la: ";
			storage.viewBalance();
			cout << "Nhan phim bat ky de tiep tuc!!" << endl;
			_getch();
			break;
		default:
			cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
			cout << "Nhan phim bat ky de chon lai!!" << endl;
			_getch();
			break;
		}
	} while (chon != 0);
}

bool check_input(string input)
{
	if (is_number(input))
	{
		int temp = stoi(input);
		if (temp > 20)
		{
			cout << "WARNING: WRONG INPUT!!" << endl;
			_getch();
			return false;
		}
		else
			return true;
	}
	else
	{
		cout << "WARNING: WRONG INPUT!!" << endl;
		_getch();
	}
	return false;
}

void Choose(Table table[], Storage &storage)
{
	storage.openStorage();
	int tableNumber = 0;
	int typeOfDrink = 0, thatDrink = 0, numberOf = 0;
	string input;

	int sl = 6;
	int w = 27;
	int h = 2;
	int b_color = 1;
	int b_color_sang = 207;
	int a = 0;

	do
	{
		system("cls");
		PrintMenu();
		int xp = x, yp = y;
		bool kt = true;
		while (true)
		{
			if (kt == true)
			{
				// to sang thanh chuc nang can chon
				if (yp == y)
				{
					thanh_sang(xp, yp + 10, w, h, b_color, "6. Thoat");		  // to den
					thanh_sang(xp, yp, w, h, b_color_sang, "1. Goi Do Uong"); // to sang
					thanh_sang(xp, yp + 2, w, h, b_color, "2. Xoa Do Uong");  // to den
				}
				else if (yp == y + 2)
				{
					thanh_sang(xp, yp - 2, w, h, b_color, "1. Goi Do Uong");
					thanh_sang(xp, yp, w, h, b_color_sang, "2. Xoa Do Uong");
					thanh_sang(xp, yp + 2, w, h, b_color, "3. Xem Bill");
				}
				else if (yp == y + 4)
				{
					thanh_sang(xp, yp - 2, w, h, b_color, "2. Xoa Do Uong");
					thanh_sang(xp, yp, w, h, b_color_sang, "3. Xem Bill");
					thanh_sang(xp, yp + 2, w, h, b_color, "4. Tinh Tien");
				}
				else if (yp == y + 6)
				{
					thanh_sang(xp, yp - 2, w, h, b_color, "3. Xem Bill");
					thanh_sang(xp, yp, w, h, b_color_sang, "4. Tinh Tien");
					thanh_sang(xp, yp + 2, w, h, b_color, "5. Khac");
				}
				else if (yp == y + 8)
				{
					thanh_sang(xp, yp - 2, w, h, b_color, "4. Tinh Tien");
					thanh_sang(xp, yp, w, h, b_color_sang, "5. Khac");
					thanh_sang(xp, yp + 2, w, h, b_color, "6. Thoat");
				}
				else if (yp == y + 10)
				{
					thanh_sang(xp, yp - 2, w, h, b_color, "5. Khac");
					thanh_sang(xp, yp, w, h, b_color_sang, "6. Thoat");
					thanh_sang(xp, yp - 10, w, h, b_color, "1. Goi Do Uong");
				}
				kt = false;
			}
			// dieu khien bang phim mui ten

			if (_kbhit())
			{
				char c = _getch();
				if (c == -32)
				{
					kt = true;
					c = _getch();
					if (c == 72)
					{ // mui ten len
						if (yp != y)
							yp -= 2;
						else
							yp = y + h * (sl - 1);
					}
					else if (c == 80)
					{ // mui ten xuong
						if (yp != y + h * (sl - 1))
							yp += 2;
						else
							yp = y;
					}
				}
				else
				{
					if (c == 13)
					{ // phím enter
						a = yp;
						system("cls");
						switch (a)
						{
						case 5:
							input = "";
							ds_ban(table);
							cout << endl;
							cout << "\nBan so? ";
							cin >> input;
							if (check_input(input) == false)
								break;
							else
								tableNumber = stoi(input);

							while (true)
							{
								if (tableNumber == 0)
									break;
								system("cls");
								DrinkMenu(typeOfDrink, thatDrink);

								if (typeOfDrink == 0)
									break;
								if (typeOfDrink == -1 || thatDrink == -1)
									continue;

								int haveRate;
								int rateOfIce;
								int rateOfSugar;
								haveRate = 0;
								rateOfIce = 0;
								rateOfSugar = 0;
								while (haveRate != 1)
								{
									cout << "Co ti le da duong? " << endl;
									cout << "1. Khong" << endl;
									cout << "2. Co" << endl;
									cin >> haveRate;

									if (haveRate == 2)
									{
										cout << "Ti le da: ";
										cin >> rateOfIce;
										cout << "Ti le duong: ";
										cin >> rateOfSugar;
										break;
									}
									else if (haveRate != 1)
										cout << "ERROR!!" << endl;
								}

								cout << "So luong: ";
								cin >> numberOf;

								if (numberOf != 0)
								{
									if (haveRate == 2)
										table[tableNumber].callDrink(typeOfDrink, thatDrink, numberOf, rateOfIce, rateOfSugar);
									else if (haveRate == 1)
										table[tableNumber].callDrink(typeOfDrink, thatDrink, numberOf, rateOfIce, rateOfSugar);
								}
							}
							break;
						case 7:
							input = "";
							ds_ban(table);
							cout << endl;
							cout << "\nBan so? ";
							cin >> input;
							if (check_input(input) == false)
								break;
							else
								tableNumber = stoi(input);
							if (tableNumber == 0)
								break;
							if (table[tableNumber].getTotalPrice() != 0)
							{
								table[tableNumber].removeDrink(typeOfDrink, thatDrink);
								cout << "Da xoa thanh cong!!" << endl;
							}
							else
								cout << "Ban nay chua goi gi ca!!" << endl;
							getch();
							system("cls");
							break;
						case 9:
							input = "";
							ds_ban(table);
							cout << endl;
							cout << "\nBan so? ";
							cin >> input;
							if (check_input(input) == false)
								break;
							else
								tableNumber = stoi(input);
							if (tableNumber == 0)
								break;
							if (table[tableNumber].getTotalPrice() != 0)
								table[tableNumber].printIfExist();
							else
								cout << "Ban nay chua goi gi ca!!" << endl;
							_getch();
							break;
						case 11:
							input = "";
							ds_ban(table);
							cout << endl;
							cout << "\nBan so? ";
							cin >> input;
							if (check_input(input) == false)
								break;
							else
								tableNumber = stoi(input);
							if (tableNumber == 0)
								break;
							if (table[tableNumber].getTotalPrice() != 0)
							{
								table[tableNumber].printIfExist();
								cout << "\t            ------------------------------------------------------------------------" << endl;
								cout << setw(37) << "Tong thanh toan: " << setw(53) << table[tableNumber].getTotalPrice() << endl;
								cout << setw(34) << "Hoa don ngay: " << ctime(&my_time) << endl;
								storage.recharge(table[tableNumber].getTotalPrice());
								table[tableNumber].removeAllDrink();
							}
							else
								cout << "Ban nay chua goi gi ca!!" << endl;
							cout << "Nhan phim bat ky de tiep tuc!!" << endl;
							_getch();
							system("cls");
							break;
						case 13:
							_khac(storage);
							break;
						}
						break;
					}
				}
			}
		}
	} while (a != 15);
	storage.closeStorage();
}

int main()
{
	Table table[50];

	SetConsoleCtrlHandler(CtrlHandler, TRUE);
	Choose(table, storage);

	// storage.openStorage();
	// storage.viewBalance();
	// storage.closeStorage();

	system("pause");
	return 0;
}
