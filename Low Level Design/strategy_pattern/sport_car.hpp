#ifndef sport_car_hpp
#define sport_car_hpp
#include "vehicle_strategy.hpp"
#include "Drivestrategy/FastDriveStrategy.hpp"

class sport_car : public vehicle{
    public:
        FastDriveStrategy* FastDrive;
        sport_car(){
            this->FastDrive = new FastDriveStrategy();
            vehicle(this->FastDrive);
        }
};

#endif