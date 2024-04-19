#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase(){
  itemName;
  itemPrice = 0;
  itemQuantity = 0;
}

void ItemToPurchase::SetQuantity(int qty){
  itemQuantity = qty;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}
