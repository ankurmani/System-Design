#include<iostream>
#include "Ideal.hpp"
using namespace std;

void Ideal::fillInventory(int ItemCode, string Item){
    for(int i=1;i<=10;i++){
        if(i<3){
            Ideal::InventorItem newItem;
            newItem.ItemId = i;
            newItem.Itemname = "Coke";
            inventory.push_back(newItem);
        }
        else if(i>=3 && i<=6){
            Ideal::InventorItem newItem;
            newItem.ItemId = i;
            newItem.Itemname = "Sprite";
            inventory.push_back(newItem);
        }
        else{
            Ideal::InventorItem newItem;
            newItem.ItemId = i;
            newItem.Itemname = "Mirinda";
            inventory.push_back(newItem);
        }
    }
}

void Ideal::createInventory(int ItemNo){
    Ideal::InventoryCount = ItemNo;
    cout << Ideal::InventoryCount << endl;
}

State* Ideal::pressButton(){
    cout << "Please put money to vending machine" << endl;
    return new PutMoney();
}

void Ideal::refundmoney(){
    cout << "Module Not required" << endl;
}
void Ideal::refundchange(){
    cout << "Module Not required" << endl;
}
void Ideal::getInvertoryItemNumber(){
    cout << "Module Not required" << endl;
}
void Ideal::checkItemAvailability(){
    cout << "Module Not required" << endl;
}
State* Ideal::dispenceItem(){
    cout << "Module Not required" << endl;
    return NULL;
}
void Ideal::pricecheck(){
    cout << "Module Not required" << endl;
}