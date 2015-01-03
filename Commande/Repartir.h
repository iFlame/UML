#ifndef REPARTIR_H
#define REPARTIR_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class Repartir : public Commande
{
    public:
        void execute();
        void desexecute();
        static Repartir repartir;
        Repartir(string x);
        Commande* constructeurVirtuel();
        Repartir(Robot* bot, LecteurFichier* lf) {Commande(bot,lf);}
        void test(){cout<<"Repartir";}
    protected:
    private:
};

#endif // REPARTIR_H
