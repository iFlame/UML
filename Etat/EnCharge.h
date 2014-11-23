#ifndef ENCHARGE_H
#define ENCHARGE_H
#include <iostream>
#include "EnRoute.h"
#include "EnChargeFacePlot.h"
#include "Figer.h"


using namespace std;

class EnCharge : public EnRoute
{
private:
    EnCharge();

    static EnCharge * _singletonInst;
    EnCharge(EnCharge const&);



public:
    static EnCharge * getInstance();
    EtatRobot* tourner();
    EtatRobot* figer();
    EtatRobot* peser();
    EtatRobot* avancer();
    EtatRobot* rencontrerPlot();

    void afficher() const;
};

#endif
