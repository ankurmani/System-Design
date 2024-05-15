#ifndef ACCOUNT_PATTERN
#define ACCOUNT_PATTERN

#include<iostream>
#include<bits/stdc++.h>
#include "state.hpp"
#include "cashWithdrawal.hpp"
using namespace std;

class accountType : public state{
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