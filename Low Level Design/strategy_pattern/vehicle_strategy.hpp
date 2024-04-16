#ifndef vehicle_strategy_hpp
#define vehicle_strategy_hpp
#include "Drivestrategy/Drivestrategy.hpp"
class vehicle{
    public:
        Drivestrategy* drivestrategy;

        vehicle() {}
        vehicle(Drivestrategy* drivestrategy){
            this->drivestrategy = drivestrategy;
            this->drivestrategy->drive();
        }

        void drive(){
            this->drivestrategy->drive();
            delete drivestrategy;
        }
};

#endif