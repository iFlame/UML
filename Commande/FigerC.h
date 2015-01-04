#ifndef _FIGER_H
#define _FIGER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class FigerC : public Commande
{
    public:
        void execute();
        void desexecute();
        static FigerC figer;
        FigerC(string x);
        Commande* constructeurVirtuel();
        FigerC(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"FigerC";}
    protected:
    private:
};
#endif // FIGER_H
