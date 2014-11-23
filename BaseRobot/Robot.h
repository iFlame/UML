//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.h
//=======================================================================

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>
#include "Position.h"
#include "Plot.h"
#include "../Etat/EtatRobot.h"
#include "../Etat/AVide.h"
#include "../Afficher/ElementARepresenter.h"


using namespace std;

class Robot : public ElementARepresenter {

private:
    EtatRobot *etat;
    char direction;
    Position pos;

public :
    //Robot(char, EtatRobot*, Position);
Robot();
    void tourner(char);
    EtatRobot* getEtat();
    void afficher();
    void avancer(int, int);
    void poser();
    void peser();
    void rencontrerPlot(Plot);
    void evaluerPlot();
    void figer();
    void repartir();
    char getDirection();
};

#endif
