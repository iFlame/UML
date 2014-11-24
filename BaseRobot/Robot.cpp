//=======================================================================
// Basic C++: La classe Robot
//-----------------------------------------------------------------------
// Quentin Cornevin - Clement Audry
// $Id: Robot.cpp
//=======================================================================

#include "Robot.h"

//Robot::Robot(char newDirection, EtatRobot* etatRobot, Position position) : direction(newDirection), etat(etatRobot), pos(position) { }
Robot::Robot()
{
    attacherAfficheur(NULL);
    etat=EtatRobot::initialisation();
    this->direction='E';
    pos=new Position(0,0);
    objet=NULL;
    plot=NULL;
}

void Robot::tourner(char direction)
{
    try {
        ordre="tourner";
        if(direction == 'E' || direction == 'N' || direction == 'O' || direction == 'S'||this->direction!=direction ){
            etat=etat->tourner();
            this->direction=direction;
            plot=NULL;
            notifier();
        }
        else throw EtatRobot::WrongStatementTourner();
    } catch (EtatRobot::WrongStatementTourner) {
        cout << "Erreur le robot ne peut pas tourner." << endl;
    }
}
void Robot::saisir(Objet* obj)
{
    try {
        ordre="saisir";
        etat=etat->saisir();
        this->objet=obj;
        notifier();
    } catch (EtatRobot::WrongStatementSaisir) {
        cout << "Erreur le robot ne peut pas tourner." << endl;
    }
}

EtatRobot* Robot::getEtat() {
    return etat;
}

Objet* Robot::getObjet() {
    return objet;
}

void Robot::afficher() {
    etat->afficher();
}

void Robot::poser() {
    try {
        ordre="poser";
        etat=etat->poser();
        this->objet=NULL;
        notifier();
    } catch (EtatRobot::WrongStatementPoser) {
        cout << "Erreur le robot ne peut pas poser." << endl;
    }
}


void Robot::avancer(int x,int y)
{
    try {
        ordre="avancer";
        etat=etat->avancer();
        pos->setX(x);
        pos->setY(y);
        notifier();
    } catch (EtatRobot::WrongStatementAvancer) {
        cout << "Erreur le robot ne peut pas avancer." << endl;
    }

}

void Robot::peser()
{
    try {
        ordre="peser";
        etat=etat->peser();
        notifier();
        cout<<"L'objet pese "<< objet->getPoids();

    } catch (EtatRobot::WrongStatementPeser) {
        cout << "Erreur le robot ne peut pas peser." << endl;
    }
}
void Robot::rencontrerPlot(Plot* p)
{
    try {
        ordre="rencontrerPlot";
        etat=etat->rencontrerPlot();
        plot=p;
        notifier();

    } catch (EtatRobot::WrongStatementRencontrerPlot) {
        cout << "Erreur le robot ne peut pas rencontrer de plot." << endl;
    }
}
void Robot::evaluerPlot()
{
    try {
        ordre = "evaluer";
        etat=etat->evaluerPlot();
        notifier();
        cout<<"Le plot est de hauteur "<< plot->getHauteur();
    } catch (EtatRobot::WrongStatementEvaluerPlot) {
        cout << "Erreur le robot ne peut pas evaluer de plot." << endl;
    }
}
void Robot::figer()
{
    try {
        ordre = "figer";
        etat=etat->figer();
        notifier();

    } catch (EtatRobot::WrongStatementFiger) {
        cout << "Erreur le robot ne peut pas se figer." << endl;
    }
}
void Robot::repartir()
{
    try {
        etat=etat->repartir();
        notifier();

    } catch (EtatRobot::WrongStatementRepartir) {
        cout << "Erreur le robot ne peut pas repartir." << endl;
    }
}

char Robot::getDirection(){
    return direction;
}

string Robot::getOrdre(){
    return ordre;
}
Position* Robot::getPosition(){
    return pos;
}
Plot* Robot::getPlot(){
    return plot;
}
