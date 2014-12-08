#ifndef _AVANCER_H
#define _AVANCER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "LecteurFichier.h"

class Avancer : public Commande
{
    public:
//      Commande* constructeur(Robot* robot, int x, int y) const { return new Avancer(robot,x,y); }
        void execute();
        void desexecute();
        static Avancer avancer;
        Avancer(string x);
        virtual Commande* constructeurVirtuel();
                Avancer() {} ;
//Robot* bot, LecteurFichier* lf) : robot(bot), lf(lf)

    protected:
    private:
        Robot* robot;
        LecteurFichier* lf;
        int newX;
        int newY;
        int oldX;
        int oldY;
};

#endif // AVANCER_H
