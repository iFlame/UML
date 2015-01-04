#ifndef APPELER_H
#define APPELER_H
#include "Commande.h"
#include "../BaseRobot/Robot.h"
#include "../BaseRobot/Plot.h"



class Appeler : public Commande
{
    public:
        void execute();
        void desexecute();
        static Appeler appeler;
        Appeler(string x);
        Commande* constructeurVirtuel();
        Appeler(Robot* bot, Invocateur* lf) {Commande(bot,lf);}
        void test(){cout<<"appeler";}
        void setMacro(string);

    protected:
    private:
        string macro;

};
#endif
