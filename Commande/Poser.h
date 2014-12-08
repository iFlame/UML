#ifndef POSER_H
#define POSER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class Poser : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new Poser(robot); }
        void execute();
    protected:
    private:
        Robot* robot;
        Poser(Robot* robot) : robot(robot) {};
};

#endif // POSER_H
