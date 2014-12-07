#ifndef RENCONTREROBST_H
#define RENCONTREROBST_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class RencontrerObst : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new RencontrerObst(robot); }
        void execute();
    protected:
    private:
        Robot* robot;
        RencontrerObst(Robot* robot) : robot(robot) {} ;

};

#endif // RENCONTREROBST_H
