#ifndef passenger_car_hpp
#define passenger_car_hpp
#include "vehicle_strategy.hpp"
#include "Drivestrategy/NormalDriveStrategy.hpp"

class passenger_car : public vehicle{
    public:
        NormalDriveStrategy* NormalDrive;
        passenger_car(){
            this->NormalDrive = new NormalDriveStrategy();
            vehicle(this->NormalDrive);
        }
};

#endif