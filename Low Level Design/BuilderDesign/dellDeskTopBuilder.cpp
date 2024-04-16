#include<iostream>
#include "dellDeskTopBuilder.hpp"
using namespace std;

void DellDeskTopBuilder::buildMonitor(){
    desktop->setMonitor("Dell Monitot");
}

void DellDeskTopBuilder::buildKeyboard(){
    desktop->setKeyboard("Dell keyboard");
}

void DellDeskTopBuilder::buildMotherBoard(){
    desktop->setMotherBoard("Dell MotherBoard");
}

void DellDeskTopBuilder::buildMouse(){
    desktop->setMouse("Dell mouse");
}

void DellDeskTopBuilder::buildProcessor(){
    desktop->setProcessor("Dell Processor");
}

void DellDeskTopBuilder::buildRam(){
    desktop->setRam("Dell Ram");
}

void DellDeskTopBuilder::buildSpearker(){
    desktop->setSpeaker("Dell spreaker");
}