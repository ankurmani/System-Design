#ifndef DESKTOP_H
#define DESKTOP_H

#include <string>
using namespace std;

class Desktop{
    private:
        string monitor;
        string keyboard;
        string mouse;
        string spreaker;
        string ram;
        string processor;
        string motherBoard;
    public:
        void setMonitor(string pMonitor);
        void setKeyboard(string pKetboard);
        void setMouse(string pMouse);
        void setSpeaker(string pSpeaker);
        void setRam(string pRam);
        void setProcessor(string pProcessor);
        void setMotherBoard(string pMotherBoard);
        void showSpecs();
};
#endif