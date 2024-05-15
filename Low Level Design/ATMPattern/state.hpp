#ifndef STATE_PATTERN
#define STATE_PATTERN
#include<iostream>
using namespace std;

class state{
    public:
        virtual int ATMIdeal() = 0;
        virtual state* insertCard() = 0;
        virtual state* validatepin(string pin) = 0;
        virtual state* chooseaccounttype(string accounttype) = 0;
        virtual void getamount(int moneyamount) = 0;
        virtual state* cashwidrawal() = 0;
        virtual int exit() = 0;
};

#endif