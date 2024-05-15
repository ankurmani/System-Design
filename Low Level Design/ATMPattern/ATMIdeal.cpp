#include<iostream>
#include "ATMIdeal.hpp"
using namespace std;

int ATMIdealstate::ATMIdeal() {
    cout << "ATM is in Ideal State" << endl;
    return 1;
}
state* ATMIdealstate::insertCard() {
    cout << "Card inserted" << endl;
    return new validatepinstate();
}
void ATMIdealstate::getamount(int moneyamount) {
    return;
}
state* ATMIdealstate::cashwidrawal() {
    return NULL;
}

state* ATMIdealstate::validatepin(string pin){
    return NULL;
}
state* ATMIdealstate::chooseaccounttype(string accounttype){
    return NULL;
}
int ATMIdealstate::exit(){
    return -1;
}
