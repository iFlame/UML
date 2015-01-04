#ifndef TOURNER_H
#define TOURNER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"


class Tourner : public Commande
{
    public:
        void execute();
        void desexecute();
        static Tourner tourner;
        Tourner(string x);
        Commande* constructeurVirtuel();
        Tourner(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"Tourner";}
        void setDir(char);
        char StringToChar(const string &Text);

    protected:
    private:
        char direction;
        char oldDirection;
};

#endif // TOURNER_H
