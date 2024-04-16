#ifndef DISPENCEITEM_HPP
#define DISPENCEITEM_HPP
#include "state.hpp"
#include "Ideal.hpp"
#include "DispenseItem.hpp"
#include "InventoryItem.hpp"
#include "PutMoney.hpp"
#include<vector>
#include<string>
using namespace std;

class DispenceItem : public State{
    private:
    public:
        void fillInventory(int ItemCode, string Item);
        void createInventory(int count);
        State* pressButton(); // Ideal to PutMoney
        State* putmoney(int amount);
        int getMoney();
        void refundmoney();
        void refundchange();
        void getInvertoryItemNumber();
        void checkItemAvailability();
        State* dispenceItem();
        void pricecheck();
};


#endif