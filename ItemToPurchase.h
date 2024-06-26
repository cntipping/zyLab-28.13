#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

/* Type your code here */
class ItemToPurchase{
  private:
  string itemName;
  int ItemPrice;
  int itemQuantity;

  public:
  ItemToPurchase() = default;
  ItemToPurchase(string name, int price, int qty);

  void SetName(string name);
  void SetPrice(int price);
  void SetQuantity(int qty);

  string GetName();
  int GetPrice();
  int GetQuantity();

  void Print();

};


#endif
