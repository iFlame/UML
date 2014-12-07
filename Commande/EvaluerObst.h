#ifndef EVALUEROBST_H
#define EVALUEROBST_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class EvaluerObst : public Commande
{
    public:
        Commande* constructeur(Robot* robot) const { return new EvaluerObst(robot); }
        void execute();
    protected:
    private:
        EvaluerObst(Robot* robot) : robot(robot) {} ;
        Robot* robot;
};

#endif // EVALUEROBST_H
