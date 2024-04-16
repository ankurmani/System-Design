#ifndef IDEAL_HPP
#define IDEAL_HPP
#include "state.hpp"
#include "Ideal.hpp"
#include "DispenseItem.hpp"
#include "InventoryItem.hpp"
#include "PutMoney.hpp"
#include<vector>
#include<string>
using namespace std;

class Ideal : public State{
    private:
        struct InventorItem{
            int ItemId;
            string Itemname;
        };
        vector<InventorItem> inventory;
        int InventoryCount = 0;
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
        State* dispenceItem(); // DispenceItem to Ideal
        void pricecheck();
};


#endif