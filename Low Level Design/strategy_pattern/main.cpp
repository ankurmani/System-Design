#include<iostream>
#include "vehicle_factory.hpp"

using namespace std;

int main(){
    string vehicleType;
    cin >> vehicleType;
    vehicle* vehicle = vehicleFactory::getvehicle(vehicleType);
    vehicle->drive();
    return 0;
}