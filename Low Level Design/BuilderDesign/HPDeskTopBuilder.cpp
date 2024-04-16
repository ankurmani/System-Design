#include<iostream>
#include "HPDeskTopBuilder.hpp"
using namespace std;

void HPDeskTopBuilder::buildMonitor(){
    desktop->setMonitor("HP Monitot");
}

void HPDeskTopBuilder::buildKeyboard(){
    desktop->setKeyboard("HP keyboard");
}

void HPDeskTopBuilder::buildMotherBoard(){
    desktop->setMotherBoard("HP MotherBoard");
}

void HPDeskTopBuilder::buildMouse(){
    desktop->setMouse("HP mouse");
}

void HPDeskTopBuilder::buildProcessor(){
    desktop->setProcessor("HP Processor");
}

void HPDeskTopBuilder::buildRam(){
    desktop->setRam("HP Ram");
}

void HPDeskTopBuilder::buildSpearker(){
    desktop->setSpeaker("HP spreaker");
}