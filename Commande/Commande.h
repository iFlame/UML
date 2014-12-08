#ifndef COMMANDE_H
#define COMMANDE_H
#include <map>
#include <string>
#include <sstream>
#include "../BaseRobot/Robot.h"
#include "LecteurFichier.h"
using namespace std;



class Commande
{
    public:
        Commande(string);
        Robot* robot;
        LecteurFichier* lf;
        Commande();
        Commande(Robot* bot, LecteurFichier* lf) : robot(bot), lf(lf){
   /*         for (map<int, Commande*>::iterator it=commande().begin(); it!=commande()end(); ++it)
//            (auto& kv : commande())
                {
                    it.second->setRobot(robot);
                    it.second->setLecteur(lf);
            }*/
            commande()["AVANCER"]->setRobot(robot);
            commande()["AVANCER"]->setLecteur(lf);

        };
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
