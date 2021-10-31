#include <iostream>
#include "Table.h"

using namespace std;

int main()
{
    Table table[100];

    table[0].customer[0].tea.milkTea(2);
    table[0].customer[1].coffee.blackCoffee(2);
    table[0].pay();
    table[0].bill();
}