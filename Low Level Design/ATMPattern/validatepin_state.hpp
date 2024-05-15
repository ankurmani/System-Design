#ifndef VALIDATION_PATTERN
#define VALIDATION_PATTERN

#include<iostream>
#include "state.hpp"
#include "accountType.hpp"
using namespace std;

class validatepinstate : public state{
    public:
        void getamount(int moneyamount);
        state* cashwidrawal();
        int ATMIdeal();
        state* insertCard();
        state* validatepin(string pin);
        state* chooseaccounttype(string accounttype);
        int exit();
};

#endif