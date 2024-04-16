#ifndef HPDESKTOPBUILDER
#define HPDESKTOPBUILDER

#include "DesktopBuilder.hpp"

class HPDeskTopBuilder : public DesktopBuilder{
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpearker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif