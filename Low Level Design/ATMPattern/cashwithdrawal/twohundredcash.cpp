#include<iostream>
#include "cashwithdraw.hpp"

using namespace std;

class twohundredcash : public cashwithdraw{
    public:
        void getcash(int amount){
            int notes = amount/200;
            cout << "Notes of 200 give : " << notes << endl;
            return; 
        }
};