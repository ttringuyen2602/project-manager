#include <iostream>
#include <iomanip>
#include "Drink\Drink.h"
#include "Drink\Tea.h"
#include "Drink\Coffee.h"
#include "Drink\Juice.h"
#include "Drink\Smoothie.h"
#include "Drink\Yogurt.h"
#include "Drink\IceBlended.h"
#include "Drink\Soda.h"
#include "Drink\SoftDrink.h"
#pragma once

using namespace std;

class Customer
{
private:
    int totalPrice; //Lưu giữ tổng số tiền cho số đồ uống đã gọi

    //ĐÂY LÀ CÁC BIẾN DÙNG ĐỂ LƯU GIỮ GIÁ TRỊ CHO TỪNG THỨC UỐNG

    Drink *milkTea, *gingerTea, *kumquatTea, *lemonTea, *liptonTea, *lycheeTea, *peachTea; //Tea (7)

    Drink *blackCoffee, *milkCoffee, *whiteCoffee, *hotCocoa, *espresso, *latte, *cappuccino, *hotChocolate; //Coffee (8)

    Drink *lemonade, *orangeade, *watermelon_Juice, *passionFruit_Juice, *carrot_Juice, *coconutWater; //Juice (6)

    Drink *avocado_Smoothie, *durian_Smoothie, *blueberry_Smoothie, *strawberry_Smoothie, *sugarApple_Smoothie, *mango_Smoothie; //Smoothie (6)

    Drink *cheese_Yogurt, *avocado_Yogurt, *lychee_Yogurt, *mango_Yogurt, *matcha_Yogurt, *blueberry_Yogurt; //Yogurt (6)

    Drink *lemon_IceBlended, *blueberry_IceBlended, *chocolate_IceBlended, *mint_IceBlended, *sapocheCoffee_IceBlended, *matcha_IceBlended, *strawberry_IceBlended; //Ice Blended (7)

    Drink *lemon_Soda, *peach_Soda, *mint_Soda, *passion_Soda, *kiwi_Soda, *raspberry_Soda; //Soda (6)

    Drink *sevenUp, *cocaCola, *redbull, *revive, *sting, *c2; //Soft Drink (6)

    //Các hàm được gọi ra cho các loại đồ uống
    void chooseTea(int thisDrink, int numberOf);
    void chooseCoffee(int thisDrink, int numberOf);
    void chooseJuice(int thisDrink, int numberOf);
    void chooseSmoothie(int thisDrink, int numberOf);
    void chooseYogurt(int thisDrink, int numberOf);
    void chooseIceBlended(int thisDrink, int numberOf);
    void chooseSoda(int thisDrink, int numberOf);
    void chooseSoftDrink(int thisDrink, int numberOf);

public:
    Customer();
    ~Customer();

    int getTotalPrice() { return totalPrice; }
    void callDrink(int typeOfDrink, int thisDrink, int numberOf); //Hàm nhập đồ uống thông qua các thao tác
    void printIfExist();                                          //Xuất ra các đồ uống đã gọi
    void removeDrink(int typeOfDrink, int thisDrink);             //Xóa đồ uống nếu lỡ gọi nhầm
    void removeAllDrink();
};

int Customer::totalPrice = 0;

