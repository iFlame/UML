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
    class WrongStatementTourner {};
    class WrongStatementPoser {};
    EtatRobot();

    virtual EtatRobot* tourner();
    virtual EtatRobot* poser();
    virtual void afficher() const;


/*
   virtual void avancer();

    virtual void poser();
    virtual void peser();
    virtual void rencontrerPlot();
    virtual void evaluerPlot();
    virtual void figer();
    virtual void repartir();
*/

};

#endif
