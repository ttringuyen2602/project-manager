#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <string>

using namespace std;

class Storage
{
private:
    double money;
    string stringInFile;

    fstream writeFile;
    fstream readFile;

public:
    Storage();
    ~Storage();
    void recharge(double money);
    void withdraw(double money);
    void openStorage();
    void closeStorage();
    void viewBalance();
};

Storage::Storage()
{
    money = 0;
    stringInFile = "";
}

Storage::~Storage()
{
}

void Storage::recharge(double money)
{
    this->money += money;
}

void Storage::withdraw(double money)
{
    this->money -= money;
}

void Storage::openStorage()
{
    readFile.open("storage.txt", ios::in);
    readFile >> money;
    readFile.close();
    writeFile.open("storage.txt", ios::out);
}

void Storage::closeStorage()
{
    writeFile << this->money;
    writeFile.close();
}

void Storage::viewBalance()
{
    cout << money << endl;
}