Customer::Customer()
{
    milkTea = new Tea;
    gingerTea = new Tea;
    kumquatTea = new Tea;
    lemonTea = new Tea;
    liptonTea = new Tea;
    lycheeTea = new Tea;
    peachTea = new Tea;

    blackCoffee = new Coffee;
    milkCoffee = new Coffee;
    whiteCoffee = new Coffee;
    hotCocoa = new Coffee;
    espresso = new Coffee;
    latte = new Coffee;
    cappuccino = new Coffee;
    hotChocolate = new Coffee;

    lemonade = new Juice;
    orangeade = new Juice;
    watermelon_Juice = new Juice;
    passionFruit_Juice = new Juice;
    carrot_Juice = new Juice;
    coconutWater = new Juice;

    avocado_Smoothie = new Smoothie;
    durian_Smoothie = new Smoothie;
    blueberry_Smoothie = new Smoothie;
    strawberry_Smoothie = new Smoothie;
    sugarApple_Smoothie = new Smoothie;
    mango_Smoothie = new Smoothie;

    cheese_Yogurt = new Yogurt;
    avocado_Yogurt = new Yogurt;
    lychee_Yogurt = new Yogurt;
    mango_Yogurt = new Yogurt;
    matcha_Yogurt = new Yogurt;
    blueberry_Yogurt = new Yogurt;

    lemon_IceBlended = new IceBlended;
    blueberry_IceBlended = new IceBlended;
    chocolate_IceBlended = new IceBlended;
    mint_IceBlended = new IceBlended;
    sapocheCoffee_IceBlended = new IceBlended;
    matcha_IceBlended = new IceBlended;
    strawberry_IceBlended = new IceBlended;

    lemon_Soda = new Soda;
    peach_Soda = new Soda;
    mint_Soda = new Soda;
    passion_Soda = new Soda;
    kiwi_Soda = new Soda;
    raspberry_Soda = new Soda;

    sevenUp = new SoftDrink;
    cocaCola = new SoftDrink;
    redbull = new SoftDrink;
    revive = new SoftDrink;
    sting = new SoftDrink;
    c2 = new SoftDrink;
}

Customer::~Customer()
{
    delete milkTea;
    delete gingerTea;
    delete kumquatTea;
    delete lemonTea;
    delete liptonTea;
    delete lycheeTea;
    delete peachTea;

    delete blackCoffee;
    delete milkCoffee;
    delete whiteCoffee;
    delete hotCocoa;
    delete espresso;
    delete latte;
    delete cappuccino;
    delete hotChocolate;

    delete lemonade;
    delete orangeade;
    delete watermelon_Juice;
    delete passionFruit_Juice;
    delete carrot_Juice;
    delete coconutWater;

    delete avocado_Smoothie;
    delete durian_Smoothie;
    delete blueberry_Smoothie;
    delete strawberry_Smoothie;
    delete sugarApple_Smoothie;
    delete mango_Smoothie;

    delete cheese_Yogurt;
    delete avocado_Yogurt;
    delete lychee_Yogurt;
    delete mango_Yogurt;
    delete matcha_Yogurt;
    delete blueberry_Yogurt;

    delete lemon_IceBlended;
    delete blueberry_IceBlended;
    delete chocolate_IceBlended;
    delete mint_IceBlended;
    delete sapocheCoffee_IceBlended;
    delete matcha_IceBlended;
    delete strawberry_IceBlended;

    delete lemon_Soda;
    delete peach_Soda;
    delete mint_Soda;
    delete passion_Soda;
    delete kiwi_Soda;
    delete raspberry_Soda;

    delete sevenUp;
    delete cocaCola;
    delete redbull;
    delete revive;
    delete sting;
    delete c2;
}

void Customer::callDrink(int typeOfDrink, int thisDrink, int numberOf)
{
    switch (typeOfDrink)
    {
    case 1: //Tea
        chooseTea(thisDrink, numberOf);
        break;
    case 2: //Coffee
        chooseCoffee(thisDrink, numberOf);
        break;
    case 3: //Juice
        chooseJuice(thisDrink, numberOf);
        break;
    case 4: //Smoothie
        chooseSmoothie(thisDrink, numberOf);
        break;
    case 5: //Yogurt
        chooseYogurt(thisDrink, numberOf);
        break;
    case 6: //Ice Blended
        chooseIceBlended(thisDrink, numberOf);
        break;
    case 7: //Soda
        chooseSoda(thisDrink, numberOf);
        break;
    case 8: //Soft Drink
        chooseSoftDrink(thisDrink, numberOf);
        break;
    }
}

void Customer::removeDrink(int typeOfDrink, int thisDrink)
{
    switch (typeOfDrink)
    {
    case 1: //Tea
        chooseTea(thisDrink, 0);
        break;
    case 2: //Coffee
        chooseCoffee(thisDrink, 0);
        break;
    case 3: //Juice
        chooseJuice(thisDrink, 0);
        break;
    case 4: //Smoothie
        chooseSmoothie(thisDrink, 0);
        break;
    case 5: //Yogurt
        chooseYogurt(thisDrink, 0);
        break;
    case 6: //Ice Blended
        chooseIceBlended(thisDrink, 0);
        break;
    case 7: //Soda
        chooseSoda(thisDrink, 0);
        break;
    case 8: //Soft Drink
        chooseSoftDrink(thisDrink, 0);
        break;
    }
}

