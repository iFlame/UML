//=======================================================================
// Basic C++: La classe Plot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.h
//=======================================================================

#ifndef _ETATROBOT_H_
#define _ETATROBOT_H_

#include <iostream>
using namespace std;

class EtatRobot {

public :
    class WrongStatement{};
    EtatRobot();
    virtual void avancer();
    virtual EtatRobot* tourner();
    virtual void poser();
    virtual void peser();
    virtual void rencontrerPlot();
    virtual void evaluerPlot();
    virtual void figer();
    virtual void repartir();
    virtual void afficher();
};

#endif
