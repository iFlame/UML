//=======================================================================
// Basic C++: La classe EtatRobot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.cpp
//=======================================================================

using namespace std;

#include "EtatRobot.h"
#include "AVide.h"


EtatRobot::EtatRobot(){}


EtatRobot* EtatRobot::tourner(){
    throw WrongStatementTourner();
}

EtatRobot* EtatRobot::poser(){
    throw WrongStatementPoser();
}
EtatRobot* EtatRobot::avancer(){
    throw WrongStatementAvancer();
}
EtatRobot* EtatRobot::peser(){
    throw WrongStatementPeser();
}
EtatRobot* EtatRobot::rencontrerPlot(){
    throw WrongStatementRencontrerPlot();
}
EtatRobot* EtatRobot::evaluerPlot(){
    throw WrongStatementEvaluerPlot();
}
EtatRobot* EtatRobot::figer(){
    throw WrongStatementFiger();
}
EtatRobot* EtatRobot::repartir(){
    throw WrongStatementRepartir();
}
EtatRobot* EtatRobot::saisir(){
    throw WrongStatementSaisir();
}
void EtatRobot::afficher() const{
    cout << "Afficher de EtatRobot" << endl;
}
EtatRobot* EtatRobot::initialisation(){
    return AVide::getInstance();
}
