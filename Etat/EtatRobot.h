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
    class WrongStatementPeser {};
    class WrongStatementAvancer {};
    class WrongStatementRencontrerPlot {};
    class WrongStatementEvaluerPlot {};
    class WrongStatementFiger {};
    class WrongStatementRepartir {};
    class WrongStatementSaisir {};


    EtatRobot();

    virtual EtatRobot* tourner();
    virtual EtatRobot* poser();
    virtual void afficher() const;
    virtual EtatRobot* avancer();
    virtual EtatRobot* peser();
    virtual EtatRobot* rencontrerPlot();
    virtual EtatRobot* evaluerPlot();
    virtual EtatRobot* figer();
    virtual EtatRobot* repartir();
    virtual EtatRobot* saisir();
    static EtatRobot* initialisation();

};

#endif
