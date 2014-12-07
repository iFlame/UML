#ifndef _FIGER_H
#define _FIGER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class FigerC : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new FigerC(robot); }
        void execute();
    protected:
    private:
        Robot* robot;
        FigerC(Robot* robot) : robot(robot) {} ;
};

#endif // FIGER_H
