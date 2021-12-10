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

class Table
{
private:
    double totalPrice;                                                                     // Lưu giữ tổng số tiền cho số đồ uống đã gọi
                                                                                           //ĐÂY LÀ CÁC BIẾN DÙNG ĐỂ LƯU GIỮ GIÁ TRỊ CHO TỪNG THỨC UỐNG
    Drink *milkTea, *gingerTea, *kumquatTea, *lemonTea, *liptonTea, *lycheeTea, *peachTea; // Tea (7)

    Drink *blackCoffee, *milkCoffee, *whiteCoffee, *hotCocoa, *espresso, *latte, *cappuccino, *hotChocolate; // Coffee (8)

    Drink *lemonade, *orangeade, *watermelon_Juice, *passionFruit_Juice, *carrot_Juice, *coconutWater; // Juice (6)

    Drink *avocado_Smoothie, *durian_Smoothie, *blueberry_Smoothie, *strawberry_Smoothie, *sugarApple_Smoothie, *mango_Smoothie; // Smoothie (6)

    Drink *cheese_Yogurt, *avocado_Yogurt, *lychee_Yogurt, *mango_Yogurt, *matcha_Yogurt, *blueberry_Yogurt; // Yogurt (6)

    Drink *lemon_IceBlended, *blueberry_IceBlended, *chocolate_IceBlended, *mint_IceBlended, *sapocheCoffee_IceBlended, *matcha_IceBlended, *strawberry_IceBlended; // Ice Blended (7)

    Drink *lemon_Soda, *peach_Soda, *mint_Soda, *passion_Soda, *kiwi_Soda, *raspberry_Soda; // Soda (6)

    Drink *sevenUp, *cocaCola, *redbull, *revive, *sting, *c2; // Soft Drink (6)

    Tea tempTea;
    Coffee tempCoffee;
    Juice tempJuice;
    Smoothie tempSmoothie;
    Yogurt tempYogurt;
    IceBlended tempIceBlended;
    Soda tempSoda;
    SoftDrink tempSoftDrink;

