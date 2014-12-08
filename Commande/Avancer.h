#ifndef _AVANCER_H
#define _AVANCER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class Avancer : public Commande
{
    public:
//      Commande* constructeur(Robot* robot, int x, int y) const { return new Avancer(robot,x,y); }
        void execute();
        void desexecute();
        static Avancer avancer();
        Avancer(string x)
        virtual Commande* constructeurVirtuel();

    protected:
    private:
 //       Avancer(Robot* bot, int x, int y) : robot(bot), newX(x), newY(y) {} ;
        Robot* robot;
        int newX;
        int newY;
        int oldX;
        int oldY;
};

#endif // AVANCER_H
