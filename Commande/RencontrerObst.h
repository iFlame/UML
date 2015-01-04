#ifndef RENCONTREROBST_H
#define RENCONTREROBST_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "../BaseRobot/Plot.h"



class RencontrerObst : public Commande
{
    public:
        void execute();
        void desexecute();
        static RencontrerObst rencontrerObst;
        RencontrerObst(string x);
        Commande* constructeurVirtuel();
        RencontrerObst(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"RencontrerObst";}
        void setHauteur(int);
        int StringToNumber ( const string& );

    protected:
    private:
        int hauteur;

};

#endif // RENCONTREROBST_H
