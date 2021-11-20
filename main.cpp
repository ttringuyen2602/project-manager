#include <iostream>
#include "mylib.h"
#include<string>
#include <conio.h>
#include "table.h"
#include<iomanip>

using namespace std;
int x = 50;int y = 5; // Toạ độ dấu nháy trên console

void TeaMenu()
{	
	SetColor(154);
	gotoXY(x-10,y-2);
	cout<<"********* TeaMenu ***********";
	const char *arr[] = {
		"1. Milk Tea", "2. Ginger Tea",
		"3. Kumquat Tea", "4. Lemon Tea",
		"5. Lipton Tea", "6. Lychee Tea",
		"7. Peach Tea"	
	};
	for(int i=0;i<=6;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==6){
			gotoXY(x-10,y+i+2);
			cout<<"*****************************"<<endl;		
		}
	}
}

void CoffeeMenu()
{
	SetColor(14);
	gotoXY(x-10,y-2);
	cout<<"********* CoffeeMenu ********";
	const char *arr[] = {
		"1. Black Coffee", "2. Milk Coffee",
		"3. White Coffee", "4. Hot Cocoa",
		"5. Espresso", "6. Latte",
		"7. Cappuccino", "8. Hot Chocolate"	
	};
	for(int i=0;i<=7;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==7){
			gotoXY(x-10,y+i+2);
			cout<<"*****************************"<<endl;		
		}
	}
}

void JuiceMenu()
{
	SetColor(57);
	gotoXY(x-10,y-2);
	cout<<"********* JuiceMenu *************";
	const char *arr[] = {
		"1. Lemonade", "2. Orangeade",
		"3. Watermelon Juice", "4. Passion Fruit Juice",
		"5. Carrot Juice", "6. Coconut Water"
	};
	for(int i=0;i<=5;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==5){
			gotoXY(x-10,y+i+2);
			cout<<"*********************************"<<endl;		
		}
	}
}

void SmoothieMenu()
{
	SetColor(27);
	gotoXY(x-10,y-2);
	cout<<"********* SmoothieMenu **********";
	const char *arr[] = {
		"1. Avocado Smoothie", "2. Durian Smoothie",
		"3. Blueberry Smoothie", "4. Strawberry Smoothie",
		"5. Sugar Apple Smoothie", "6. Mango Smoothie"
	};
	for(int i=0;i<=5;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==5){
			gotoXY(x-10,y+i+2);
			cout<<"*********************************"<<endl;		
		}
	}
}

void YogurtMenu()
{
	SetColor(166);
	gotoXY(x-10,y-2);
	cout<<"********* YogurtMenu *********";
	const char *arr[] = {
		"1. Chesse Yogurt", "2. Avocado Yogurt",
		"3. Lychee Yogurt", "4. Mango Yogurt",
		"5. Matcha Yogurt", "6. Blueberry Yogurt"
	};
	for(int i=0;i<=5;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==5){
			gotoXY(x-10,y+i+2);
			cout<<"******************************"<<endl;		
		}
	}
}

void IceBlendedMenu()
{
	SetColor(45);
	gotoXY(x-10,y-2);
	cout<<"************ IceBlendedMenu ***********";
	const char *arr[] = {
		"1. Lemon Ice Blended", "2. Blueberry Ice Blended",
		"3. Chocolate Ice Blended", "4. Mint Ice Blended",
		"5. Sapoche Coffee Ice Blended", "6. Matcha Ice Blended",
		"7. Strawberry Ice Blended"
	};
	for(int i=0;i<=6;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==6){
			gotoXY(x-10,y+i+2);
			cout<<"***************************************"<<endl;		
		}
	}
}

void SodaMenu()
{
	SetColor(220);
	gotoXY(x-10,y-2);
	cout<<"********* SodaMenu **********";
	const char *arr[] = {
		"1. Lemon Soda", "2. Peach Soda",
		"3. Mint Soda", "4. Passion Soda",
		"5. Kiwi Soda", "6. Raspberry Soda"
	};
	for(int i=0;i<=5;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==5){
			gotoXY(x-10,y+i+2);
			cout<<"*****************************"<<endl;		
		}
	}
}

