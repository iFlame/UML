//=======================================================================
// Basic C++: La classe EtatRobot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.cpp
//=======================================================================

using namespace std;

#include "EtatRobot.h"

EtatRobot::EtatRobot(){}


EtatRobot* EtatRobot::tourner(){
    throw WrongStatementTourner();
}

EtatRobot* EtatRobot::poser(){
    throw WrongStatementPoser();
}

/*
void EtatRobot::peser(){
}
void EtatRobot::rencontrerPlot(){
}
void EtatRobot::evaluerPlot(){
}
void EtatRobot::figer(){
}
void EtatRobot::repartir(){
}
*/
void EtatRobot::afficher() const{
    cout << "Afficher de EtatRobot" << endl;
}
