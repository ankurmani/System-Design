#ifndef car_hpp
#define car_hpp
#include "vehicle_strategy.hpp"
#include "Drivestrategy/FastDriveStrategy.hpp"

class car : public vehicle{
    public:
        FastDriveStrategy* FastDrive;
        car(){
            this->FastDrive = new FastDriveStrategy();
            vehicle(this->FastDrive);
        }
};

#endif