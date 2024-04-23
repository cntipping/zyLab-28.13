// https://github.com/cntipping/zyLab-28.13
// Teammates: Cecilia Tipping, Mollie Hamman

#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
// update from user-1
// update from user-2

int main()
{
    string name;
    int price, quantity;
    int total, item1Tot, item2Tot;

    cout << "Item 1" << endl
         << "Enter the item name:" << endl;
    getline(cin, name);
    cout << "Enter the item price:" << endl;
    cin >> price;
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    ItemToPurchase item1(name, price, quantity);
    cout << endl;

    cin.ignore();
    cout << "Item 2" << endl
         << "Enter the item name:" << endl;
    getline(cin, name);
    cout << "Enter the item price:" << endl;
    cin >> price;
    cout << "Enter the item quantity:" << endl;
    cin >> quantity;
    ItemToPurchase item2(name, price, quantity);
    cout << endl;

    item1Tot = item1.GetQuantity() * item1.GetPrice();
    item2Tot = item2.GetQuantity() * item2.GetPrice();
    total = item1Tot + item2Tot;

    cout << "TOTAL COST" << endl;
    cout << item1.GetName() << " "
         << item1.GetQuantity() << " @ $"
         << item1.GetPrice() << " = $"
         << item1Tot << endl;
    cout << item2.GetName() << " "
         << item2.GetQuantity() << " @ $"
         << item2.GetPrice() << " = $"
         << item2Tot << endl;

    cout << endl
         << "Total: $" << total << endl;

    return 0;
}
