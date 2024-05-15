#include<iostream>
#include "cashwithdraw.hpp"
#include "fivehundrendcash.cpp"

using namespace std;

class onethousandcash : public cashwithdraw{
    public:
        void getcash(int amount){
            int notes = amount/1000;
            cout << "Notes of 1000 give : " << notes << endl;
            cashwithdraw* out = new fivehundredcash();
            out->getcash(amount%1000);
            return; 
        }
};