#ifndef COMMANDE_H
#define COMMANDE_H
#include <map>
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "../BaseRobot/Robot.h"
#include "LecteurFichier.h"
using namespace std;



class Commande
{
    public:
        Commande(string,Commande*);
        Robot* robot;
        LecteurFichier* lf;
        Commande();
        Commande(Robot* bot, LecteurFichier* lf) : robot(bot), lf(lf){
//impossible de faire un for each a cause de l'IDLE...
            commande()["AVANCER"]->setRobot(robot);
            commande()["AVANCER"]->setLecteur(lf);
            commande()["TOURNER"]->setRobot(robot);
            commande()["TOURNER"]->setLecteur(lf);
            commande()["SAISIR"]->setRobot(robot);
            commande()["SAISIR"]->setLecteur(lf);
            commande()["FIGER"]->setRobot(robot);
            commande()["FIGER"]->setLecteur(lf);
            commande()["POSER"]->setRobot(robot);
            commande()["POSER"]->setLecteur(lf);
            commande()["PESEROBJET"]->setRobot(robot);
            commande()["PESEROBJET"]->setLecteur(lf);
            commande()["RENCONTREROBST"]->setRobot(robot);
            commande()["RENCONTREROBST"]->setLecteur(lf);
            commande()["REPARTIR"]->setRobot(robot);
            commande()["REPARTIR"]->setLecteur(lf);
            commande()["EVALUEROBST"]->setRobot(robot);
            commande()["EVALUEROBST"]->setLecteur(lf);
            commande()["APPELER"]->setLecteur(lf);
        };
        static map<string,istream*>& listeMacro();
        static map<string,Commande*>& commande();
        virtual Commande* constructeurVirtuel();
        virtual void execute();
        static Commande* creerCommande(string);
        void setRobot(Robot*);
        void setLecteur(LecteurFichier*);
        virtual void test();

    protected:
    private:
};

#endif // COMMANDE_H
