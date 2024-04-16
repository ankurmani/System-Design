#include "vehicle_factory.hpp"
#include<iostream>
using namespace std;

vehicle* vehicleFactory::getvehicle(string vehicleType){
    vehicle* vehicleptr;
    if(vehicleType == "car"){
        cout << "car" << endl;
        vehicleptr = new car();
    }
    else if(vehicleType == "sport_car"){
        cout << "sport_car" << endl;
        vehicleptr = new sport_car();
    }
    else{
        cout << "passenger_car" << endl;
        vehicleptr = new passenger_car();
    }
    return vehicleptr;
}