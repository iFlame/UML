#ifndef REPARTIR_H
#define REPARTIR_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class Repartir : public Commande
{
    public:
        Commande* constructeur(Robot* robot) { return new Repartir(robot); }
        void execute();
    protected:
    private:
        Robot* robot;
        Repartir(Robot* robot) : robot(robot) {} ;

};

#endif // REPARTIR_H