void Customer::chooseTea(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        milkTea->addDrink(1, numberOf);
        totalPrice += milkTea->getAmount();
        break;
    case 2:
        gingerTea->addDrink(2, numberOf);
        totalPrice += gingerTea->getAmount();
        break;
    case 3:
        kumquatTea->addDrink(3, numberOf);
        totalPrice += kumquatTea->getAmount();
        break;
    case 4:
        lemonTea->addDrink(4, numberOf);
        totalPrice += lemonTea->getAmount();
        break;
    case 5:
        liptonTea->addDrink(5, numberOf);
        totalPrice += liptonTea->getAmount();
        break;
    case 6:
        lycheeTea->addDrink(6, numberOf);
        totalPrice += lycheeTea->getAmount();
        break;
    case 7:
        peachTea->addDrink(6, numberOf);
        totalPrice += peachTea->getAmount();
        break;
    }
}

void Customer::chooseCoffee(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        blackCoffee->addDrink(1, numberOf);
        totalPrice += blackCoffee->getAmount();
        break;
    case 2:
        milkCoffee->addDrink(2, numberOf);
        totalPrice += milkCoffee->getAmount();
        break;
    case 3:
        whiteCoffee->addDrink(3, numberOf);
        totalPrice += whiteCoffee->getAmount();
        break;
    case 4:
        hotCocoa->addDrink(4, numberOf);
        totalPrice += hotCocoa->getAmount();
        break;
    case 5:
        espresso->addDrink(5, numberOf);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        latte->addDrink(6, numberOf);
        totalPrice += latte->getAmount();
        break;
    case 7:
        cappuccino->addDrink(7, numberOf);
        totalPrice += cappuccino->getAmount();
        break;
    case 8:
        hotChocolate->addDrink(8, numberOf);
        totalPrice += hotChocolate->getAmount();
        break;
    }
}

void Customer::chooseJuice(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        lemonade->addDrink(1, numberOf);
        totalPrice += lemonade->getAmount();
        break;
    case 2:
        orangeade->addDrink(2, numberOf);
        totalPrice += orangeade->getAmount();
        break;
    case 3:
        watermelon_Juice->addDrink(3, numberOf);
        totalPrice += watermelon_Juice->getAmount();
        break;
    case 4:
        passionFruit_Juice->addDrink(4, numberOf);
        totalPrice += passionFruit_Juice->getAmount();
        break;
    case 5:
        carrot_Juice->addDrink(5, numberOf);
        totalPrice += carrot_Juice->getAmount();
        break;
    case 6:
        coconutWater->addDrink(6, numberOf);
        totalPrice += coconutWater->getAmount();
        break;
    }
}

void Customer::chooseSmoothie(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        avocado_Smoothie->addDrink(1, numberOf);
        totalPrice += avocado_Smoothie->getAmount();
        break;
    case 2:
        durian_Smoothie->addDrink(2, numberOf);
        totalPrice += durian_Smoothie->getAmount();
        break;
    case 3:
        blueberry_Smoothie->addDrink(3, numberOf);
        totalPrice += blueberry_Smoothie->getAmount();
        break;
    case 4:
        strawberry_Smoothie->addDrink(4, numberOf);
        totalPrice += strawberry_Smoothie->getAmount();
        break;
    case 5:
        sugarApple_Smoothie->addDrink(5, numberOf);
        totalPrice += sugarApple_Smoothie->getAmount();
        break;
    case 6:
        mango_Smoothie->addDrink(6, numberOf);
        totalPrice += mango_Smoothie->getAmount();
        break;
    }
}

