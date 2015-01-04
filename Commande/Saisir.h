#ifndef SAISIR_H
#define SAISIR_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "../BaseRobot/Objet.h"


class Saisir : public Commande
{
    public:
        void execute();
        void desexecute();
        static Saisir saisir;
        Saisir(string x);
        Commande* constructeurVirtuel();
        Saisir(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"Saisir";}
        void setPoids(int);
        int StringToNumber ( const string& );

    protected:
    private:
        int poids;

};

#endif // SAISIR_H
