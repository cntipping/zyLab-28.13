#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

/* Type your code here */

ItemToPurchase::ItemToPurchase(){
  itemName = "none";
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
  return itemPrice;
}

int ItemToPurchase::GetQuantity(){
  return itemQuantity;
}

void ItemToPurchase::Print(){
  cout << itemName << " " << itemQuantity << " @ $" << itemPrice << endl;
}

