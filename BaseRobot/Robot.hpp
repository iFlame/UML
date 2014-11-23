//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.h
//=======================================================================

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>
#include "Position.hpp"
#include "Plot.hpp"
#include "../Etat/EtatRobot.hpp"
#include "../Etat/AVide.hpp"
//#include "../Afficher/ElementARepresenter.h"


using namespace std;

class Robot /*: public ElementARepresenter*/{

private:
    EtatRobot *etat;
    char direction;
    Position pos;

public :
    Robot(char, EtatRobot*, Position);
Robot();
    virtual void tourner(char);
    EtatRobot* getEtat();
    virtual void afficher();




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
