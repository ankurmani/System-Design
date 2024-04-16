#include<iostream>
#include "DispenseItem.hpp"
using namespace std;

void DispenceItem::fillInventory(int ItemCode, string Item){
    cout << "Module Not required" << endl;
}

void DispenceItem::createInventory(int ItemNo){
    cout << "Module Not required" << endl;
}

void DispenceItem::refundmoney(){
    cout << "Module Not required" << endl;
}
void DispenceItem::refundchange(){
    cout << "Module Not required" << endl;
}
void DispenceItem::getInvertoryItemNumber(){
    cout << "Module Not required" << endl;
}
void DispenceItem::checkItemAvailability(){
    cout << "Module Not required" << endl;
}
State* DispenceItem::dispenceItem(){
    cout << "Item is dispenced correctly" << endl;
    return new Ideal();
}
void DispenceItem::pricecheck(){
    cout << "Module Not required" << endl;
}