#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include <iostream>
#include "EnRoute.h"
#include "AVide.h"
#include "EnChargeFacePlot.h"
#include "Figer.h"



using namespace std;

class AVideFacePlot : public EnRoute {

private:
    AVideFacePlot();

    static AVideFacePlot * _singletonInst;
    AVideFacePlot(AVideFacePlot const&);


public:

    static AVideFacePlot * getInstance();
    EtatRobot* figer();

    EtatRobot* tourner();
    EtatRobot* evaluerPlot();
    EtatRobot* saisir();

    void afficher() const;


};

#endif
