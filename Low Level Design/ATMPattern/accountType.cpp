#include<iostream>
#include "accountType.hpp"
using namespace std;


state* accountType::chooseaccounttype(string accounttype){
    enum accounttypeenum { SAVING, CURRENT };
    accounttypeenum account;
    if(accounttype == "SAVING")
        account = SAVING;
    else 
        account = CURRENT;

    switch (account)
    {
    case SAVING:
        cout << "SAVING ACCOUNT ENTERED" << endl;
        break;
    case CURRENT:
        cout << "CURRENT ACCOUNT ENTERED" << endl;
        break;
    default:
        break;
    }
    return new cashwithdrawalstate();
}
int accountType::ATMIdeal() {
    return -1;
}
state* accountType::insertCard() {
    return NULL;
}
void accountType::getamount(int moneyamount) {
    return;
}
state* accountType::cashwidrawal() {
    return NULL;
}

state* accountType::validatepin(string pin){
    return NULL;
}
int accountType::exit(){
    return -1;
}