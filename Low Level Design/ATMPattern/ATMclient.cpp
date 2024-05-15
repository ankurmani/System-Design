#include<iostream>
#include "state.hpp"
#include "ATMIdeal.hpp"

using namespace std;

class ATMclient{
    public:
        void clientApp(){
            state* st = new ATMIdealstate();
            st->ATMIdeal();
            st = st->insertCard();
            st = st->validatepin("1234");
            st = st->chooseaccounttype("SAVING");
            st = st->cashwidrawal();
            st->ATMIdeal();


        }
};