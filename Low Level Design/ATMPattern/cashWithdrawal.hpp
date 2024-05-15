#ifndef CASH_PATTERN
#define CASH_PATTERN

#include<iostream>
#include<bits/stdc++.h>
#include "state.hpp"
#include "cashwithdrawal/cashwithdraw.hpp"
#include "cashwithdrawal/onethousandcash.cpp"
#include "ATMIdeal.hpp"
using namespace std;

class cashwithdrawalstate : public state{
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