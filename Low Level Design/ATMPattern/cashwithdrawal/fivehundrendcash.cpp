#include<iostream>
#include "cashwithdraw.hpp"
#include "twohundredcash.cpp"
using namespace std;

class fivehundredcash : public cashwithdraw{
    public:
        void getcash(int amount){
            int notes = amount/500;
            cout << "Notes of 500 give : " << notes << endl;
            cashwithdraw* out = new twohundredcash();
            out->getcash(amount%500);
            return; 
        }
};