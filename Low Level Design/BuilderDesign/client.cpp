#include<iostream>
#include "dellDeskTopBuilder.hpp"
#include "HPDeskTopBuilder.hpp"
#include "contractor.hpp"

using namespace std;


int main(){
    
    DellDeskTopBuilder* delldesktop = new DellDeskTopBuilder();
    HPDeskTopBuilder* hpdesktop = new HPDeskTopBuilder();
    
    Conractor* desktop1 = new Conractor(delldesktop);
    Conractor* desktop2 = new Conractor(hpdesktop);

    desktop1->BuildProduct();
    desktop2->BuildProduct();

    Desktop* D1 = desktop1->getProduct();
    Desktop* D2 = desktop2->getProduct();

    D1->showSpecs();
    D2->showSpecs();

    return 0;
}