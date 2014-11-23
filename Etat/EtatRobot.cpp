//=======================================================================
// Basic C++: La classe EtatRobot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Plot.cpp
//=======================================================================

using namespace std;

#include "EtatRobot.hpp"

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

void EtatRobot::afficher() const{
    cout << "Afficher de EtatRobot" << endl;
}
