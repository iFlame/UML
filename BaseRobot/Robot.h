//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.h
//=======================================================================

#ifndef _ROBOT_H_
#define _ROBOT_H_

#include <iostream>
using namespace std;

class Robot {

private:
    String direction;

public :

    void avancer(int, int);
    void tourner(String);
    void poser();
    void peser();
    void rencontrerPlot(); // TODO : Rajouter le plot en paramètre.
    void evaluerPlot();
    void figer();
    void repartir();
    void afficher();


};

#endif