#ifndef TOURNER_H
#define TOURNER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class Tourner : public Commande
{
    public:
        Commande* constructeur(Robot* robot, char direction) const { return new Tourner(robot,direction); }
        void execute();
        void desexecute();
    protected:
    private:
        Tourner(Robot* robot, char direction) : robot(robot), direction(direction) {};
        Robot* robot;
        char direction;
        char oldDirection;
};

#endif // TOURNER_H
