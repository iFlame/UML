//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.cpp
//=======================================================================

#include "Robot.h"

Robot::Robot(char newDirection, EtatRobot* etatRobot, Position position) : direction(newDirection), etat(etatRobot), pos(position) { }
Robot::Robot()
{
    etat=AVide::getInstance();
    this->direction='E';
    pos=Position(0,0);
}

void Robot::tourner(char direction)
{
    try {
        etat->tourner();
        if(direction == 'E' || direction == 'N' || direction == 'O' || direction == 'S' ){
            this->direction=direction;
        }
    } catch (EtatRobot::WrongStatementTourner) {
        cout << "Erreur le robot ne peut pas tourner." << endl;
    }
}


EtatRobot* Robot::getEtat() {
    return etat;
}


void Robot::afficher() {
    etat->afficher();
}

void Robot::poser() {
    etat=etat->poser();
    etat->afficher();

//    etat=AVideFacePlot::getInstance();
//    etat->afficher();
}


void Robot::avancer(int x,int y)
{
    pos.setX(x);
    pos.setY(y);
}

void Robot::peser()
{
}
void Robot::rencontrerPlot(Plot p)
{
}
void Robot::evaluerPlot()
{
}
void Robot::figer()
{
}
void Robot::repartir()
{
}

char Robot::getDirection(){
    return direction;
}
