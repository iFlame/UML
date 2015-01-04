#ifndef PESEROBJET_H
#define PESEROBJET_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"

class PeserObjet : public Commande
{
    public:
        void execute();
        void desexecute();
        static PeserObjet peserObjet;
        PeserObjet(string x);
        Commande* constructeurVirtuel();
        PeserObjet(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"PeserObjet";}
    protected:
    private:
};
#endif // PESEROBJET_H
