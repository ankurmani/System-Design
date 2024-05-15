#include<iostream>
#include "validatepin_state.hpp"
using namespace std;

state* validatepinstate::validatepin(string pin){
    if(pin == "1234"){
        cout << "valid pin....thank you" << endl;
        return new accountType(); 
    }
    return NULL;
}

int validatepinstate::exit(){
    return 1;
}

void validatepinstate::getamount(int moneyamount) {
    return;
}
state* validatepinstate::cashwidrawal() {
    return NULL;
}

state* validatepinstate::chooseaccounttype(string accounttype){
    return NULL;
}
int validatepinstate::ATMIdeal(){
    return -1;
}
state* validatepinstate::insertCard(){
    return NULL;
}
