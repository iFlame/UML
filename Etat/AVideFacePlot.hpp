#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include <iostream>
#include "EnRoute.hpp"
#include "AVide.hpp"
#include "EnChargeFacePlot.hpp"
#include "Figer.hpp"



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