    // Các hàm được gọi ra cho các loại đồ uống
    void chooseTea(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseCoffee(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseJuice(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseSmoothie(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseYogurt(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseIceBlended(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseSoda(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);
    void chooseSoftDrink(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar);

public:
    Table();
    ~Table();

    int getTotalPrice() { return totalPrice; }
    void callDrink(int typeOfDrink, int thisDrink, int numberOf, int rateOfIce, int rateOfSugar); // Hàm nhập đồ uống thông qua các thao tác
    void printIfExist();                                                                          // Xuất ra các đồ uống đã gọi
    void removeDrink(int typeOfDrink, int thisDrink);                                             // Xóa đồ uống nếu lỡ gọi nhầm
    void removeAllDrink();
    void setRate(int rateOfIce, int rateOfSugar);
    void getRate_void();
};

Table::Table()
{
    totalPrice = 0;

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

Table::~Table()
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

void Table::callDrink(int typeOfDrink, int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    switch (typeOfDrink)
    {
    case 1: // Tea
        chooseTea(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 2: // Coffee
        chooseCoffee(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 3: // Juice
        chooseJuice(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 4: // Smoothie
        chooseSmoothie(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 5: // Yogurt
        chooseYogurt(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 6: // Ice Blended
        chooseIceBlended(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 7: // Soda
        chooseSoda(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    case 8: // Soft Drink
        chooseSoftDrink(thisDrink, numberOf, rateOfIce, rateOfSugar);
        break;
    }
}

void Table::removeDrink(int typeOfDrink, int thisDrink)
{
    switch (typeOfDrink)
    {
    case 1: // Tea
        chooseTea(thisDrink, 0, 0, 0);
        break;
    case 2: // Coffee
        chooseCoffee(thisDrink, 0, 0, 0);
        break;
    case 3: // Juice
        chooseJuice(thisDrink, 0, 0, 0);
        break;
    case 4: // Smoothie
        chooseSmoothie(thisDrink, 0, 0, 0);
        break;
    case 5: // Yogurt
        chooseYogurt(thisDrink, 0, 0, 0);
        break;
    case 6: // Ice Blended
        chooseIceBlended(thisDrink, 0, 0, 0);
        break;
    case 7: // Soda
        chooseSoda(thisDrink, 0, 0, 0);
        break;
    case 8: // Soft Drink
        chooseSoftDrink(thisDrink, 0, 0, 0);
        break;
    }
}

void Table::chooseTea(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        milkTea->addDrink(1, 0);
        gingerTea->addDrink(2, 0);
        kumquatTea->addDrink(3, 0);
        lemonTea->addDrink(4, 0);
        liptonTea->addDrink(5, 0);
        lycheeTea->addDrink(6, 0);
        peachTea->addDrink(7, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempTea.addDrink(1, numberOf);
        *milkTea += tempTea;
        totalPrice += tempTea.getAmount();
        milkTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 2:
        tempTea.addDrink(2, numberOf);
        *gingerTea += tempTea;
        totalPrice += tempTea.getAmount();
        gingerTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 3:
        tempTea.addDrink(3, numberOf);
        *kumquatTea += tempTea;
        totalPrice += tempTea.getAmount();
        kumquatTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 4:
        tempTea.addDrink(4, numberOf);
        *lemonTea += tempTea;
        totalPrice += tempTea.getAmount();
        lemonTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 5:
        tempTea.addDrink(5, numberOf);
        *liptonTea += tempTea;
        totalPrice += tempTea.getAmount();
        liptonTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 6:
        tempTea.addDrink(6, numberOf);
        *lycheeTea += tempTea;
        totalPrice += tempTea.getAmount();
        lycheeTea->setRate(rateOfIce, rateOfSugar);
        break;
    case 7:
        tempTea.addDrink(6, numberOf);
        *peachTea += tempTea;
        totalPrice += tempTea.getAmount();
        peachTea->setRate(rateOfIce, rateOfSugar);
        break;
    }
}

void Table::chooseCoffee(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{

    if (numberOf == 0)
    {
        blackCoffee->addDrink(1, 0);
        milkCoffee->addDrink(2, 0);
        whiteCoffee->addDrink(3, 0);
        hotCocoa->addDrink(4, 0);
        espresso->addDrink(5, 0);
        latte->addDrink(6, 0);
        cappuccino->addDrink(7, 0);
        hotChocolate->addDrink(8, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempCoffee.addDrink(1, numberOf);
        *blackCoffee += tempCoffee;
        blackCoffee->setRate(rateOfIce, rateOfSugar);
        totalPrice += blackCoffee->getAmount();
        break;
    case 2:
        tempCoffee.addDrink(2, numberOf);
        *milkCoffee += tempCoffee;
        milkCoffee->setRate(rateOfIce, rateOfSugar);
        totalPrice += milkCoffee->getAmount();
        break;
    case 3:
        tempCoffee.addDrink(3, numberOf);
        *whiteCoffee += tempCoffee;
        whiteCoffee->setRate(rateOfIce, rateOfSugar);
        totalPrice += whiteCoffee->getAmount();
        break;
    case 4:
        tempCoffee.addDrink(4, numberOf);
        *hotCocoa += tempCoffee;
        hotCocoa->setRate(rateOfIce, rateOfSugar);
        totalPrice += hotCocoa->getAmount();
        break;
    case 5:
        tempCoffee.addDrink(5, numberOf);
        *espresso += tempCoffee;
        espresso->setRate(rateOfIce, rateOfSugar);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        tempCoffee.addDrink(6, numberOf);
        *latte += tempCoffee;
        latte->setRate(rateOfIce, rateOfSugar);
        totalPrice += latte->getAmount();
        break;
    case 7:
        tempCoffee.addDrink(7, numberOf);
        *cappuccino += tempCoffee;
        cappuccino->setRate(rateOfIce, rateOfSugar);
        totalPrice += cappuccino->getAmount();
        break;
    case 8:
        tempCoffee.addDrink(8, numberOf);
        *hotChocolate += tempCoffee;
        hotChocolate->setRate(rateOfIce, rateOfSugar);
        totalPrice += hotChocolate->getAmount();
        break;
    }
}

void Table::chooseJuice(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        lemonade->addDrink(1, 0);
        orangeade->addDrink(2, 0);
        watermelon_Juice->addDrink(3, 0);
        passionFruit_Juice->addDrink(4, 0);
        carrot_Juice->addDrink(5, 0);
        coconutWater->addDrink(6, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempJuice.addDrink(1, numberOf);
        *lemonade += tempJuice;
        lemonade->setRate(rateOfIce, rateOfSugar);
        totalPrice += lemonade->getAmount();
        break;
    case 2:
        tempJuice.addDrink(2, numberOf);
        *orangeade += tempJuice;
        orangeade->setRate(rateOfIce, rateOfSugar);
        totalPrice += orangeade->getAmount();
        break;
    case 3:
        tempJuice.addDrink(3, numberOf);
        *watermelon_Juice += tempJuice;
        watermelon_Juice->setRate(rateOfIce, rateOfSugar);
        totalPrice += watermelon_Juice->getAmount();
        break;
    case 4:
        tempJuice.addDrink(4, numberOf);
        *passionFruit_Juice += tempJuice;
        passionFruit_Juice->setRate(rateOfIce, rateOfSugar);
        totalPrice += passionFruit_Juice->getAmount();
        break;
    case 5:
        tempJuice.addDrink(5, numberOf);
        *carrot_Juice += tempJuice;
        carrot_Juice->setRate(rateOfIce, rateOfSugar);
        totalPrice += carrot_Juice->getAmount();
        break;
    case 6:
        tempJuice.addDrink(6, numberOf);
        *coconutWater += tempJuice;
        coconutWater->setRate(rateOfIce, rateOfSugar);
        totalPrice += coconutWater->getAmount();
        break;
    }
}

void Table::chooseSmoothie(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {

        avocado_Smoothie->addDrink(1, 0);
        durian_Smoothie->addDrink(2, 0);
        blueberry_Smoothie->addDrink(3, 0);
        strawberry_Smoothie->addDrink(4, 0);
        sugarApple_Smoothie->addDrink(5, 0);
        mango_Smoothie->addDrink(6, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempSmoothie.addDrink(1, numberOf);
        *avocado_Smoothie += tempSmoothie;
        avocado_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += avocado_Smoothie->getAmount();
        break;
    case 2:
        tempSmoothie.addDrink(2, numberOf);
        *durian_Smoothie += tempSmoothie;
        durian_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += durian_Smoothie->getAmount();
        break;
    case 3:
        tempSmoothie.addDrink(3, numberOf);
        *blueberry_Smoothie += tempSmoothie;
        blueberry_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += blueberry_Smoothie->getAmount();
        break;
    case 4:
        tempSmoothie.addDrink(4, numberOf);
        *strawberry_Smoothie += tempSmoothie;
        strawberry_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += strawberry_Smoothie->getAmount();
        break;
    case 5:
        tempSmoothie.addDrink(5, numberOf);
        *sugarApple_Smoothie += tempSmoothie;
        sugarApple_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += sugarApple_Smoothie->getAmount();
        break;
    case 6:
        tempSmoothie.addDrink(6, numberOf);
        *mango_Smoothie += tempSmoothie;
        mango_Smoothie->setRate(rateOfIce, rateOfSugar);
        totalPrice += mango_Smoothie->getAmount();
        break;
    }
}

void Table::chooseYogurt(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        cheese_Yogurt->addDrink(1, 0);
        avocado_Yogurt->addDrink(2, 0);
        lychee_Yogurt->addDrink(3, 0);
        mango_Yogurt->addDrink(4, 0);
        matcha_Yogurt->addDrink(5, 0);
        blueberry_Yogurt->addDrink(6, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempYogurt.addDrink(1, numberOf);
        *cheese_Yogurt += tempYogurt;
        cheese_Yogurt->setRate(rateOfIce, rateOfSugar);
        totalPrice += cheese_Yogurt->getAmount();
        break;
    case 2:
        tempYogurt.addDrink(2, numberOf);
        *avocado_Yogurt += tempYogurt;
        avocado_Yogurt->setRate(rateOfIce, rateOfSugar);
        totalPrice += avocado_Yogurt->getAmount();
        break;
    case 3:
        tempYogurt.addDrink(3, numberOf);
        *lychee_Yogurt += tempYogurt;
        lychee_Yogurt->setRate(rateOfIce, rateOfSugar);
        totalPrice += lychee_Yogurt->getAmount();
        break;
    case 4:
        tempYogurt.addDrink(4, numberOf);
        *mango_Yogurt += tempYogurt;
        mango_Yogurt->setRate(rateOfIce, rateOfSugar);
        totalPrice += mango_Yogurt->getAmount();
        break;
    case 5:
        tempYogurt.addDrink(5, numberOf);
        *blueberry_Yogurt += tempYogurt;
        blueberry_Yogurt->setRate(rateOfIce, rateOfSugar);
        totalPrice += blueberry_Yogurt->getAmount();
        break;
    }
}

void Table::chooseIceBlended(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        lemon_IceBlended->addDrink(1, 0);
        blueberry_IceBlended->addDrink(2, 0);
        chocolate_IceBlended->addDrink(3, 0);
        mint_IceBlended->addDrink(4, 0);
        sapocheCoffee_IceBlended->addDrink(5, 0);
        matcha_IceBlended->addDrink(6, 0);
        strawberry_IceBlended->addDrink(7, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempIceBlended.addDrink(1, numberOf);
        *lemon_IceBlended += tempIceBlended;
        lemon_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += lemon_IceBlended->getAmount();
        break;
    case 2:
        tempIceBlended.addDrink(2, numberOf);
        *blueberry_IceBlended += tempIceBlended;
        blueberry_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += blueberry_IceBlended->getAmount();
        break;
    case 3:
        tempIceBlended.addDrink(3, numberOf);
        *chocolate_IceBlended += tempIceBlended;
        chocolate_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += chocolate_IceBlended->getAmount();
        break;
    case 4:
        tempIceBlended.addDrink(4, numberOf);
        *mint_IceBlended += tempIceBlended;
        mint_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += mint_IceBlended->getAmount();
        break;
    case 5:
        tempIceBlended.addDrink(5, numberOf);
        *sapocheCoffee_IceBlended += tempIceBlended;
        sapocheCoffee_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += sapocheCoffee_IceBlended->getAmount();
        break;
    case 6:
        tempIceBlended.addDrink(6, numberOf);
        *matcha_IceBlended += tempIceBlended;
        matcha_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += matcha_IceBlended->getAmount();
        break;
    case 7:
        tempIceBlended.addDrink(7, numberOf);
        *strawberry_IceBlended += tempIceBlended;
        strawberry_IceBlended->setRate(rateOfIce, rateOfSugar);
        totalPrice += strawberry_IceBlended->getAmount();
        break;
    }
}

void Table::chooseSoda(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        lemon_Soda->addDrink(1, 0);
        peach_Soda->addDrink(2, 0);
        mint_Soda->addDrink(3, 0);
        passion_Soda->addDrink(4, 0);
        kiwi_Soda->addDrink(5, 0);
        raspberry_Soda->addDrink(6, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempSoda.addDrink(1, numberOf);
        *lemon_Soda += tempSoda;
        lemon_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += lemon_Soda->getAmount();
        break;
    case 2:
        tempSoda.addDrink(2, numberOf);
        *peach_Soda += tempSoda;
        peach_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += peach_Soda->getAmount();
        break;
    case 3:
        tempSoda.addDrink(3, numberOf);
        *mint_Soda += tempSoda;
        mint_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += mint_Soda->getAmount();
        break;
    case 4:
        tempSoda.addDrink(4, numberOf);
        *passion_Soda += tempSoda;
        passion_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += passion_Soda->getAmount();
        break;
    case 5:
        tempSoda.addDrink(5, numberOf);
        *kiwi_Soda += tempSoda;
        kiwi_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += kiwi_Soda->getAmount();
        break;
    case 6:
        tempSoda.addDrink(6, numberOf);
        *raspberry_Soda += tempSoda;
        raspberry_Soda->setRate(rateOfIce, rateOfSugar);
        totalPrice += raspberry_Soda->getAmount();
        break;
    }
}

void Table::chooseSoftDrink(int thisDrink, int numberOf, int rateOfIce, int rateOfSugar)
{
    if (numberOf == 0)
    {
        sevenUp->addDrink(1, 0);
        cocaCola->addDrink(2, 0);
        redbull->addDrink(3, 0);
        revive->addDrink(4, 0);
        sting->addDrink(5, 0);
        c2->addDrink(6, 0);
        return;
    }
    switch (thisDrink)
    {
    case 1:
        tempSoftDrink.addDrink(1, numberOf);
        *sevenUp += tempSoftDrink;
        sevenUp->setRate(rateOfIce, rateOfSugar);
        totalPrice += sevenUp->getAmount();
        break;
    case 2:
        tempSoftDrink.addDrink(2, numberOf);
        *cocaCola += tempSoftDrink;
        cocaCola->setRate(rateOfIce, rateOfSugar);
        totalPrice += cocaCola->getAmount();
        break;
    case 3:
        tempSoftDrink.addDrink(3, numberOf);
        *redbull += tempSoftDrink;
        redbull->setRate(rateOfIce, rateOfSugar);
        totalPrice += redbull->getAmount();
        break;
    case 4:
        tempSoftDrink.addDrink(4, numberOf);
        *revive += tempSoftDrink;
        revive->setRate(rateOfIce, rateOfSugar);
        totalPrice += revive->getAmount();
        break;
    case 5:
        tempSoftDrink.addDrink(5, numberOf);
        *sting += tempSoftDrink;
        sting->setRate(rateOfIce, rateOfSugar);
        totalPrice += espresso->getAmount();
        break;
    case 6:
        tempSoftDrink.addDrink(6, numberOf);
        *c2 += tempSoftDrink;
        c2->setRate(rateOfIce, rateOfSugar);
        totalPrice += c2->getAmount();
        break;
    }
}

void Table::printIfExist()
{
    cout << setw(30) << "Ten" << setw(20) << "So luong" << setw(20) << "Don gia" << setw(20) << "Thanh tien" << endl;
    // TEA
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

    // COFFEE
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

    // JUICE
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

    // SMOOTHIE
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

    // YOGURT
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

    // ICE BLENDED
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

    // SODA
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

    // SOFT DRINK
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

void Table::removeAllDrink()
{
    for (int i = 1; i <= 10; i++)
    {
        chooseTea(i, 0, 0, 0);
        chooseCoffee(i, 0, 0, 0);
        chooseJuice(i, 0, 0, 0);
        chooseSmoothie(i, 0, 0, 0);
        chooseYogurt(i, 0, 0, 0);
        chooseIceBlended(i, 0, 0, 0);
        chooseSoda(i, 0, 0, 0);
        chooseSoftDrink(i, 0, 0, 0);
    }
    totalPrice = 0;
}