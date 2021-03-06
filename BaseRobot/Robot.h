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
#include "Objet.h"
#include "../Etat/EtatRobot.h"
#include "../Afficher/ElementARepresenter.h"


using namespace std;

class Robot : public ElementARepresenter {

private:
    EtatRobot *etat;
    char direction;
    Position* pos;
    string ordre;
    Objet* objet;
    Plot* plot;
public :
    Robot();
    void tourner(char);
    void afficher();
    void avancer(int, int);
    void poser();
    void peser();
    void rencontrerPlot(Plot*);
    void evaluerPlot();
    void figer();
    void repartir();
    void saisir(Objet*);
    EtatRobot* getEtat();
    char getDirection();
    string getOrdre();
    Position* getPosition();
    Objet* getObjet();
    Plot* getPlot();
};

#endif
