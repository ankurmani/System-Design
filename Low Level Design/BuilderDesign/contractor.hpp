#ifndef CONTRACTOR_HPP
#define CONTRACTOR_HPP

#include "DesktopBuilder.hpp"

class Conractor{
    private:
        DesktopBuilder* desktopbuild;
    public:
        Conractor(DesktopBuilder* pdesktopbuild){
            desktopbuild = pdesktopbuild;
        }
        Desktop* getProduct(){
            return desktopbuild->getDesktop();
        }
        void BuildProduct(){
            desktopbuild->buildKeyboard();
            desktopbuild->buildMonitor();
            desktopbuild->buildMotherBoard();
            desktopbuild->buildMouse();
            desktopbuild->buildProcessor();
            desktopbuild->buildRam();
            desktopbuild->buildSpearker();
        }

};

#endif