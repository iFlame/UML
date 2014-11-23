#ifndef AVIDE_H
#define AVIDE_H
#include <iostream>
#include "EnRoute.hpp"
#include "AVideFacePlot.hpp"
#include "Figer.hpp"

using namespace std;

class AVide : public EnRoute {

public:
    EtatRobot* tourner();
    EtatRobot* avancer();
    EtatRobot* rencontrerPlot();
    void afficher() const;
    static AVide* getInstance();
    EtatRobot* figer();

private:
    AVide();
    static AVide * _singletonInst;
    AVide(AVide const&);


};

#endif