void Customer::chooseYogurt(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        cheese_Yogurt->addDrink(1, numberOf);
        totalPrice += cheese_Yogurt->getAmount();
        break;
    case 2:
        avocado_Yogurt->addDrink(2, numberOf);
        totalPrice += avocado_Yogurt->getAmount();
        break;
    case 3:
        lychee_Yogurt->addDrink(3, numberOf);
        totalPrice += lychee_Yogurt->getAmount();
        break;
    case 4:
        mango_Yogurt->addDrink(4, numberOf);
        totalPrice += mango_Yogurt->getAmount();
        break;
    case 5:
        blueberry_Yogurt->addDrink(5, numberOf);
        totalPrice += blueberry_Yogurt->getAmount();
        break;
    }
}

void Customer::chooseIceBlended(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        lemon_IceBlended->addDrink(1, numberOf);
        totalPrice += lemon_IceBlended->getAmount();
        break;
    case 2:
        blueberry_IceBlended->addDrink(2, numberOf);
        totalPrice += blueberry_IceBlended->getAmount();
        break;
    case 3:
        chocolate_IceBlended->addDrink(3, numberOf);
        totalPrice += chocolate_IceBlended->getAmount();
        break;
    case 4:
        mint_IceBlended->addDrink(4, numberOf);
        totalPrice += mint_IceBlended->getAmount();
        break;
    case 5:
        sapocheCoffee_IceBlended->addDrink(5, numberOf);
        totalPrice += sapocheCoffee_IceBlended->getAmount();
        break;
    case 6:
        matcha_IceBlended->addDrink(6, numberOf);
        totalPrice += matcha_IceBlended->getAmount();
        break;
    case 7:
        strawberry_IceBlended->addDrink(7, numberOf);
        totalPrice += strawberry_IceBlended->getAmount();
        break;
    }
}

void Customer::chooseSoda(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        lemon_Soda->addDrink(1, numberOf);
        totalPrice += lemon_Soda->getAmount();
        break;
    case 2:
        peach_Soda->addDrink(2, numberOf);
        totalPrice += peach_Soda->getAmount();
        break;
    case 3:
        mint_Soda->addDrink(3, numberOf);
        totalPrice += mint_Soda->getAmount();
        break;
    case 4:
        passion_Soda->addDrink(4, numberOf);
        totalPrice += passion_Soda->getAmount();
        break;
    case 5:
        kiwi_Soda->addDrink(5, numberOf);
        totalPrice += kiwi_Soda->getAmount();
        break;
    case 6:
        raspberry_Soda->addDrink(6, numberOf);
        totalPrice += raspberry_Soda->getAmount();
        break;
    }
}

void Customer::chooseSoftDrink(int thisDrink, int numberOf)
{
    switch (thisDrink)
    {
    case 1:
        sevenUp->addDrink(1, numberOf);
        totalPrice += sevenUp->getAmount();
        break;
    case 2:
        cocaCola->addDrink(2, numberOf);
        totalPrice += cocaCola->getAmount();
        break;
    case 3:
        redbull->addDrink(3, numberOf);
        totalPrice += redbull->getAmount();
        break;
    case 4:
        revive->addDrink(4, numberOf);
        totalPrice += revive->getAmount();
        break;
    case 5:
        sting->addDrink(5, numberOf);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        c2->addDrink(6, numberOf);
        totalPrice += c2->getAmount();
        break;
    }
}

