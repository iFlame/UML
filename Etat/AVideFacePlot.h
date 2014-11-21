#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include <iostream>
#include "EnRoute.h"
#include "AVide.h"


using namespace std;

class AVideFacePlot : public EnRoute {

private:
    AVideFacePlot();

    static AVideFacePlot * _singletonInst;
    AVideFacePlot(AVideFacePlot const&);


public:

    static AVideFacePlot * getInstance();

    EtatRobot* tourner();
    void afficher() const;


};

#endif
