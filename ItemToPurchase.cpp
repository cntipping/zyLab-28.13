#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase(){
  itemName;
  itemPrice = 0;
  itemQuantity = 0;
}

// setters
void ItemToPurchase::SetName(string name){
  itemName = name;
}
void ItemToPurchase::SetPrice(int price){
  itemPrice = price;
}
void ItemToPurchase::SetQuantity(int qty){
  itemQuantity = qty;
}

// getters
string ItemToPurchase::GetName(){
  return itemName;
}
int ItemToPurchase::GetPrice(){
  return ItemPrice;
}
int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}