void Customer::printIfExist()
{
	cout<<setw(30)<<"Ten"<<setw(20)<<"So luong"<<setw(20)<<"Don gia"<<setw(20)<<"Thanh tien"<<endl;
    //TEA
    if (milkTea->getQuantity() != 0)
        milkTea->print();
    if (gingerTea->getQuantity() != 0)
        gingerTea->print();
    if (kumquatTea->getQuantity() != 0)
        kumquatTea->print();
    if (lemonTea->getQuantity() != 0)
        lemonTea->print();
    if (liptonTea->getQuantity() != 0)
        liptonTea->print();
    if (lycheeTea->getQuantity() != 0)
        lycheeTea->print();
    if (peachTea->getQuantity() != 0)
        peachTea->print();

    //COFFEE
    if (blackCoffee->getQuantity() != 0)
        blackCoffee->print();
    if (milkCoffee->getQuantity() != 0)
        milkCoffee->print();
    if (whiteCoffee->getQuantity() != 0)
        whiteCoffee->print();
    if (hotCocoa->getQuantity() != 0)
        hotCocoa->print();
    if (espresso->getQuantity() != 0)
        espresso->print();
    if (latte->getQuantity() != 0)
        latte->print();
    if (cappuccino->getQuantity() != 0)
        cappuccino->print();
    if (hotChocolate->getQuantity() != 0)
        hotChocolate->print();

    //JUICE
    if (lemonade->getQuantity() != 0)
        lemonade->print();
    if (orangeade->getQuantity() != 0)
        orangeade->print();
    if (watermelon_Juice->getQuantity() != 0)
        watermelon_Juice->print();
    if (passionFruit_Juice->getQuantity() != 0)
        passionFruit_Juice->print();
    if (carrot_Juice->getQuantity() != 0)
        carrot_Juice->print();
    if (coconutWater->getQuantity() != 0)
        coconutWater->print();

    //SMOOTHIE
    if (avocado_Smoothie->getQuantity() != 0)
        avocado_Smoothie->print();
    if (durian_Smoothie->getQuantity() != 0)
        durian_Smoothie->print();
    if (blueberry_Smoothie->getQuantity() != 0)
        blueberry_Smoothie->print();
    if (strawberry_Smoothie->getQuantity() != 0)
        strawberry_Smoothie->print();
    if (sugarApple_Smoothie->getQuantity() != 0)
        sugarApple_Smoothie->print();
    if (mango_Smoothie->getQuantity() != 0)
        mango_Smoothie->print();

    //YOGURT
    if (cheese_Yogurt->getQuantity() != 0)
        cheese_Yogurt->print();
    if (avocado_Yogurt->getQuantity() != 0)
        avocado_Yogurt->print();
    if (lychee_Yogurt->getQuantity() != 0)
        lychee_Yogurt->print();
    if (mango_Yogurt->getQuantity() != 0)
        mango_Yogurt->print();
    if (matcha_Yogurt->getQuantity() != 0)
        matcha_Yogurt->print();
    if (blueberry_Yogurt->getQuantity() != 0)
        blueberry_Yogurt->print();

    //ICE BLENDED
    if (lemon_IceBlended->getQuantity() != 0)
        lemon_IceBlended->print();
    if (blueberry_IceBlended->getQuantity() != 0)
        blueberry_IceBlended->print();
    if (chocolate_IceBlended->getQuantity() != 0)
        chocolate_IceBlended->print();
    if (mint_IceBlended->getQuantity() != 0)
        mint_IceBlended->print();
    if (sapocheCoffee_IceBlended->getQuantity() != 0)
        sapocheCoffee_IceBlended->print();
    if (matcha_IceBlended->getQuantity() != 0)
        matcha_IceBlended->print();
    if (strawberry_IceBlended->getQuantity() != 0)
        strawberry_IceBlended->print();

    //SODA
    if (lemon_Soda->getQuantity() != 0)
        lemon_Soda->print();
    if (peach_Soda->getQuantity() != 0)
        peach_Soda->print();
    if (mint_Soda->getQuantity() != 0)
        mint_Soda->print();
    if (passion_Soda->getQuantity() != 0)
        passion_Soda->print();
    if (kiwi_Soda->getQuantity() != 0)
        kiwi_Soda->print();
    if (raspberry_Soda->getQuantity() != 0)
        raspberry_Soda->print();

    //SOFT DRINK
    if (sevenUp->getQuantity() != 0)
        sevenUp->print();
    if (cocaCola->getQuantity() != 0)
        cocaCola->print();
    if (redbull->getQuantity() != 0)
        redbull->print();
    if (revive->getQuantity() != 0)
        revive->print();
    if (sting->getQuantity() != 0)
        sting->print();
    if (c2->getQuantity() != 0)
        c2->print();
}

void Customer::removeAllDrink()
{
    for (int i = 0; i <= 10; i++)
    {
        chooseTea(i, 0);
        chooseCoffee(i, 0);
        chooseJuice(i, 0);
        chooseSmoothie(i, 0);
        chooseYogurt(i, 0);
        chooseIceBlended(i, 0);
        chooseSoda(i, 0);
        chooseSoftDrink(i, 0);
    }
    totalPrice = 0;
}
