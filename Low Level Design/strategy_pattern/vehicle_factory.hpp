#ifndef vehicle_factory_hpp
#define vehicle_factory_hpp

#include<iostream>
#include "car.hpp"
#include "sport_car.hpp"
#include "passenger_car.hpp"

using namespace std;

class vehicleFactory{
    public:
        static vehicle* getvehicle(string vehicleType);
};

#endif