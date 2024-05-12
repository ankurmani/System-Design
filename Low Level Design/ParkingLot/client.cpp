#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<memory>

using namespace std;

class vehicle {
    int vehicleid;
    int vehicletype;
    int parkingstrategy;
public:
    vehicle(int id, int type, int strategy) : vehicleid(id), vehicletype(type), parkingstrategy(strategy) {}
    int getId() const { return vehicleid; }
};

class parkingstrategy {
public:
    virtual bool setparkingspot() = 0;
    virtual ~parkingstrategy() {}
};

class nearestneighbour : public parkingstrategy {
public:
    bool setparkingspot() override {
        return true;
    }
};

class parkingspot {
    vehicle* vehicle1;
    parkingstrategy* out;
    int price;
public:
    parkingspot(vehicle* v, parkingstrategy* p) : vehicle1(v), out(p) {}
    virtual ~parkingspot() {
        delete vehicle1;
        delete out;
    }
    virtual int getprice() = 0;
    int getparkingspot() {
        static int id = 0;
        if (out->setparkingspot()) {
            id++;
            return id;
        }
        return -1;
    }
    int getID(){
        return vehicle1->getId();
    }
    void removeparking() {
        delete vehicle1;
        vehicle1 = NULL;
    }
    bool isOccupied() const {
        return vehicle1 != NULL;
    }
};

class twowheelerprice : public parkingspot {
    int price = 10;
public:
    twowheelerprice(vehicle* v, parkingstrategy* p) : parkingspot(v, p) {}
    int getprice() override {
        return price;
    }
};

class fourwheelerprice : public parkingspot {
    int price = 20;
public:
    fourwheelerprice(vehicle* v, parkingstrategy* p) : parkingspot(v, p) {}
    int getprice() override {
        return price;
    }
};

class parkingspotmanager {
protected:
    int capacity;
    std::list<parkingspot*> whlr;
public:
    parkingspotmanager(int cap) : capacity(cap) {}
    
    bool findparkingspace() const {
        return whlr.size() < capacity;
    }
    
    void addparkingspace(parkingspot* p) {
        if (findparkingspace()) {
            whlr.push_back(p);
            cout << "Vehicle parked in spot " << p->getparkingspot() << endl;
        } else {
            std::cout << "Parking is full" << std::endl;
        }
    }
    
    void removeparkingvehicle(int spotId) {
        auto it = std::find_if(whlr.begin(), whlr.end(), [spotId](parkingspot* p) {
            return p->getID() == spotId;
        });
        if (it != whlr.end()) {
            cout << "Vehicle removed from spot " << spotId << endl;
            (*it)->removeparking();
        } else {
            cout << "No vehicle found in spot " << spotId << endl;
        }
    }

    void displayAvailableSpots() const {
        cout << "Available Parking Spots:" << endl;
        for (auto p : whlr) {
            cout << "Spot " << p->getID() << endl;
        }
    }
};

class twowheeler : public parkingspotmanager {
public:
    twowheeler(int cap) : parkingspotmanager(cap) {}
};

class fourwheeler : public parkingspotmanager {
public:
    fourwheeler(int cap) : parkingspotmanager(cap) {}
};

int main() {
    twowheeler twoWheelerParking(10);
    fourwheeler fourWheelerParking(5);

    vehicle* bike = new vehicle(1, 2, 3);
    vehicle* car = new vehicle(2, 4, 3);

    parkingstrategy* strategy = new nearestneighbour();

    twowheelerprice* bikeSpot = new twowheelerprice(bike, strategy);
    fourwheelerprice* carSpot = new fourwheelerprice(car, strategy);

    twoWheelerParking.addparkingspace(bikeSpot);
    fourWheelerParking.addparkingspace(carSpot);

    twoWheelerParking.displayAvailableSpots();
    fourWheelerParking.displayAvailableSpots();

    twoWheelerParking.removeparkingvehicle(1);
    fourWheelerParking.displayAvailableSpots();

    delete strategy;

    return 0;
}
