#ifndef ENCHARGEFACEPLOT_H
#define ENCHARGEFACEPLOT_H
#include <iostream>
#include "EnRoute.hpp"
#include "EnCharge.hpp"
#include "AVideFacePlot.hpp"
#include "Figer.hpp"




using namespace std;

class EnChargeFacePlot : public EnRoute
{
public:
    EtatRobot* poser();
    EtatRobot* peser();
    EtatRobot* tourner();
    EtatRobot* figer();

    void afficher() const;
    static EnChargeFacePlot* getInstance();

private:
    EnChargeFacePlot();
    static EnChargeFacePlot * _singletonInst;
    EnChargeFacePlot(EnChargeFacePlot const&);

};

#endif
