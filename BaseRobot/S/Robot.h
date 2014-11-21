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

using namespace std;

class Robot {

private:
    EtatRobot* etat;
    string direction;
    Position* pos;
public :
    Robot();
    void avancer(int, int);
    void tourner(string);
    void poser();
    void peser();
    void rencontrerPlot(Plot);
    void evaluerPlot();
    void figer();
    void repartir();
    void afficher();
string getDirection();

};

#endif
