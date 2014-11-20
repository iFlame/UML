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
    void avancer();
    EtatRobot* tourner();
    void poser();
    void peser();
    void rencontrerPlot();
    void evaluerPlot();
    void figer();
    void repartir();
    void afficher();
};

#endif
