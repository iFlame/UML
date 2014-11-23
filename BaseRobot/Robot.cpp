//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.cpp
//=======================================================================

#include "Robot.hpp"

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
    try {
        etat->poser();

    } catch (EtatRobot::WrongStatementPoser) {
        cout << "Erreur le robot ne peut pas poser." << endl;
    }
}


void Robot::avancer(int x,int y)
{
    try {
        etat->avancer();
        pos.setX(x);
        pos.setY(y);
    } catch (EtatRobot::WrongStatementAvancer) {
        cout << "Erreur le robot ne peut pas avancer." << endl;
    }

}

void Robot::peser()
{
    try {
        etat->peser();

    } catch (EtatRobot::WrongStatementPeser) {
        cout << "Erreur le robot ne peut pas peser." << endl;
    }
}
void Robot::rencontrerPlot(Plot p)
{
    try {
        etat->rencontrerPlot();

    } catch (EtatRobot::WrongStatementRencontrerPlot) {
        cout << "Erreur le robot ne peut pas rencontrer de plot." << endl;
    }
}
void Robot::evaluerPlot()
{
    try {
        etat->evaluerPlot();

    } catch (EtatRobot::WrongStatementEvaluerPlot) {
        cout << "Erreur le robot ne peut pas evaluer de plot." << endl;
    }
}
void Robot::figer()
{
    try {
        etat->figer();

    } catch (EtatRobot::WrongStatementFiger) {
        cout << "Erreur le robot ne peut pas se figer." << endl;
    }
}
void Robot::repartir()
{
    try {
        etat->repartir();

    } catch (EtatRobot::WrongStatementRepartir) {
        cout << "Erreur le robot ne peut pas repartir." << endl;
    }
}

char Robot::getDirection(){
    return direction;
}
