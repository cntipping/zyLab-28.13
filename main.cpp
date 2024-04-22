#include <iostream>
using namespace std;

#include "ItemToPurchase.h"
// update from user-1
// update from user-2

int main(){

  string item1, item2;
  int price, quantity, total;

  
  cout << "Item 1" << endl << "Enter the item name:" << endl;
  cin >> item1;
  item1 = ItemToPurchase(item1);
  cout << "Enter the item price:" << endl;
  cin >> price;
  item1.SetPrice(price);
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item1.SetQuantity(quantity);

  cin.ignore();
  cout << "Item 2" << endl << "Enter the item name:" << endl;
  cin >> item2;
  item2 = ItemToPurchase(item2);
  cout << "Enter the item price:" << endl;
  cin >> price;
  item2.SetPrice(price);
  cout << "Enter the item quantity:" << endl;
  cin >> quantity;
  item2.SetQuantity(quantity);

  total = (item1.GetQuantity() * item1.GetPrice()) + (item2.GetQuantity() * item2.GetPrice());

  cout << "TOTAL COST" << endl;
  cout << item1.GetName() << " " << item1.GetQuantity() << " @ " << item1.GetPrice() << endl;
  cout << item2.GetName() << " " << item2.GetQuantity() << " @ " << item2.GetPrice() << endl;

  cout << endl << "Total: $" << total << endl;

  return 0;
}
