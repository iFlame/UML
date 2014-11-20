#ifndef AVIDEFACEPLOT_H
#define AVIDEFACEPLOT_H
#include <iostream>
#include "EnRoute.h"
#include "AVide.h"


using namespace std;

class AVideFacePlot : public EnRoute
{
    public:
        AVideFacePlot();
        EtatRobot* tourner();
    private:
};

#endif
