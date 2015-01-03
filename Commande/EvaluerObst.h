#ifndef EVALUEROBST_H
#define EVALUEROBST_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class EvaluerObst : public Commande
{
    public:
        void execute();
        void desexecute();
        static EvaluerObst evaluerObst;
        EvaluerObst(string x);
        Commande* constructeurVirtuel();
        EvaluerObst(Robot* bot, LecteurFichier* lf) {Commande(bot,lf);}
        void test(){cout<<"EvaluerObst";}
    protected:
    private:
};

#endif // EVALUEROBST_H
