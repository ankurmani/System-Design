#ifndef DELLDESKTOPBUILDER
#define DELLDESKTOPBUILDER

#include "DesktopBuilder.hpp"

class DellDeskTopBuilder : public DesktopBuilder{
    void buildMonitor();
    void buildKeyboard();
    void buildMouse();
    void buildSpearker();
    void buildRam();
    void buildProcessor();
    void buildMotherBoard();
};

#endif