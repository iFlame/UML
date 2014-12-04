#ifndef SAISIR_H
#define SAISIR_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class Saisir : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new Saisir(robot); }
    protected:
    private:
        Saisir(Robot* robot) : robot(robot) {} ;
        Robot* robot;

};

#endif // SAISIR_H
