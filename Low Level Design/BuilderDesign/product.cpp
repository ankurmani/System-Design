#include<iostream>
#include "product.hpp"

using namespace std;

void Desktop::setKeyboard(string pKeyboard){
    keyboard = pKeyboard;
}

void Desktop::setMonitor(string pMonitor){
    monitor = pMonitor;
}

void Desktop::setMotherBoard(string pMotherBoard){
    motherBoard = pMotherBoard;
}

void Desktop::setMouse(string pMouse){
    mouse = pMouse;
}

void Desktop::setProcessor(string pProcessor){
    processor = pProcessor;
}

void Desktop::setRam(string pRam){
    ram = pRam;
}

void Desktop::setSpeaker(string pSpreaker){
    spreaker = pSpreaker;
}

void Desktop::showSpecs(){
    cout << "----------------------------------Specs for Desktop----------------------" << endl;
    cout << "Monitor " << monitor << endl;
    cout << "keyboard " << keyboard << endl;
    cout << "motherBoard " << motherBoard << endl;
    cout << "mouse " << mouse << endl;
    cout << "ram " << ram << endl;
    cout << "spreaker " << spreaker << endl;
    cout << "processor " << processor << endl;

}