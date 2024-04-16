#include<iostream>
#include "PutMoney.hpp"
using namespace std;

void PutMoney::fillInventory(int ItemCode, string Item){
    cout << "Module Not required" << endl;
}

void PutMoney::createInventory(int ItemNo){
    cout << "Module Not required" << endl;
}

State* PutMoney::putmoney(int amount){
    PutMoney::amount = amount;
    return new InventoryItem();
}

void PutMoney::refundmoney(){
    cout << "Module Not required" << endl;
}
void PutMoney::refundchange(){
    cout << "Module Not required" << endl;
}
void PutMoney::getInvertoryItemNumber(){
    cout << "Module Not required" << endl;
}
void PutMoney::checkItemAvailability(){
    cout << "Module Not required" << endl;
}
State* PutMoney::dispenceItem(){
    cout << "Module Not required" << endl;
    return NULL;
}
void PutMoney::pricecheck(){
    cout << "Module Not required" << endl;
}