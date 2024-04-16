#ifndef STATE_HPP
#define STATE_HPP

class State{
    public:
        virtual void fillInventory(int ItemCode, string Item) = 0;
        virtual void createInventory(int count) = 0;
        virtual State* pressButton() = 0;
        virtual State* putmoney(int amount) = 0;
        virtual int getMoney() = 0;
        virtual void refundmoney() = 0;
        virtual void refundchange() = 0;
        virtual void getInvertoryItemNumber() = 0;
        virtual void checkItemAvailability() = 0;
        virtual State* dispenceItem() = 0;
        virtual void pricecheck() = 0;
};

#endif