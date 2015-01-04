#ifndef POSER_H
#define POSER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "../BaseRobot/Objet.h"


class Poser : public Commande
{
    public:
        void execute();
        void desexecute();
        static Poser poser;
        Poser(string x);
        Commande* constructeurVirtuel();
        Poser(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"Poser";}
    protected:
    private:
        Objet* objet;
};


#endif // POSER_H