void SoftDrinkMenu()
{
	SetColor(177);
	gotoXY(x-10,y-2);
	cout<<"********* SoftDrinkMenu *********";
	const char *arr[] = {
		"1. Seven Up", "2. Coca-Cola",
		"3. Redbull", "4. Revive",
		"5. Sting", "6. C2"
	};
	for(int i=0;i<=5;i++){
		gotoXY(x,y+i);
		cout<<arr[i];
		if(i==5){
			gotoXY(x-10,y+i+2);
			cout<<"*********************************"<<endl;		
		}
	}
}

void DrinkMenu(int &typeOfDrink,int &thatDrink)
{	
	SetColor(207);
	gotoXY(x-10,y-2);
	cout<<"********* DrinkMenu *********";
	const char *a[]= {
		 "1. TEA", "2. COFFEE",
		 "3. JUICE", "4. SMOOTHIE",
		 "5. YOGURT", "6. ICE BLENDED",
		 "7. SODA", "8. SOFT DRINK",
		 "0. THOAT"
	};
	for(int i=0;i<=8;i++){
		gotoXY(x,y+i);
		cout<<a[i];
		if(i==8){
			gotoXY(x-10,y+i+2);
			cout<<"*****************************"<<endl;		
		}
	}
	cout << endl;
    cout << "Chon: ";
    cin >> typeOfDrink;
    if (typeOfDrink < 0 || typeOfDrink > 8)
    {
        cout << "\n\tCANHBAO!!!\nChi nen chon nhung lua chon da co!" << endl;
        cout << endl;
        _getch();
        typeOfDrink = -1;
        return;
    }

    switch (typeOfDrink)
    {
    case 1:
        system("cls");
        TeaMenu();
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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
        cout <<endl;
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


void box(int x, int y, int w, int h,string nd){ //Hàm in ra box kèm nội dung
	textcolor(7);
	for(int iy = y+1;iy <= y + h-1;iy++){
		for(int ix = x+1;ix <= x + w-1;ix++){
			gotoXY(ix,iy);cout<<" ";
		}
	}
	gotoXY(x+1,y+1);
	cout<<nd;
	//===ve vien===
	SetColor(6);
	if(h <= 1 || w <= 1) return;
	for(int ix = x ;ix <= x + w;ix++){
		
		gotoXY(ix,y);
		cout<<char(196);
		gotoXY(ix,y+h);
		cout<<char(196);
	}
	for(int iy = y;iy <= y + h;iy++){
		gotoXY(x,iy);
		cout<<char(179);
		gotoXY(x+w,iy);
		cout<<char(179);
	}
	gotoXY(x,y);cout<<char(218);
	gotoXY(x+w,y);cout<<char(191);
	gotoXY(x,y+h);cout<<char(192);
	gotoXY(x+w,y+h);cout<<char(217);
	
	
}
void thanh_sang(int x, int y, int w, int h, int b_color,string nd){ //Tô sáng nội dung cho box
	textcolor(b_color);
	for(int iy = y+1;iy <= y + h-1;iy++){
		for(int ix = x+1;ix <= x + w-1;ix++){
			gotoXY(ix,iy);cout<<" ";
		}
	}
	SetColor(7);
	gotoXY(x+1,y+1);
	cout<<nd;
}

void PrintMenu()
{	
	int w=20;
	int h=2;
	ShowCur(0);
    box(x,y,w,h,"1. Goi Do Uong");
    box(x,y+2,w,h,"2. Xoa Do Uong");
    box(x,y+4,w,h,"3. Xem Bill");
    box(x,y+6,w,h,"4. Tinh Tien");
    box(x,y+8,w,h,"5. Khac");
    box(x,y+10,w,h,"6. Thoat");
    for(int i=1;i<6;i++){
    	gotoXY(x,y + (i*2));cout<<char(195);
    	gotoXY(x+20,y + (i*2));cout<<char(180);
	}

}

void Choose(Table table[])
{
    int tableNumber;
    int typeOfDrink, thatDrink, numberOf;
	int sl = 6; 
	int w=20;
	int h=2;
	int b_color = 1;
	int b_color_sang = 207;
	int a=0;
  		do{
       		system("cls");
        	PrintMenu();
        	int xp = x, yp =y;
			bool kt=true;
			while(true){
			if(kt == true){
					//to sang thanh chuc nang can chon
					if(yp == y){
						thanh_sang(xp,yp+10,w,h,b_color,"6. Thoat");//to den
						thanh_sang(xp,yp,w,h,b_color_sang,"1. Goi Do Uong");// to sang
						thanh_sang(xp,yp+2,w,h,b_color,"2. Xoa Do Uong");//to den
					}
					else if(yp == y+2){
						thanh_sang(xp,yp-2,w,h,b_color,"1. Goi Do Uong");
						thanh_sang(xp,yp,w,h,b_color_sang,"2. Xoa Do Uong");
						thanh_sang(xp,yp+2,w,h,b_color,"3. Xem Bill");
					}
					else if(yp == y+4){
						thanh_sang(xp,yp-2,w,h,b_color,"2. Xoa Do Uong");
						thanh_sang(xp,yp,w,h,b_color_sang,"3. Xem Bill");
						thanh_sang(xp,yp+2,w,h,b_color,"4. Tinh Tien");
					}
					else if(yp == y+6){
						thanh_sang(xp,yp-2,w,h,b_color,"3. Xem Bill");
						thanh_sang(xp,yp,w,h,b_color_sang,"4. Tinh Tien");
						thanh_sang(xp,yp+2,w,h,b_color,"5. Khac");
					}
					else if(yp == y+8){
						thanh_sang(xp,yp-2,w,h,b_color,"4. Tinh Tien");
						thanh_sang(xp,yp,w,h,b_color_sang,"5. Khac");
						thanh_sang(xp,yp+2,w,h,b_color,"6. Thoat");
					}
					else{
						thanh_sang(xp,yp-10,w,h,b_color,"1. Goi Do Uong");
						thanh_sang(xp,yp-2,w,h,b_color,"5. Khac");
						thanh_sang(xp,yp,w,h,b_color_sang,"6. Thoat");
					}
					kt = false;
				}
				//dieu khien bang phim mui ten
				
				if(_kbhit()){
					char c = _getch();
					if(c == -32){
						kt=true;
						c=_getch();
						if(c == 72){//mũi tên lên
							if(yp != y)
								yp -= 2;
							else
								yp = y+h*(sl-1);
						}
						else if(c == 80){//mũi tên xuống
							if(yp != y+h*(sl-1))
								yp += 2;
							else
								yp = y;
						}	
					}
					else{
						if(c == 13){	//Khi nhấn enter
							a=yp;
							system("cls");
							switch (a)
						        {
						        case 5:
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
						        case 7:
						            cout << "Ban so? ";
						            cin >> tableNumber;
						            system("cls");
						            table[tableNumber].customer.removeDrink(typeOfDrink, thatDrink);
						            break;
						        case 9:
						            cout << "Ban so? ";
						            cin >> tableNumber;
						            table[tableNumber].customer.printIfExist();
						            _getch();
						            break;
						        case 11:
						            cout << "Ban so? ";
						            cin >> tableNumber;
						            table[tableNumber].customer.printIfExist();
						            if (table[tableNumber].customer.getTotalPrice() != 0)
						            {	
						            	cout<<"\t            ------------------------------------------------------------------------"<<endl;
						                cout<<setw(37)<< "Tong thanh toan: " <<setw(53)<< table[tableNumber].customer.getTotalPrice() << endl;
						                table[tableNumber].customer.removeAllDrink();
						            }
						            else
						                cout << "Ban nay chua goi gi ca!!" << endl;
						            _getch();
						            cout<<"Nhan phim bat ky de tiep tuc!!"<<endl;
						            break;
						        }
						        break;
							
						}  
					}
			}	
		}
        
}while(a != 15);
}
int main()
{	 
    Table table[100];
    Choose(table);
    system("pause");
}
