#ifndef IDEAL_PATTERN
#define IDEAL_PATTERN

#include<iostream>
#include "state.hpp"
#include "validatepin_state.hpp"
using namespace std;

class ATMIdealstate : public state{
    public:
        int ATMIdeal();
        state* insertCard();
        state* validatepin(string pin);
        state* chooseaccounttype(string accounttype);
        void getamount(int moneyamount);
        state* cashwidrawal();
        int exit();
};

#endif