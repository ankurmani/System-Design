#include<iostream>
#include "state.hpp"
#include "cashWithdrawal.hpp"
using namespace std;

int price = 0;
void cashwithdrawalstate::getamount(int moneyamount) {
    price = moneyamount;
}
state* cashwithdrawalstate::cashwidrawal() {
    cashwithdraw* out = new onethousandcash();
    out->getcash(2700);
    return new ATMIdealstate();
}

state* cashwithdrawalstate::validatepin(string pin){
    return NULL;
}
state* cashwithdrawalstate::chooseaccounttype(string accounttype){
    return NULL;
}
int cashwithdrawalstate::ATMIdeal(){
    return -1;
}
state* cashwithdrawalstate::insertCard(){
    return NULL;
}
int cashwithdrawalstate::exit(){
    return -1;
}