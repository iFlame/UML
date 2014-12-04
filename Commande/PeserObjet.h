#ifndef PESEROBJET_H
#define PESEROBJET_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class PeserObjet : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new PeserObjet(robot); }
    protected:
    private:
        Robot* robot;
        PeserObjet(Robot* robot) : robot(robot) {};
};

#endif // PESEROBJET_H
